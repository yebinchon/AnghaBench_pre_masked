
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dat; scalar_t__ pending; } ;
union cvmx_smix_wr_dat {void* u64; TYPE_2__ s; } ;
struct TYPE_3__ {int phy_adr; int reg_adr; int phy_op; } ;
union cvmx_smix_cmd {void* u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline int FUNC_7(int VAR_3, int VAR_4, int VAR_5,
         int VAR_6, int VAR_7)
{
 union cvmx_smix_cmd VAR_8;
 union cvmx_smix_wr_dat VAR_9;
 int VAR_10 = 1000;

 if (!FUNC_6(VAR_2))
  return -1;

 FUNC_2(VAR_3);

 VAR_9.u64 = 0;
 VAR_9.s.dat = VAR_6;
 FUNC_5(FUNC_1(VAR_3), VAR_9.u64);

 VAR_8.u64 = 0;
 VAR_8.s.phy_op = VAR_0;
 VAR_8.s.phy_adr = VAR_4;
 VAR_8.s.reg_adr = VAR_5;
 FUNC_5(FUNC_0(VAR_3), VAR_8.u64);

 do {
  FUNC_4(1000);
  VAR_9.u64 = FUNC_3(FUNC_1(VAR_3));
 } while (VAR_9.s.pending && --VAR_10);
 if (VAR_10 <= 0)
  return -1;

 VAR_9.u64 = 0;
 VAR_9.s.dat = VAR_7;
 FUNC_5(FUNC_1(VAR_3), VAR_9.u64);

 VAR_8.u64 = 0;
 VAR_8.s.phy_op = VAR_1;
 VAR_8.s.phy_adr = VAR_4;
 VAR_8.s.reg_adr = VAR_5;
 FUNC_5(FUNC_0(VAR_3), VAR_8.u64);

 do {
  FUNC_4(1000);
  VAR_9.u64 = FUNC_3(FUNC_1(VAR_3));
 } while (VAR_9.s.pending && --VAR_10);
 if (VAR_10 <= 0)
  return -1;

 return 0;
}
