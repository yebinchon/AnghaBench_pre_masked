
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int genMode; int* tevRasOrder; int texCoordManually; int* tevTexMap; int tevTexCoordEnable; } ;






 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;
 int FUNC_2 (int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_3()
{
 u32 VAR_1;
 u32 VAR_2,VAR_3;
 u8 VAR_4,VAR_5;
 u32 VAR_6,VAR_7,VAR_8;

 VAR_3 = (FUNC_1(VAR_0->genMode,10,4))+1;
 VAR_2 = FUNC_1(VAR_0->genMode,16,3);


 for(VAR_1=0;VAR_1<VAR_2;VAR_1++) {
  switch(VAR_1) {
   case 131:
    VAR_5 = VAR_0->tevRasOrder[2]&7;
    VAR_4 = FUNC_1(VAR_0->tevRasOrder[2],3,3);
    break;
   case 130:
    VAR_5 = FUNC_1(VAR_0->tevRasOrder[2],6,3);
    VAR_4 = FUNC_1(VAR_0->tevRasOrder[2],9,3);
    break;
   case 129:
    VAR_5 = FUNC_1(VAR_0->tevRasOrder[2],12,3);
    VAR_4 = FUNC_1(VAR_0->tevRasOrder[2],15,3);
    break;
   case 128:
    VAR_5 = FUNC_1(VAR_0->tevRasOrder[2],18,3);
    VAR_4 = FUNC_1(VAR_0->tevRasOrder[2],21,3);
    break;
   default:
    VAR_5 = 0;
    VAR_4 = 0;
    break;
  }

  VAR_8 = FUNC_0(1,VAR_4,1);
  if(!(VAR_0->texCoordManually&VAR_8))
   FUNC_2(VAR_5,VAR_4);
 }


 for(VAR_1=0;VAR_1<VAR_3;VAR_1++) {
  VAR_6 = 3+(FUNC_1(VAR_1,1,3));
  VAR_5 = (VAR_0->tevTexMap[VAR_1]&0xff);

  if(VAR_1&1) VAR_4 = FUNC_1(VAR_0->tevRasOrder[VAR_6],15,3);
  else VAR_4 = FUNC_1(VAR_0->tevRasOrder[VAR_6],3,3);

  VAR_7 = FUNC_0(1,VAR_1,1);
  VAR_8 = FUNC_0(1,VAR_4,1);
  if(VAR_5!=0xff && (VAR_0->tevTexCoordEnable&VAR_7) && !(VAR_0->texCoordManually&VAR_8)) {
   FUNC_2(VAR_5,VAR_4);
  }
 }
}
