
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t type; int * name; } ;
struct TYPE_6__ {int seesound; size_t seestate; size_t meleestate; size_t missilestate; } ;
struct TYPE_5__ {int tics; size_t nextstate; } ;
 size_t VAR_0 ;
 int FUNC_0 (int *,int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_1__* VAR_23 ;

void FUNC_1 (void)
{
    int VAR_24;
    int VAR_25;

    if (--VAR_8 > 0)
 return;

    if (VAR_7->tics == -1 || VAR_7->nextstate == VAR_0)
    {

 VAR_4++;
 VAR_2 = 0;
 if (VAR_6[VAR_4].name == ((void*)0))
     VAR_4 = 0;
 if (VAR_9[VAR_6[VAR_4].type].seesound)
     FUNC_0 (((void*)0), VAR_9[VAR_6[VAR_4].type].seesound);
 VAR_7 = &VAR_23[VAR_9[VAR_6[VAR_4].type].seestate];
 VAR_3 = 0;
    }
    else
    {

 if (VAR_7 == &VAR_23[139])
     goto stopattack;
 VAR_24 = VAR_7->nextstate;
 VAR_7 = &VAR_23[VAR_24];
 VAR_3++;


 switch (VAR_24)
 {
   case 139: VAR_25 = VAR_11; break;
   case 138: VAR_25 = VAR_13; break;
   case 130: VAR_25 = VAR_17; break;
   case 128: VAR_25 = VAR_22; break;
   case 136: VAR_25 = VAR_20; break;
   case 135: VAR_25 = VAR_19; break;
   case 134: VAR_25 = VAR_18; break;
   case 142:
   case 143:
   case 144: VAR_25 = VAR_12; break;
   case 150:
   case 149:
   case 148: VAR_25 = VAR_17; break;
   case 129: VAR_25 = VAR_10; break;
   case 137: VAR_25 = VAR_16; break;
   case 152:
   case 153:
   case 141: VAR_25 = VAR_12; break;
   case 133: VAR_25 = VAR_21; break;
   case 132:
   case 131: VAR_25 = VAR_17; break;
   case 151: VAR_25 = VAR_14; break;
   case 147:
   case 146:
   case 145: VAR_25 = VAR_15; break;
   case 140: VAR_25 = VAR_21; break;
   default: VAR_25 = 0; break;
 }

 if (VAR_25)
     FUNC_0 (((void*)0), VAR_25);
    }

    if (VAR_3 == 12)
    {

 VAR_1 = 1;
 if (VAR_5)
     VAR_7=&VAR_23[VAR_9[VAR_6[VAR_4].type].meleestate];
 else
     VAR_7=&VAR_23[VAR_9[VAR_6[VAR_4].type].missilestate];
 VAR_5 ^= 1;
 if (VAR_7 == &VAR_23[VAR_0])
 {
     if (VAR_5)
  VAR_7=
      &VAR_23[VAR_9[VAR_6[VAR_4].type].meleestate];
     else
  VAR_7=
      &VAR_23[VAR_9[VAR_6[VAR_4].type].missilestate];
 }
    }

    if (VAR_1)
    {
 if (VAR_3 == 24
     || VAR_7 == &VAR_23[VAR_9[VAR_6[VAR_4].type].seestate] )
 {
   stopattack:
     VAR_1 = 0;
     VAR_3 = 0;
     VAR_7 = &VAR_23[VAR_9[VAR_6[VAR_4].type].seestate];
 }
    }

    VAR_8 = VAR_7->tics;
    if (VAR_8 == -1)
 VAR_8 = 15;
}
