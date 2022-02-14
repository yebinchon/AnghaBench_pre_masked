
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {char* data; int* id; int * tool; TYPE_1__* shared; struct wacom_features* features; } ;
struct wacom_features {int pressure_max; } ;
typedef int __le16 ;
struct TYPE_2__ {int stylus_in_proximity; int touch_down; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (void*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct wacom_wac *VAR_9, void *VAR_10)
{
 struct wacom_features *VAR_11 = VAR_9->features;
 char *VAR_12 = VAR_9->data;
 int VAR_13;
 bool VAR_14 = VAR_12[1] & 0x20;

 if (!VAR_9->shared->stylus_in_proximity)

  VAR_9->tool[0] = (VAR_12[1] & 0x0c) ? VAR_7 : VAR_6;


 VAR_9->shared->stylus_in_proximity = VAR_14;


 if (!VAR_9->shared->touch_down) {
  FUNC_2(VAR_10, VAR_4, VAR_12[1] & 0x02);
  FUNC_2(VAR_10, VAR_5, VAR_12[1] & 0x10);
  FUNC_1(VAR_10, VAR_2, FUNC_0((__le16 *)&VAR_12[2]));
  FUNC_1(VAR_10, VAR_3, FUNC_0((__le16 *)&VAR_12[4]));
  VAR_13 = ((VAR_12[7] & 0x01) << 8) | VAR_12[6];
  if (VAR_13 < 0)
   VAR_13 = VAR_11->pressure_max + VAR_13 + 1;
  FUNC_1(VAR_10, VAR_1, VAR_13);
  FUNC_2(VAR_10, VAR_8, VAR_12[1] & 0x05);
  FUNC_2(VAR_10, VAR_9->tool[0], VAR_14);
  FUNC_1(VAR_10, VAR_0, VAR_9->id[0]);
  return 1;
 }

 return 0;
}
