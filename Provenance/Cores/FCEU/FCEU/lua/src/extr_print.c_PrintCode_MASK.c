
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sizecode; int * p; int * k; int * upvalues; int sizeupvalues; scalar_t__* code; } ;
typedef TYPE_1__ Proto ;
typedef size_t OpCode ;
typedef scalar_t__ Instruction ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (TYPE_1__ const*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (size_t) ;
 int FUNC_12 (size_t) ;
 int FUNC_13 (TYPE_1__ const*,int) ;
 char* FUNC_14 (int ) ;



 char** VAR_2 ;
 int FUNC_15 (char*,...) ;
 char* FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(const Proto* VAR_3)
{
 const Instruction* VAR_4=VAR_3->code;
 int VAR_5,VAR_6=VAR_3->sizecode;
 for (VAR_5=0; VAR_5<VAR_6; VAR_5++)
 {
  Instruction VAR_7=VAR_4[VAR_5];
  OpCode VAR_8=FUNC_5(VAR_7);
  int VAR_9=FUNC_0(VAR_7);
  int VAR_10=FUNC_1(VAR_7);
  int VAR_11=FUNC_3(VAR_7);
  int VAR_12=FUNC_2(VAR_7);
  int VAR_13=FUNC_4(VAR_7);
  int VAR_14=FUNC_13(VAR_3,VAR_5);
  FUNC_15("\t%d\t",VAR_5+1);
  if (VAR_14>0) FUNC_15("[%d]\t",VAR_14); else FUNC_15("[-]\t");
  FUNC_15("%-9s\t",VAR_2[VAR_8]);
  switch (FUNC_12(VAR_8))
  {
   case 130:
    FUNC_15("%d",VAR_9);
    if (FUNC_10(VAR_8)!=VAR_1) FUNC_15(" %d",FUNC_7(VAR_10) ? (-1-FUNC_6(VAR_10)) : VAR_10);
    if (FUNC_11(VAR_8)!=VAR_1) FUNC_15(" %d",FUNC_7(VAR_11) ? (-1-FUNC_6(VAR_11)) : VAR_11);
    break;
   case 129:
    if (FUNC_10(VAR_8)==VAR_0) FUNC_15("%d %d",VAR_9,-1-VAR_12); else FUNC_15("%d %d",VAR_9,VAR_12);
    break;
   case 128:
    if (VAR_8==142) FUNC_15("%d",VAR_13); else FUNC_15("%d %d",VAR_9,VAR_13);
    break;
  }
  switch (VAR_8)
  {
   case 140:
    FUNC_15("\t; "); FUNC_8(VAR_3,VAR_12);
    break;
   case 143:
   case 132:
    FUNC_15("\t; %s", (VAR_3->sizeupvalues>0) ? FUNC_14(VAR_3->upvalues[VAR_10]) : "-");
    break;
   case 145:
   case 135:
    FUNC_15("\t; %s",FUNC_16(&VAR_3->k[VAR_12]));
    break;
   case 144:
   case 136:
    if (FUNC_7(VAR_11)) { FUNC_15("\t; "); FUNC_8(VAR_3,FUNC_6(VAR_11)); }
    break;
   case 133:
   case 151:
   case 131:
   case 138:
   case 149:
   case 137:
   case 148:
   case 139:
   case 141:
    if (FUNC_7(VAR_10) || FUNC_7(VAR_11))
    {
     FUNC_15("\t; ");
     if (FUNC_7(VAR_10)) FUNC_8(VAR_3,FUNC_6(VAR_10)); else FUNC_15("-");
     FUNC_15(" ");
     if (FUNC_7(VAR_11)) FUNC_8(VAR_3,FUNC_6(VAR_11)); else FUNC_15("-");
    }
    break;
   case 142:
   case 147:
   case 146:
    FUNC_15("\t; to %d",VAR_13+VAR_5+2);
    break;
   case 150:
    FUNC_15("\t; %p",FUNC_9(VAR_3->p[VAR_12]));
    break;
   case 134:
    if (VAR_11==0) FUNC_15("\t; %d",(int)VAR_4[++VAR_5]);
    else FUNC_15("\t; %d",VAR_11);
    break;
   default:
    break;
  }
  FUNC_15("\n");
 }
}
