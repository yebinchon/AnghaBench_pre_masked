
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dat; scalar_t__ pending; } ;
union cvmx_smix_wr_dat {void* u64; TYPE_1__ s; } ;
struct TYPE_6__ {int dat; scalar_t__ val; scalar_t__ pending; } ;
union cvmx_smix_rd_dat {TYPE_3__ s; void* u64; } ;
struct TYPE_5__ {int phy_adr; int reg_adr; int phy_op; } ;
union cvmx_smix_cmd {void* u64; TYPE_2__ s; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,int,int,int,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static inline int FUNC_9(int VAR_3, int VAR_4, int VAR_5,
        int VAR_6)
{
 union cvmx_smix_cmd VAR_7;
 union cvmx_smix_rd_dat VAR_8;
 union cvmx_smix_wr_dat VAR_9;
 int VAR_10 = 1000;

 if (!FUNC_8(VAR_2))
  return -1;

 FUNC_3(VAR_3);

 VAR_9.u64 = 0;
 VAR_9.s.dat = VAR_6;
 FUNC_7(FUNC_2(VAR_3), VAR_9.u64);

 VAR_7.u64 = 0;
 VAR_7.s.phy_op = VAR_0;
 VAR_7.s.phy_adr = VAR_4;
 VAR_7.s.reg_adr = VAR_5;
 FUNC_7(FUNC_0(VAR_3), VAR_7.u64);

 do {
  FUNC_6(1000);
  VAR_9.u64 = FUNC_5(FUNC_2(VAR_3));
 } while (VAR_9.s.pending && --VAR_10);
 if (VAR_10 <= 0) {
  FUNC_4("cvmx_mdio_45_read: bus_id %d phy_id %2d "
        "device %2d register %2d   TIME OUT(address)\n",
       VAR_3, VAR_4, VAR_5, VAR_6);
  return -1;
 }

 VAR_7.u64 = 0;
 VAR_7.s.phy_op = VAR_1;
 VAR_7.s.phy_adr = VAR_4;
 VAR_7.s.reg_adr = VAR_5;
 FUNC_7(FUNC_0(VAR_3), VAR_7.u64);

 do {
  FUNC_6(1000);
  VAR_8.u64 = FUNC_5(FUNC_1(VAR_3));
 } while (VAR_8.s.pending && --VAR_10);

 if (VAR_10 <= 0) {
  FUNC_4("cvmx_mdio_45_read: bus_id %d phy_id %2d "
        "device %2d register %2d   TIME OUT(data)\n",
       VAR_3, VAR_4, VAR_5, VAR_6);
  return -1;
 }

 if (VAR_8.s.val)
  return VAR_8.s.dat;
 else {
  FUNC_4("cvmx_mdio_45_read: bus_id %d phy_id %2d "
        "device %2d register %2d   INVALID READ\n",
       VAR_3, VAR_4, VAR_5, VAR_6);
  return -1;
 }
}
