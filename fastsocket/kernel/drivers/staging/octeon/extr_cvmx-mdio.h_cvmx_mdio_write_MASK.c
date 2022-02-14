
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dat; scalar_t__ pending; } ;
union cvmx_smix_wr_dat {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int phy_adr; int reg_adr; int phy_op; } ;
union cvmx_smix_cmd {scalar_t__ u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 union cvmx_smix_cmd VAR_6;
 union cvmx_smix_wr_dat VAR_7;
 int VAR_8 = 1000;

 if (FUNC_6(VAR_1))
  FUNC_2(VAR_2);

 VAR_7.u64 = 0;
 VAR_7.s.dat = VAR_5;
 FUNC_5(FUNC_1(VAR_2), VAR_7.u64);

 VAR_6.u64 = 0;
 VAR_6.s.phy_op = VAR_0;
 VAR_6.s.phy_adr = VAR_3;
 VAR_6.s.reg_adr = VAR_4;
 FUNC_5(FUNC_0(VAR_2), VAR_6.u64);

 do {
  FUNC_4(1000);
  VAR_7.u64 = FUNC_3(FUNC_1(VAR_2));
 } while (VAR_7.s.pending && --VAR_8);
 if (VAR_8 <= 0)
  return -1;

 return 0;
}
