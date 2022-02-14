
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct asd_ha_struct*) ;
 int FUNC_1 (struct asd_ha_struct*) ;
 int FUNC_2 (struct asd_ha_struct*) ;
 int FUNC_3 (struct asd_ha_struct*) ;
 int FUNC_4 (struct asd_ha_struct*) ;
 int FUNC_5 (struct asd_ha_struct*) ;
 int FUNC_6 (struct asd_ha_struct*) ;
 int FUNC_7 (struct asd_ha_struct*) ;
 int FUNC_8 (struct asd_ha_struct*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (struct asd_ha_struct*) ;
 int FUNC_11 (struct asd_ha_struct*) ;
 int FUNC_12 (struct asd_ha_struct*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int*) ;
 int FUNC_15 (int ,int ,int) ;

int FUNC_16(struct asd_ha_struct *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_14(VAR_3->pcidev, VAR_1, &VAR_5);
 if (VAR_4) {
  FUNC_9("couldn't read PCIC_HSTPCIX_CNTRL of %s\n",
      FUNC_13(VAR_3->pcidev));
  return VAR_4;
 }
 FUNC_15(VAR_3->pcidev, VAR_1,
     VAR_5 | VAR_2);
 if (VAR_4) {
  FUNC_9("couldn't disable split completion timer of %s\n",
      FUNC_13(VAR_3->pcidev));
  return VAR_4;
 }

 VAR_4 = FUNC_12(VAR_3);
 if (VAR_4) {
  FUNC_9("couldn't read ocm(%d)\n", VAR_4);


 }

 VAR_4 = FUNC_11(VAR_3);
 if (VAR_4) {
  FUNC_9("couldn't read flash(%d)\n", VAR_4);



 }

 FUNC_2(VAR_3);

 if (FUNC_0(VAR_3)) {
  FUNC_9("No SAS Address provided for %s\n",
      FUNC_13(VAR_3->pcidev));
  VAR_4 = -VAR_0;
  goto Out;
 }

 FUNC_10(VAR_3);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4) {
  FUNC_9("couldn't initialize phys for %s\n",
       FUNC_13(VAR_3->pcidev));
  goto Out;
 }

 FUNC_6(VAR_3);

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4) {
  FUNC_9("couldn't initialize scbs for %s\n",
       FUNC_13(VAR_3->pcidev));
  goto Out;
 }

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  FUNC_9("couldn't initialize the done list:%d\n",
       VAR_4);
  goto Out;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  FUNC_9("couldn't initialize escbs\n");
  goto Out;
 }

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_9("couldn't init the chip\n");
  goto Out;
 }
Out:
 return VAR_4;
}
