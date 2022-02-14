
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; scalar_t__* tool; unsigned char* id; int* serial; TYPE_1__* features; } ;
struct TYPE_2__ {scalar_t__ type; } ;


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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 int VAR_53 ;
 unsigned char VAR_54 ;
 int VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 int FUNC_0 (char*,unsigned char) ;
 unsigned char FUNC_1 (unsigned char*) ;
 int FUNC_2 (void*,int ,int ,int) ;
 int FUNC_3 (struct wacom_wac*,void*) ;
 int FUNC_4 (struct wacom_wac*,void*) ;
 int FUNC_5 (void*,int ,unsigned char) ;
 int FUNC_6 (void*,scalar_t__,int) ;
 int FUNC_7 (void*,int ,unsigned char) ;

__attribute__((used)) static int FUNC_8(struct wacom_wac *VAR_59, void *VAR_60)
{
 unsigned char *VAR_61 = VAR_59->data;
 unsigned int VAR_62;
 int VAR_63 = 0, VAR_64;

 if (VAR_61[0] != 2 && VAR_61[0] != 3 && VAR_61[0] != 5 && VAR_61[0] != 6 && VAR_61[0] != 12) {
  FUNC_0("wacom_intuos_irq: received unknown report #%d", VAR_61[0]);
                return 0;
 }


 if (VAR_59->features->type == VAR_40)
  VAR_63 = VAR_61[1] & 0x01;


 if (VAR_61[0] == 12 || VAR_61[0] == 3) {

  if (VAR_59->tool[1] != VAR_32)
   VAR_59->tool[1] = VAR_32;

  if (VAR_59->features->type >= VAR_46 && VAR_59->features->type <= VAR_45) {
   FUNC_6(VAR_60, VAR_12, (VAR_61[2] & 0x01));
   FUNC_6(VAR_60, VAR_13, (VAR_61[3] & 0x01));
   FUNC_6(VAR_60, VAR_14, (VAR_61[3] & 0x02));
   FUNC_6(VAR_60, VAR_15, (VAR_61[3] & 0x04));
   FUNC_6(VAR_60, VAR_16, (VAR_61[3] & 0x08));
   FUNC_6(VAR_60, VAR_17, (VAR_61[3] & 0x10));
   FUNC_6(VAR_60, VAR_18, (VAR_61[3] & 0x20));
   if (VAR_61[1] & 0x80) {
    FUNC_5(VAR_60, VAR_8, (VAR_61[1] & 0x7f));
   } else {

    FUNC_5(VAR_60, VAR_8, 0);
   }
   if (VAR_59->features->type != VAR_46) {
    FUNC_6(VAR_60, VAR_19, (VAR_61[3] & 0x40));
    FUNC_6(VAR_60, VAR_20, (VAR_61[3] & 0x80));
   }
   if (VAR_61[1] | (VAR_61[2] & 0x01) | VAR_61[3]) {
    FUNC_6(VAR_60, VAR_59->tool[1], 1);
    FUNC_5(VAR_60, VAR_1, VAR_54);
   } else {
    FUNC_6(VAR_60, VAR_59->tool[1], 0);
    FUNC_5(VAR_60, VAR_1, 0);
   }
  } else if (VAR_59->features->type == VAR_58) {
   FUNC_6(VAR_60, VAR_12, (VAR_61[6] & 0x01));
   FUNC_6(VAR_60, VAR_13, (VAR_61[6] & 0x02));
   FUNC_6(VAR_60, VAR_14, (VAR_61[6] & 0x04));
   FUNC_6(VAR_60, VAR_15, (VAR_61[6] & 0x08));
   FUNC_6(VAR_60, VAR_16, (VAR_61[6] & 0x10));
   FUNC_6(VAR_60, VAR_17, (VAR_61[6] & 0x20));
   FUNC_6(VAR_60, VAR_18, (VAR_61[6] & 0x40));
   FUNC_6(VAR_60, VAR_19, (VAR_61[6] & 0x80));
   FUNC_6(VAR_60, VAR_20, (VAR_61[8] & 0x01));
   FUNC_6(VAR_60, VAR_21, (VAR_61[8] & 0x02));
   FUNC_6(VAR_60, VAR_22, (VAR_61[8] & 0x04));
   FUNC_6(VAR_60, VAR_23, (VAR_61[8] & 0x08));
   FUNC_6(VAR_60, VAR_26, (VAR_61[8] & 0x10));
   FUNC_6(VAR_60, VAR_35, (VAR_61[8] & 0x20));
   FUNC_6(VAR_60, VAR_36, (VAR_61[8] & 0x40));
   FUNC_6(VAR_60, VAR_37, (VAR_61[8] & 0x80));
   FUNC_6(VAR_60, VAR_50, VAR_61[4] & 0x07);
   FUNC_6(VAR_60, VAR_51, VAR_61[4] & 0xE0);
   FUNC_6(VAR_60, VAR_52, VAR_61[3] & 0x1C);

   if (VAR_61[1] & 0x80) {
    FUNC_5(VAR_60, VAR_8, (VAR_61[1] & 0x7f));
   } else {

    FUNC_5(VAR_60, VAR_8, 0);
   }

   if (VAR_61[2] & 0x80) {
    FUNC_5(VAR_60, VAR_5, (VAR_61[2] & 0x7f));
   } else {

    FUNC_5(VAR_60, VAR_5, 0);
   }

   if (VAR_61[1] | VAR_61[2] | (VAR_61[3] & 0x1f) | VAR_61[4] | VAR_61[6] | VAR_61[8]) {
    FUNC_6(VAR_60, VAR_59->tool[1], 1);
    FUNC_5(VAR_60, VAR_1, VAR_54);
   } else {
    FUNC_6(VAR_60, VAR_59->tool[1], 0);
    FUNC_5(VAR_60, VAR_1, 0);
   }
  } else if (VAR_59->features->type >= VAR_49 && VAR_59->features->type <= VAR_48) {
   int VAR_65;


   FUNC_6(VAR_60, VAR_12, (VAR_61[3] & 0x01));






   for (VAR_65 = 0; VAR_65 < 8; VAR_65++)
    FUNC_6(VAR_60, VAR_13 + VAR_65, VAR_61[4] & (1 << VAR_65));

   if (VAR_61[2] & 0x80) {
    FUNC_5(VAR_60, VAR_8, (VAR_61[2] & 0x7f));
   } else {

    FUNC_5(VAR_60, VAR_8, 0);
   }

   if (VAR_61[2] | (VAR_61[3] & 0x01) | VAR_61[4]) {
    FUNC_6(VAR_60, VAR_59->tool[1], 1);
    FUNC_5(VAR_60, VAR_1, VAR_54);
   } else {
    FUNC_6(VAR_60, VAR_59->tool[1], 0);
    FUNC_5(VAR_60, VAR_1, 0);
   }
  } else {
   if (VAR_59->features->type == VAR_56 ||
       VAR_59->features->type == VAR_57) {
    FUNC_6(VAR_60, VAR_12, (VAR_61[5] & 0x01));
    FUNC_6(VAR_60, VAR_13, (VAR_61[6] & 0x01));
    FUNC_6(VAR_60, VAR_14, (VAR_61[6] & 0x02));
    FUNC_6(VAR_60, VAR_15, (VAR_61[6] & 0x04));
    FUNC_6(VAR_60, VAR_16, (VAR_61[6] & 0x08));
    FUNC_6(VAR_60, VAR_17, (VAR_61[6] & 0x10));
    FUNC_6(VAR_60, VAR_18, (VAR_61[6] & 0x20));
    FUNC_6(VAR_60, VAR_19, (VAR_61[6] & 0x40));
    FUNC_6(VAR_60, VAR_20, (VAR_61[6] & 0x80));
    FUNC_6(VAR_60, VAR_21, (VAR_61[7] & 0x01));
    FUNC_6(VAR_60, VAR_22, (VAR_61[8] & 0x01));
    FUNC_6(VAR_60, VAR_23, (VAR_61[8] & 0x02));
    FUNC_6(VAR_60, VAR_26, (VAR_61[8] & 0x04));
    FUNC_6(VAR_60, VAR_35, (VAR_61[8] & 0x08));
    FUNC_6(VAR_60, VAR_36, (VAR_61[8] & 0x10));
    FUNC_6(VAR_60, VAR_37, (VAR_61[8] & 0x20));
    FUNC_6(VAR_60, VAR_24, (VAR_61[8] & 0x40));
    FUNC_6(VAR_60, VAR_25, (VAR_61[8] & 0x80));
    if (VAR_59->features->type == VAR_57) {
     FUNC_6(VAR_60, VAR_50, VAR_61[9] & 0x01);
     FUNC_6(VAR_60, VAR_51, VAR_61[9] & 0x02);
     FUNC_6(VAR_60, VAR_52, VAR_61[9] & 0x04);
    }
   } else {
    FUNC_6(VAR_60, VAR_12, (VAR_61[5] & 0x01));
    FUNC_6(VAR_60, VAR_13, (VAR_61[5] & 0x02));
    FUNC_6(VAR_60, VAR_14, (VAR_61[5] & 0x04));
    FUNC_6(VAR_60, VAR_15, (VAR_61[5] & 0x08));
    FUNC_6(VAR_60, VAR_16, (VAR_61[6] & 0x01));
    FUNC_6(VAR_60, VAR_17, (VAR_61[6] & 0x02));
    FUNC_6(VAR_60, VAR_18, (VAR_61[6] & 0x04));
    FUNC_6(VAR_60, VAR_19, (VAR_61[6] & 0x08));
    FUNC_6(VAR_60, VAR_20, (VAR_61[5] & 0x10));
    FUNC_6(VAR_60, VAR_21, (VAR_61[6] & 0x10));
   }
   FUNC_5(VAR_60, VAR_2, ((VAR_61[1] & 0x1f) << 8) | VAR_61[2]);
   FUNC_5(VAR_60, VAR_3, ((VAR_61[3] & 0x1f) << 8) | VAR_61[4]);

   if ((VAR_61[5] & 0x1f) | VAR_61[6] | (VAR_61[1] & 0x1f) |
    VAR_61[2] | (VAR_61[3] & 0x1f) | VAR_61[4] | VAR_61[8] |
    (VAR_61[7] & 0x01)) {
    FUNC_6(VAR_60, VAR_59->tool[1], 1);
    FUNC_5(VAR_60, VAR_1, VAR_54);
   } else {
    FUNC_6(VAR_60, VAR_59->tool[1], 0);
    FUNC_5(VAR_60, VAR_1, 0);
   }
  }
  FUNC_2(VAR_60, VAR_39, VAR_53, 0xffffffff);
                return 1;
 }


 VAR_64 = FUNC_4(VAR_59, VAR_60);
 if (VAR_64)
                return VAR_64-1;


 if (!VAR_59->id[VAR_63])
  return 0;


 if ((VAR_59->tool[VAR_63] == VAR_33)
   && ((VAR_59->features->type == VAR_41)
   || (VAR_59->features->type == VAR_43)
   || (VAR_59->features->type == VAR_44)
   || (VAR_59->features->type == VAR_46)
   || (VAR_59->features->type == VAR_47)
   || (VAR_59->features->type == VAR_49)))
  return 0;


 if ((VAR_59->features->type == VAR_38) && !(VAR_61[1] & 0x40))
                 return 0;

 if (VAR_59->features->type >= VAR_43) {
  FUNC_5(VAR_60, VAR_9, (VAR_61[2] << 9) | (VAR_61[3] << 1) | ((VAR_61[9] >> 1) & 1));
  FUNC_5(VAR_60, VAR_10, (VAR_61[4] << 9) | (VAR_61[5] << 1) | (VAR_61[9] & 1));
  FUNC_5(VAR_60, VAR_0, ((VAR_61[9] >> 2) & 0x3f));
 } else {
  FUNC_5(VAR_60, VAR_9, FUNC_1(&VAR_61[2]));
  FUNC_5(VAR_60, VAR_10, FUNC_1(&VAR_61[4]));
  FUNC_5(VAR_60, VAR_0, ((VAR_61[9] >> 3) & 0x1f));
 }


 FUNC_3(VAR_59, VAR_60);


 if ((VAR_61[1] & 0xbc) == 0xa8 || (VAR_61[1] & 0xbe) == 0xb0 || (VAR_61[1] & 0xbc) == 0xac) {

  if (VAR_61[1] & 0x02) {

   if (VAR_59->features->type >= VAR_43) {

    VAR_62 = (VAR_61[6] << 3) | ((VAR_61[7] >> 5) & 7);
    VAR_62 = (VAR_61[7] & 0x20) ? ((VAR_62 > 900) ? ((VAR_62-1) / 2 - 1350) :
     ((VAR_62-1) / 2 + 450)) : (450 - VAR_62 / 2) ;
    FUNC_5(VAR_60, VAR_11, VAR_62);
   } else {

    VAR_62 = (VAR_61[6] << 3) | ((VAR_61[7] >> 5) & 7);
    FUNC_5(VAR_60, VAR_4, (VAR_61[7] & 0x20) ?
     ((VAR_62 - 1) / 2) : -VAR_62 / 2);
   }

  } else if (!(VAR_61[1] & 0x10) && VAR_59->features->type < VAR_43) {

   FUNC_6(VAR_60, VAR_28, VAR_61[8] & 0x01);
   FUNC_6(VAR_60, VAR_29, VAR_61[8] & 0x02);
   FUNC_6(VAR_60, VAR_30, VAR_61[8] & 0x04);

   FUNC_6(VAR_60, VAR_31, VAR_61[8] & 0x20);
   FUNC_6(VAR_60, VAR_27, VAR_61[8] & 0x10);
   VAR_62 = (VAR_61[6] << 2) | ((VAR_61[7] >> 6) & 3);
   FUNC_5(VAR_60, VAR_5, (VAR_61[8] & 0x08) ? -VAR_62 : VAR_62);

  } else if (VAR_59->tool[VAR_63] == VAR_34) {

   if ((VAR_59->features->type >= VAR_46 && VAR_59->features->type <= VAR_45) ||
       (VAR_59->features->type >= VAR_49 && VAR_59->features->type <= VAR_48)) {
    FUNC_6(VAR_60, VAR_28, VAR_61[6] & 0x01);
    FUNC_6(VAR_60, VAR_29, VAR_61[6] & 0x02);
    FUNC_6(VAR_60, VAR_30, VAR_61[6] & 0x04);
    FUNC_7(VAR_60, VAR_55, ((VAR_61[7] & 0x80) >> 7)
       - ((VAR_61[7] & 0x40) >> 6));
    FUNC_6(VAR_60, VAR_31, VAR_61[6] & 0x08);
    FUNC_6(VAR_60, VAR_27, VAR_61[6] & 0x10);

    FUNC_5(VAR_60, VAR_6,
     ((VAR_61[7] << 1) & 0x7e) | (VAR_61[8] >> 7));
    FUNC_5(VAR_60, VAR_7, VAR_61[8] & 0x7f);
   } else {

    FUNC_6(VAR_60, VAR_28, VAR_61[8] & 0x04);
    FUNC_6(VAR_60, VAR_29, VAR_61[8] & 0x08);
    FUNC_6(VAR_60, VAR_30, VAR_61[8] & 0x10);
    FUNC_7(VAR_60, VAR_55, (VAR_61[8] & 0x01)
       - ((VAR_61[8] & 0x02) >> 1));


    if (VAR_59->features->type >= VAR_43 && VAR_59->features->type <= VAR_42) {
     FUNC_6(VAR_60, VAR_31, VAR_61[8] & 0x40);
     FUNC_6(VAR_60, VAR_27, VAR_61[8] & 0x20);
    }
   }
  } else if ((VAR_59->features->type < VAR_43 || VAR_59->features->type == VAR_42 ||
      VAR_59->features->type == VAR_45 || VAR_59->features->type == VAR_48) &&
      VAR_59->tool[VAR_63] == VAR_33) {

   FUNC_6(VAR_60, VAR_28, VAR_61[8] & 0x01);
   FUNC_6(VAR_60, VAR_29, VAR_61[8] & 0x02);
   FUNC_6(VAR_60, VAR_30, VAR_61[8] & 0x04);
   FUNC_6(VAR_60, VAR_31, VAR_61[8] & 0x10);
   FUNC_6(VAR_60, VAR_27, VAR_61[8] & 0x08);
  }
 }

 FUNC_5(VAR_60, VAR_1, VAR_59->id[VAR_63]);
 FUNC_6(VAR_60, VAR_59->tool[VAR_63], 1);
 FUNC_2(VAR_60, VAR_39, VAR_53, VAR_59->serial[VAR_63]);
 return 1;
}
