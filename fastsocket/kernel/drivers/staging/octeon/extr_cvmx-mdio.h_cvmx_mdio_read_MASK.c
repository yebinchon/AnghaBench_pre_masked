
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dat; scalar_t__ val; scalar_t__ pending; } ;
union cvmx_smix_rd_dat {TYPE_1__ s; int u64; } ;
struct TYPE_4__ {int phy_adr; int reg_adr; int phy_op; } ;
union cvmx_smix_cmd {scalar_t__ u64; TYPE_2__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(int VAR_2, int VAR_3, int VAR_4)
{
 union cvmx_smix_cmd VAR_5;
 union cvmx_smix_rd_dat VAR_6;
 int VAR_7 = 1000;

 if (FUNC_6(VAR_1))
  FUNC_2(VAR_2);

 VAR_5.u64 = 0;
 VAR_5.s.phy_op = VAR_0;
 VAR_5.s.phy_adr = VAR_3;
 VAR_5.s.reg_adr = VAR_4;
 FUNC_5(FUNC_0(VAR_2), VAR_5.u64);

 do {
  FUNC_4(1000);
  VAR_6.u64 = FUNC_3(FUNC_1(VAR_2));
 } while (VAR_6.s.pending && VAR_7--);

 if (VAR_6.s.val)
  return VAR_6.s.dat;
 else
  return -1;
}
