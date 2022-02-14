
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct w100_pll_info {unsigned int tfgoal; } ;
struct TYPE_4__ {int pll_pwdn; int pll_reset; int pll_tcpoff; int pll_pvg; int pll_vcofr; int pll_ioffset; int pll_ring_off; int pll_dactal; } ;
struct TYPE_5__ {TYPE_1__ f; scalar_t__ val; } ;
struct TYPE_6__ {TYPE_2__ pll_cntl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct w100_pll_info *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;


 VAR_3.pll_cntl.f.pll_pwdn = 0x0;
 VAR_3.pll_cntl.f.pll_reset = 0x0;
 VAR_3.pll_cntl.f.pll_tcpoff = 0x1;
 VAR_3.pll_cntl.f.pll_pvg = 0x0;
 VAR_3.pll_cntl.f.pll_vcofr = 0x0;
 VAR_3.pll_cntl.f.pll_ioffset = 0x0;
 VAR_3.pll_cntl.f.pll_ring_off = 0x0;





 do {

  VAR_3.pll_cntl.f.pll_dactal = 0xd;
  FUNC_1((u32) (VAR_3.pll_cntl.val), VAR_2 + VAR_1);

  VAR_5 = FUNC_0(VAR_0);
  if (VAR_5 >= (VAR_4->tfgoal)) {

   VAR_3.pll_cntl.f.pll_dactal = 0x7;
   FUNC_1((u32) (VAR_3.pll_cntl.val), VAR_2 + VAR_1);

   VAR_6 = FUNC_0(VAR_0);
   if (VAR_6 <= (VAR_4->tfgoal))
    return 1;

   if ((VAR_3.pll_cntl.f.pll_vcofr == 0x0) &&
    ((VAR_3.pll_cntl.f.pll_pvg == 0x7) ||
    (VAR_3.pll_cntl.f.pll_ioffset == 0x0))) {

    VAR_3.pll_cntl.f.pll_vcofr = 0x1;
    VAR_3.pll_cntl.f.pll_pvg = 0x0;
    VAR_3.pll_cntl.f.pll_ioffset = 0x0;
    continue;
   }
  }
  if ((VAR_3.pll_cntl.f.pll_ioffset) < 0x3) {
   VAR_3.pll_cntl.f.pll_ioffset += 0x1;
  } else if ((VAR_3.pll_cntl.f.pll_pvg) < 0x7) {
   VAR_3.pll_cntl.f.pll_ioffset = 0x0;
   VAR_3.pll_cntl.f.pll_pvg += 0x1;
  } else {
   return 0;
  }
 } while(1);
}
