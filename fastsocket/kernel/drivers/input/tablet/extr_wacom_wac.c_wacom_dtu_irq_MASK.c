
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_wac {char* data; int* id; int * tool; struct wacom_features* features; } ;
struct wacom_features {int pressure_max; } ;
typedef int __le16 ;


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
 int FUNC_0 (char*,char) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (void*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct wacom_wac *VAR_11, void *VAR_12)
{
 struct wacom_features *VAR_13 = VAR_11->features;
 char *VAR_14 = VAR_11->data;
 int VAR_15 = VAR_14[1] & 0x20, VAR_16;

 FUNC_0("wacom_dtu_irq: received report #%d", VAR_14[0]);

 if (VAR_15) {

  VAR_11->tool[0] = (VAR_14[1] & 0x0c) ? VAR_7 : VAR_6;
  if (VAR_11->tool[0] == VAR_6)
   VAR_11->id[0] = VAR_10;
  else
   VAR_11->id[0] = VAR_9;
 }
 FUNC_4(VAR_12, VAR_4, VAR_14[1] & 0x02);
 FUNC_4(VAR_12, VAR_5, VAR_14[1] & 0x10);
 FUNC_3(VAR_12, VAR_2, FUNC_1((__le16 *)&VAR_14[2]));
 FUNC_3(VAR_12, VAR_3, FUNC_1((__le16 *)&VAR_14[4]));
 VAR_16 = ((VAR_14[7] & 0x01) << 8) | VAR_14[6];
 if (VAR_16 < 0)
  VAR_16 = VAR_13->pressure_max + VAR_16 + 1;
 FUNC_3(VAR_12, VAR_1, VAR_16);
 FUNC_4(VAR_12, VAR_8, VAR_14[1] & 0x05);
 if (!VAR_15)
  VAR_11->id[0] = 0;
 FUNC_4(VAR_12, VAR_11->tool[0], VAR_15);
 FUNC_3(VAR_12, VAR_0, VAR_11->id[0]);
 FUNC_2(VAR_12);
 return 1;
}
