
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u8 ;
struct ipw_priv {int eeprom_delay; TYPE_2__* rxq; int status; TYPE_1__* ieee; } ;
struct ipw_fw {char* data; int fw_size; int ucode_size; int boot_size; } ;
struct firmware {scalar_t__ data; } ;
struct TYPE_6__ {int read; } ;
struct TYPE_5__ {int iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (char*) ;



 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct ipw_priv*) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (struct ipw_priv*,struct firmware const**,char*) ;
 int FUNC_6 (struct ipw_priv*,char*,size_t) ;
 int FUNC_7 (struct ipw_priv*,char*,size_t) ;
 int FUNC_8 (struct ipw_priv*,int ,int ,int) ;
 int FUNC_9 (struct ipw_priv*) ;
 int FUNC_10 (struct ipw_priv*,int ) ;
 int FUNC_11 (struct ipw_priv*) ;
 TYPE_2__* FUNC_12 (struct ipw_priv*) ;
 int FUNC_13 (struct ipw_priv*,TYPE_2__*) ;
 int FUNC_14 (struct ipw_priv*) ;
 int FUNC_15 (struct ipw_priv*,TYPE_2__*) ;
 int FUNC_16 (struct ipw_priv*) ;
 int FUNC_17 (struct ipw_priv*) ;
 int FUNC_18 (struct ipw_priv*) ;
 int FUNC_19 (struct ipw_priv*,int ,int ) ;
 int FUNC_20 (struct ipw_priv*,scalar_t__,scalar_t__) ;
 size_t FUNC_21 (int ) ;
 int FUNC_22 (struct firmware const*) ;

__attribute__((used)) static int FUNC_23(struct ipw_priv *VAR_13)
{

 const struct firmware *VAR_14 = ((void*)0);

 struct ipw_fw *VAR_15;
 u8 *VAR_16, *VAR_17, *VAR_18;
 u8 *VAR_19 = ((void*)0);
 int VAR_20 = 0, VAR_21 = 3;

 switch (VAR_13->ieee->iw_mode) {
 case 130:
  VAR_19 = "ipw2200-ibss.fw";
  break;





 case 129:
  VAR_19 = "ipw2200-bss.fw";
  break;
 }

 if (!VAR_19) {
  VAR_20 = -VAR_0;
  goto error;
 }




  VAR_20 = FUNC_5(VAR_13, &VAR_14, VAR_19);
  if (VAR_20 < 0)
   goto error;




 VAR_15 = (void *)VAR_14->data;
 VAR_16 = &VAR_15->data[0];
 VAR_17 = &VAR_15->data[FUNC_21(VAR_15->boot_size)];
 VAR_18 = &VAR_15->data[FUNC_21(VAR_15->boot_size) +
      FUNC_21(VAR_15->ucode_size)];

 if (VAR_20 < 0)
  goto error;

 if (!VAR_13->rxq)
  VAR_13->rxq = FUNC_12(VAR_13);
 else
  FUNC_15(VAR_13, VAR_13->rxq);
 if (!VAR_13->rxq) {
  FUNC_1("Unable to initialize Rx queue\n");
  goto error;
 }

      retry:

 FUNC_19(VAR_13, VAR_6, ~VAR_5);
 VAR_13->status &= ~VAR_11;


 FUNC_19(VAR_13, VAR_7, VAR_5);

 FUNC_17(VAR_13);

 VAR_20 = FUNC_11(VAR_13);
 if (VAR_20 < 0) {
  FUNC_1("Unable to reset NIC\n");
  goto error;
 }

 FUNC_20(VAR_13, VAR_8,
   VAR_9 - VAR_8);


 VAR_20 = FUNC_6(VAR_13, VAR_16, FUNC_21(VAR_15->boot_size));
 if (VAR_20 < 0) {
  FUNC_1("Unable to load boot firmware: %d\n", VAR_20);
  goto error;
 }


 FUNC_16(VAR_13);


 VAR_20 = FUNC_8(VAR_13, VAR_7,
     VAR_3, 500);
 if (VAR_20 < 0) {
  FUNC_1("device failed to boot initial fw image\n");
  goto error;
 }
 FUNC_0("initial device response after %dms\n", VAR_20);


 FUNC_19(VAR_13, VAR_7, VAR_3);


 VAR_20 = FUNC_7(VAR_13, VAR_17, FUNC_21(VAR_15->ucode_size));
 if (VAR_20 < 0) {
  FUNC_1("Unable to load ucode: %d\n", VAR_20);
  goto error;
 }


 FUNC_17(VAR_13);


 VAR_20 = FUNC_6(VAR_13, VAR_18, FUNC_21(VAR_15->fw_size));
 if (VAR_20 < 0) {
  FUNC_1("Unable to load firmware: %d\n", VAR_20);
  goto error;
 }




 FUNC_19(VAR_13, VAR_2, 0);

 VAR_20 = FUNC_9(VAR_13);
 if (VAR_20 < 0) {
  FUNC_1("Unable to initialize queues\n");
  goto error;
 }


 FUNC_19(VAR_13, VAR_6, ~VAR_5);

 FUNC_19(VAR_13, VAR_7, VAR_5);


 FUNC_16(VAR_13);

 if (FUNC_10(VAR_13, VAR_7) & VAR_4) {
  if (VAR_21 > 0) {
   FUNC_2("Parity error.  Retrying init.\n");
   VAR_21--;
   goto retry;
  }

  FUNC_1("TODO: Handle parity error -- schedule restart?\n");
  VAR_20 = -VAR_1;
  goto error;
 }


 VAR_20 = FUNC_8(VAR_13, VAR_7,
     VAR_3, 500);
 if (VAR_20 < 0) {
  FUNC_1("device failed to start within 500ms\n");
  goto error;
 }
 FUNC_0("device response after %dms\n", VAR_20);


 FUNC_19(VAR_13, VAR_7, VAR_3);


 VAR_13->eeprom_delay = 1;
 FUNC_3(VAR_13);


 FUNC_4(VAR_13);


 FUNC_14(VAR_13);

 FUNC_19(VAR_13, VAR_10, VAR_13->rxq->read);


 FUNC_19(VAR_13, VAR_7, VAR_5);


 FUNC_22(VAR_14);

 return 0;

      error:
 if (VAR_13->rxq) {
  FUNC_13(VAR_13, VAR_13->rxq);
  VAR_13->rxq = ((void*)0);
 }
 FUNC_18(VAR_13);
 FUNC_22(VAR_14);





 return VAR_20;
}
