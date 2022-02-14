
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dat; scalar_t__ pending; } ;
union cvmx_smix_wr_dat {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int phy_adr; int reg_adr; scalar_t__ phy_op; } ;
union cvmx_smix_cmd {scalar_t__ u64; TYPE_1__ s; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0, int VAR_1, int VAR_2,
          int VAR_3)
{
 union cvmx_smix_cmd VAR_4;
 union cvmx_smix_wr_dat VAR_5;

 VAR_5.u64 = 0;
 VAR_5.s.dat = VAR_3;
 FUNC_3(FUNC_1(0), VAR_5.u64);

 VAR_4.u64 = 0;
 VAR_4.s.phy_op = 0;
 VAR_4.s.phy_adr = VAR_1;
 VAR_4.s.reg_adr = VAR_2;
 FUNC_3(FUNC_0(0), VAR_4.u64);

 do {
  if (!FUNC_4())
   FUNC_5();
  VAR_5.u64 = FUNC_2(FUNC_1(0));
 } while (VAR_5.s.pending);
}
