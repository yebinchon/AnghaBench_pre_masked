
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {unsigned char* data; unsigned char* serial; unsigned char* id; scalar_t__* tool; TYPE_1__* features; } ;
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
 scalar_t__ VAR_11 ;
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
 void* VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_0 (void*,int ,int ,unsigned char) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct wacom_wac *VAR_32, void *VAR_33)
{
 unsigned char *VAR_34 = VAR_32->data;
 int VAR_35 = 0;


 if (VAR_32->features->type == VAR_27)
  VAR_35 = VAR_34[1] & 0x01;


 if ((VAR_34[1] & 0xfc) == 0xc0) {

  VAR_32->serial[VAR_35] = ((VAR_34[3] & 0x0f) << 28) +
   (VAR_34[4] << 20) + (VAR_34[5] << 12) +
   (VAR_34[6] << 4) + (VAR_34[7] >> 4);

  VAR_32->id[VAR_35] = (VAR_34[2] << 4) | (VAR_34[3] >> 4) |
   ((VAR_34[7] & 0x0f) << 20) | ((VAR_34[8] & 0xf0) << 12);

  switch (VAR_32->id[VAR_35] & 0xfffff) {
   case 0x812:
   case 0x801:
   case 0x20802:
   case 0x012:
    VAR_32->tool[VAR_35] = VAR_23;
    break;
   case 0x822:
   case 0x842:
   case 0x852:
   case 0x823:
   case 0x813:
   case 0x885:
   case 0x802:
   case 0x804:
   case 0x40802:
   case 0x022:
    VAR_32->tool[VAR_35] = VAR_22;
    break;
   case 0x832:
   case 0x032:
    VAR_32->tool[VAR_35] = VAR_19;
    break;
   case 0x007:
          case 0x09c:
   case 0x094:
   case 0x017:
   case 0x806:
    VAR_32->tool[VAR_35] = VAR_21;
    break;
   case 0x096:
   case 0x097:
   case 0x006:
    VAR_32->tool[VAR_35] = VAR_20;
    break;
   case 0x82a:
   case 0x85a:
          case 0x91a:
   case 0xd1a:
   case 0x0fa:
   case 0x82b:
   case 0x81b:
   case 0x91b:
   case 0x80c:
   case 0x80a:
   case 0x4080a:
   case 0x90a:
    VAR_32->tool[VAR_35] = VAR_24;
    break;
   case 0xd12:
   case 0x912:
   case 0x112:
   case 0x913:
   case 0x902:
    VAR_32->tool[VAR_35] = VAR_18;
    break;
   default:
    VAR_32->tool[VAR_35] = VAR_22;
  }
  return 1;
 }


 if (!((VAR_32->id[VAR_35] >> 20) & 0x01) &&
   (VAR_32->features->type >= VAR_30 &&
    VAR_32->features->type <= VAR_31))
  return 1;


 if ((VAR_34[1] & 0xfe) == 0x80) {




  FUNC_1(VAR_33, VAR_8, 0);
  FUNC_1(VAR_33, VAR_9, 0);
  FUNC_1(VAR_33, VAR_0, 0);
  FUNC_1(VAR_33, VAR_5, 0);
  FUNC_1(VAR_33, VAR_6, 0);
  if (VAR_32->tool[VAR_35] >= VAR_21) {
   FUNC_2(VAR_33, VAR_12, 0);
   FUNC_2(VAR_33, VAR_13, 0);
   FUNC_2(VAR_33, VAR_14, 0);
   FUNC_2(VAR_33, VAR_15, 0);
   FUNC_2(VAR_33, VAR_11, 0);
   FUNC_1(VAR_33, VAR_4, 0);
   FUNC_1(VAR_33, VAR_3, 0);
  } else {
   FUNC_1(VAR_33, VAR_2, 0);
   FUNC_2(VAR_33, VAR_16, 0);
   FUNC_2(VAR_33, VAR_17, 0);
   FUNC_2(VAR_33, VAR_25, 0);
   FUNC_1(VAR_33, VAR_7, 0);
   if (VAR_32->features->type >= VAR_28)
    FUNC_1(VAR_33, VAR_10, 0);
  }
  FUNC_2(VAR_33, VAR_32->tool[VAR_35], 0);
  FUNC_1(VAR_33, VAR_1, 0);
  FUNC_0(VAR_33, VAR_26, VAR_29, VAR_32->serial[VAR_35]);
  VAR_32->id[VAR_35] = 0;
  return 2;
 }
 return 0;
}
