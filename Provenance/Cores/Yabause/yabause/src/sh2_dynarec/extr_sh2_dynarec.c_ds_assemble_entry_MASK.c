
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ pointer ;
struct TYPE_15__ {scalar_t__* regmap_entry; scalar_t__* regmap; int dirty; int wasdirty; } ;



 scalar_t__ VAR_0 ;




 size_t VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int,TYPE_1__*,scalar_t__*) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int* VAR_3 ;
 int FUNC_5 (int,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,TYPE_1__*) ;
 int FUNC_8 (int,TYPE_1__*) ;
 int FUNC_9 (int,TYPE_1__*) ;
 scalar_t__* VAR_4 ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_5 ;
 int* VAR_6 ;
 int FUNC_11 (int,TYPE_1__*) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int ,int ,int ) ;
 int FUNC_13 (scalar_t__*,int ,int) ;
 int FUNC_14 (int,TYPE_1__*) ;
 int FUNC_15 (int,TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_16 (int,TYPE_1__*) ;
 int FUNC_17 (char*) ;
 TYPE_1__* VAR_8 ;
 int FUNC_18 (int,TYPE_1__*) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int FUNC_19 (int,TYPE_1__*) ;
 int VAR_12 ;
 int FUNC_20 (int,TYPE_1__*) ;
 int FUNC_21 (scalar_t__*,int ,int) ;
 int FUNC_22 (scalar_t__,scalar_t__*,int ) ;

void FUNC_23(int VAR_13)
{
  int VAR_14=(VAR_3[VAR_13]-VAR_12)>>1;
  if(!VAR_4[VAR_14]) VAR_4[VAR_14]=(pointer)VAR_7;
  FUNC_3("Assemble delay slot at %x\n",VAR_3[VAR_13]);
  FUNC_3("<->\n");
  if(VAR_8[VAR_14].regmap_entry[VAR_1]==VAR_0&&VAR_8[VAR_14].regmap[VAR_1]!=VAR_0)
    FUNC_22(VAR_0,VAR_8[VAR_14].regmap_entry,VAR_8[VAR_14].wasdirty);
  FUNC_12(VAR_8[VAR_14].regmap_entry,VAR_8[VAR_14].regmap,VAR_9[VAR_14],VAR_10[VAR_14],VAR_11[VAR_14]);
  FUNC_1(VAR_14,&VAR_8[VAR_14],VAR_8[VAR_14].regmap_entry);
  if(VAR_6[VAR_14]==139||VAR_6[VAR_14]==131)
    FUNC_12(VAR_8[VAR_14].regmap_entry,VAR_8[VAR_14].regmap,VAR_2,VAR_2,VAR_2);
  VAR_5=0;
  switch(VAR_6[VAR_14]) {
    case 145:
      FUNC_2(VAR_14,&VAR_8[VAR_14]);break;
    case 140:
      FUNC_9(VAR_14,&VAR_8[VAR_14]);break;
    case 133:
      FUNC_19(VAR_14,&VAR_8[VAR_14]);break;
    case 139:
      FUNC_11(VAR_14,&VAR_8[VAR_14]);break;
    case 131:
      FUNC_20(VAR_14,&VAR_8[VAR_14]);break;
    case 134:
      FUNC_18(VAR_14,&VAR_8[VAR_14]);break;
    case 136:
      FUNC_16(VAR_14,&VAR_8[VAR_14]);break;
    case 137:
      FUNC_15(VAR_14,&VAR_8[VAR_14]);break;
    case 138:
      FUNC_14(VAR_14,&VAR_8[VAR_14]);break;
    case 142:
      FUNC_7(VAR_13,&VAR_8[VAR_14]);break;
    case 141:
      FUNC_8(VAR_13,&VAR_8[VAR_14]);break;
    case 143:
      FUNC_5(VAR_13,&VAR_8[VAR_14]);break;
    case 129:
    case 130:
    case 128:
    case 135:
    case 144:
    case 132:
      FUNC_17("Jump in the delay slot.  This is probably a bug.\n");
  }
  FUNC_21(VAR_8[VAR_14].regmap,VAR_8[VAR_14].dirty,VAR_3[VAR_13]+2);
  FUNC_13(VAR_8[VAR_14].regmap,VAR_8[VAR_14].dirty,VAR_3[VAR_13]+2);
  if(FUNC_10(VAR_3[VAR_13]+2))
    FUNC_3("branch: internal\n");
  else
    FUNC_3("branch: external\n");
  FUNC_4(FUNC_10(VAR_3[VAR_13]+2));
  FUNC_0((int)VAR_7,VAR_3[VAR_13]+2,FUNC_10(VAR_3[VAR_13]+2));
  FUNC_6(0);
}
