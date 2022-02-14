
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int alive_command; int ucode_valid; int * time_stamp; int device_identifier; int software_revision; } ;
struct ipw_priv {TYPE_1__ dino_alive; } ;
typedef int __le32 ;
typedef int __le16 ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ipw_priv*) ;
 int FUNC_5 (struct ipw_priv*,int ) ;
 int FUNC_6 (struct ipw_priv*,int ) ;
 int FUNC_7 (struct ipw_priv*) ;
 int FUNC_8 (struct ipw_priv*,int,int ) ;
 int FUNC_9 (struct ipw_priv*,int ,int ) ;
 int FUNC_10 (struct ipw_priv*,int ,int ) ;
 int FUNC_11 (struct ipw_priv*,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (TYPE_1__*,int *,int) ;
 int FUNC_15 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_16(struct ipw_priv *VAR_15, u8 * VAR_16, size_t VAR_17)
{
 int VAR_18 = 0, VAR_19, VAR_20;
 u8 VAR_21 = 0;
 __le16 *VAR_22;

 VAR_22 = (__le16 *) VAR_16;

 FUNC_2(">>\n");

 VAR_18 = FUNC_7(VAR_15);

 if (VAR_18 < 0)
  return VAR_18;

 for (VAR_20 = VAR_14;
      VAR_20 < VAR_13; VAR_20 += 4) {
  FUNC_8(VAR_15, VAR_20, 0);
 }


 FUNC_15(&VAR_15->dino_alive, 0, sizeof(VAR_15->dino_alive));



 FUNC_10(VAR_15, VAR_12, VAR_10);
 FUNC_4(VAR_15);
 FUNC_10(VAR_15, VAR_12, VAR_9);
 FUNC_13(1);


 FUNC_10(VAR_15, VAR_11, VAR_7);
 FUNC_13(1);

 FUNC_10(VAR_15, VAR_11, 0);
 FUNC_13(1);


 FUNC_11(VAR_15, VAR_5, 0x0);
 FUNC_11(VAR_15, VAR_5, VAR_0);
 FUNC_13(1);
 for (VAR_19 = 0; VAR_19 < VAR_17 / 2; VAR_19++)
  FUNC_9(VAR_15, VAR_6,
    FUNC_12(VAR_22[VAR_19]));


 FUNC_11(VAR_15, VAR_5, 0);
 FUNC_11(VAR_15, VAR_5, VAR_1);




 for (VAR_19 = 0; VAR_19 < 100; VAR_19++) {

  VAR_21 = FUNC_6(VAR_15, VAR_5);
  if (VAR_21 & VAR_2)
   break;
  FUNC_13(1);
 }

 if (VAR_21 & VAR_2) {

  __le32 VAR_23[(sizeof(VAR_15->dino_alive) + 3) / 4];

  for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_23); VAR_19++)
   VAR_23[VAR_19] =
       FUNC_3(FUNC_5(VAR_15,
             VAR_8));
  FUNC_14(&VAR_15->dino_alive, VAR_23,
         sizeof(VAR_15->dino_alive));
  if (VAR_15->dino_alive.alive_command == 1
      && VAR_15->dino_alive.ucode_valid == 1) {
   VAR_18 = 0;
   FUNC_1
       ("Microcode OK, rev. %d (0x%x) dev. %d (0x%x) "
        "of %02d/%02d/%02d %02d:%02d\n",
        VAR_15->dino_alive.software_revision,
        VAR_15->dino_alive.software_revision,
        VAR_15->dino_alive.device_identifier,
        VAR_15->dino_alive.device_identifier,
        VAR_15->dino_alive.time_stamp[0],
        VAR_15->dino_alive.time_stamp[1],
        VAR_15->dino_alive.time_stamp[2],
        VAR_15->dino_alive.time_stamp[3],
        VAR_15->dino_alive.time_stamp[4]);
  } else {
   FUNC_1("Microcode is not alive\n");
   VAR_18 = -VAR_3;
  }
 } else {
  FUNC_1("No alive response from DINO\n");
  VAR_18 = -VAR_4;
 }



 FUNC_11(VAR_15, VAR_5, 0);

 return VAR_18;
}
