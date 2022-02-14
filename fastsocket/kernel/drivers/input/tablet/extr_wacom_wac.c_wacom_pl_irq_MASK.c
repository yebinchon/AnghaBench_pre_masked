
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; int* id; void** tool; TYPE_1__* features; } ;
struct TYPE_2__ {int pressure_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,unsigned char) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (void*,void*,int) ;

__attribute__((used)) static int FUNC_4(struct wacom_wac *VAR_11, void *VAR_12)
{
 unsigned char *VAR_13 = VAR_11->data;
 int VAR_14, VAR_15;

 if (VAR_13[0] != 2) {
  FUNC_0("wacom_pl_irq: received unknown report #%d", VAR_13[0]);
  return 0;
 }

 VAR_14 = VAR_13[1] & 0x40;

 if (VAR_14) {
  VAR_11->id[0] = VAR_9;
  VAR_15 = (signed char)((VAR_13[7] << 1) | ((VAR_13[4] >> 2) & 1));
  if (VAR_11->features->pressure_max > 255)
   VAR_15 = (VAR_15 << 1) | ((VAR_13[4] >> 6) & 1);
  VAR_15 += (VAR_11->features->pressure_max + 1) / 2;







  if (!VAR_11->tool[0]) {

   if (VAR_13[1] & 0x10)
    VAR_11->tool[1] = VAR_7;
   else

    VAR_11->tool[1] = (VAR_13[4] & 0x20) ? VAR_7 : VAR_6;
  } else {

   if (VAR_11->tool[1] == VAR_7 && !(VAR_13[4] & 0x20)) {

    FUNC_3(VAR_12, VAR_11->tool[1], 0);
    FUNC_1(VAR_12);
    VAR_11->tool[1] = VAR_6;
    return 0;
   }
  }
  if (VAR_11->tool[1] != VAR_7) {

   VAR_11->tool[1] = VAR_6;
   VAR_11->id[0] = VAR_10;
  }
  FUNC_3(VAR_12, VAR_11->tool[1], VAR_14);
  FUNC_2(VAR_12, VAR_0, VAR_11->id[0]);
  FUNC_2(VAR_12, VAR_2, VAR_13[3] | (VAR_13[2] << 7) | ((VAR_13[1] & 0x03) << 14));
  FUNC_2(VAR_12, VAR_3, VAR_13[6] | (VAR_13[5] << 7) | ((VAR_13[4] & 0x03) << 14));
  FUNC_2(VAR_12, VAR_1, VAR_15);

  FUNC_3(VAR_12, VAR_8, VAR_13[4] & 0x08);
  FUNC_3(VAR_12, VAR_4, VAR_13[4] & 0x10);

  FUNC_3(VAR_12, VAR_5, (VAR_11->tool[1] == VAR_6) && (VAR_13[4] & 0x20));
 } else {

  if (VAR_11->tool[1] != VAR_7) {

   VAR_11->tool[1] = VAR_6;
  }
  FUNC_3(VAR_12, VAR_11->tool[1], VAR_14);
 }

 VAR_11->tool[0] = VAR_14;
 return 1;
}
