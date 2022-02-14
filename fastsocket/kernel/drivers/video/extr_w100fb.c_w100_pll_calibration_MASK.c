
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct w100_pll_info {int dummy; } ;
struct TYPE_4__ {int pll_dactal; int pll_tcpoff; } ;
struct TYPE_5__ {scalar_t__ val; TYPE_1__ f; } ;
struct TYPE_6__ {TYPE_2__ pll_cntl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct w100_pll_info*) ;
 TYPE_3__ VAR_2 ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct w100_pll_info *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);



 VAR_2.pll_cntl.f.pll_dactal = 0xa;
 FUNC_2((u32) (VAR_2.pll_cntl.val), VAR_1 + VAR_0);

 FUNC_0(1);


 VAR_2.pll_cntl.f.pll_tcpoff = 0x0;
 FUNC_2((u32) (VAR_2.pll_cntl.val), VAR_1 + VAR_0);


 VAR_2.pll_cntl.f.pll_dactal = 0x0;
 FUNC_2((u32) (VAR_2.pll_cntl.val), VAR_1 + VAR_0);

 FUNC_0(400);



 return VAR_4;
}
