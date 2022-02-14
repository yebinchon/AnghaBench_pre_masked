
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct crb_addr_pair {int addr; int data; } ;
struct TYPE_4__ {int dpc_flags; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned long VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (struct crb_addr_pair*) ;
 struct crb_addr_pair* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_1__*,int,char*,...) ;
 int VAR_22 ;
 int VAR_23 ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (struct qla_hw_data*,int) ;
 scalar_t__ FUNC_8 (struct qla_hw_data*,int,...) ;
 int FUNC_9 (struct qla_hw_data*) ;
 int FUNC_10 (struct qla_hw_data*) ;
 int FUNC_11 (struct qla_hw_data*,int,int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int
FUNC_13(scsi_qla_host_t *VAR_24)
{
 int VAR_25, VAR_26;
 int VAR_27 ;
 struct crb_addr_pair *VAR_28;
 unsigned long VAR_29;
 unsigned VAR_30, VAR_31;
 struct qla_hw_data *VAR_32 = VAR_24->hw;


 FUNC_9(VAR_32);


 FUNC_11(VAR_32, VAR_7 + 0x10, 0x0);
 FUNC_11(VAR_32, VAR_7 + 0x14, 0x0);
 FUNC_11(VAR_32, VAR_7 + 0x18, 0x0);
 FUNC_11(VAR_32, VAR_7 + 0x1c, 0x0);
 FUNC_11(VAR_32, VAR_7 + 0x20, 0x0);
 FUNC_11(VAR_32, VAR_7 + 0x24, 0x0);


 FUNC_11(VAR_32, VAR_8 + 0x40, 0xff);

 FUNC_11(VAR_32, VAR_8 + 0x70000, 0x00);

 FUNC_11(VAR_32, VAR_8 + 0x80000, 0x00);

 FUNC_11(VAR_32, VAR_8 + 0x90000, 0x00);

 FUNC_11(VAR_32, VAR_8 + 0xa0000, 0x00);

 FUNC_11(VAR_32, VAR_8 + 0xb0000, 0x00);


 VAR_26 = FUNC_7(VAR_32, VAR_17 + 0x1000);
 FUNC_11(VAR_32, VAR_17 + 0x1000, VAR_26 & (~(0x1)));


 FUNC_11(VAR_32, VAR_6 + 0x1300, 0x1);


 FUNC_11(VAR_32, VAR_18 + 0x0, 0x0);
 FUNC_11(VAR_32, VAR_18 + 0x8, 0x0);
 FUNC_11(VAR_32, VAR_18 + 0x10, 0x0);
 FUNC_11(VAR_32, VAR_18 + 0x18, 0x0);
 FUNC_11(VAR_32, VAR_18 + 0x100, 0x0);
 FUNC_11(VAR_32, VAR_18 + 0x200, 0x0);


 FUNC_11(VAR_32, VAR_9 + 0x3c, 1);
 FUNC_11(VAR_32, VAR_10 + 0x3c, 1);
 FUNC_11(VAR_32, VAR_11 + 0x3c, 1);
 FUNC_11(VAR_32, VAR_12 + 0x3c, 1);
 FUNC_11(VAR_32, VAR_13 + 0x3c, 1);
 FUNC_4(5);


 if (FUNC_12(VAR_0, &VAR_24->dpc_flags))

  FUNC_11(VAR_32, VAR_20, 0xfeffffff);
 else
  FUNC_11(VAR_32, VAR_20, 0xffffffff);
 FUNC_10(VAR_32);






 if (FUNC_8(VAR_32, 0, &VAR_31) != 0 || VAR_31 != 0xcafecafeUL ||
     FUNC_8(VAR_32, 4, &VAR_31) != 0) {
  FUNC_5(VAR_22, VAR_24, 0x006e,
      "Error Reading crb_init area: n: %08x.\n", VAR_31);
  return -1;
 }




 VAR_30 = VAR_31 & 0xffffU;
 VAR_31 = (VAR_31 >> 16) & 0xffffU;


 if (VAR_31 >= 1024) {
  FUNC_5(VAR_22, VAR_24, 0x0071,
      "Card flash not initialized:n=0x%x.\n", VAR_31);
  return -1;
 }

 FUNC_5(VAR_23, VAR_24, 0x0072,
     "%d CRB init values found in ROM.\n", VAR_31);

 VAR_28 = FUNC_3(VAR_31 * sizeof(struct crb_addr_pair), VAR_2);
 if (VAR_28 == ((void*)0)) {
  FUNC_5(VAR_22, VAR_24, 0x010c,
      "Unable to allocate memory.\n");
  return -1;
 }

 for (VAR_27 = 0; VAR_27 < VAR_31; VAR_27++) {
  if (FUNC_8(VAR_32, 8*VAR_27 + 4*VAR_30, &VAR_26) != 0 ||
      FUNC_8(VAR_32, 8*VAR_27 + 4*VAR_30 + 4, &VAR_25) != 0) {
   FUNC_2(VAR_28);
   return -1;
  }

  VAR_28[VAR_27].addr = VAR_25;
  VAR_28[VAR_27].data = VAR_26;
 }

 for (VAR_27 = 0; VAR_27 < VAR_31; VAR_27++) {



  VAR_29 = FUNC_6((unsigned long)VAR_28[VAR_27].addr) +
      VAR_19;





  if (VAR_29 == FUNC_0(0x1fc))
   continue;


  if (VAR_29 == (VAR_21 + 0xbc))
   continue;


  if (VAR_29 == (VAR_21 + 0xc8))
   continue;


  if (VAR_29 == FUNC_1(VAR_3))
   continue;

  if (VAR_29 == FUNC_1(VAR_4))
   continue;

  if ((VAR_29 & 0x0ff00000) == VAR_16)
   continue;

  if ((VAR_29 & 0x0ff00000) == VAR_5)
   continue;

  if (VAR_29 == VAR_1) {
   FUNC_5(VAR_22, VAR_24, 0x0116,
       "Unknow addr: 0x%08lx.\n", VAR_28[VAR_27].addr);
   continue;
  }

  FUNC_11(VAR_32, VAR_29, VAR_28[VAR_27].data);




  if (VAR_29 == VAR_20)
   FUNC_4(1000);




  FUNC_4(1);
 }

 FUNC_2(VAR_28);


 FUNC_11(VAR_32, VAR_14+0xec, 0x1e);
 FUNC_11(VAR_32, VAR_14+0x4c, 8);
 FUNC_11(VAR_32, VAR_15+0x4c, 8);


 FUNC_11(VAR_32, VAR_9+0x8, 0);
 FUNC_11(VAR_32, VAR_9+0xc, 0);
 FUNC_11(VAR_32, VAR_10+0x8, 0);
 FUNC_11(VAR_32, VAR_10+0xc, 0);
 FUNC_11(VAR_32, VAR_11+0x8, 0);
 FUNC_11(VAR_32, VAR_11+0xc, 0);
 FUNC_11(VAR_32, VAR_12+0x8, 0);
 FUNC_11(VAR_32, VAR_12+0xc, 0);
 return 0;
}
