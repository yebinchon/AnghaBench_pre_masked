
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dat; scalar_t__ val; scalar_t__ pending; } ;
union cvmx_smix_rd_dat {TYPE_1__ s; int u64; } ;
struct TYPE_4__ {int phy_op; int phy_adr; int reg_adr; } ;
union cvmx_smix_cmd {scalar_t__ u64; TYPE_2__ s; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, int VAR_1, int VAR_2)
{
 union cvmx_smix_cmd VAR_3;
 union cvmx_smix_rd_dat VAR_4;

 VAR_3.u64 = 0;
 VAR_3.s.phy_op = 1;
 VAR_3.s.phy_adr = VAR_1;
 VAR_3.s.reg_adr = VAR_2;
 FUNC_3(FUNC_0(0), VAR_3.u64);

 do {
  if (!FUNC_4())
   FUNC_5();
  VAR_4.u64 = FUNC_2(FUNC_1(0));
 } while (VAR_4.s.pending);

 if (VAR_4.s.val)
  return VAR_4.s.dat;
 else
  return 0;
}
