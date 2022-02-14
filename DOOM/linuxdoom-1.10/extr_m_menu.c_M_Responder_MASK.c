
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; int data3; int data2; int data1; } ;
typedef TYPE_2__ event_t ;
typedef int boolean ;
struct TYPE_12__ {int numitems; size_t lastOn; TYPE_1__* menuitems; struct TYPE_12__* prevMenu; } ;
struct TYPE_11__ {int message; } ;
struct TYPE_9__ {int status; int alphaKey; int (* routine ) (size_t) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 () ;
 int FUNC_15 (int*) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int FUNC_16 (int *,int ) ;
 TYPE_4__ VAR_6 ;
 int FUNC_17 (char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 TYPE_4__* VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int * VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_18 (int) ;
 scalar_t__ VAR_21 ;
 TYPE_3__* VAR_22 ;
 int VAR_23 ;
 size_t VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 scalar_t__ VAR_27 ;
 int** VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 int FUNC_19 (int*,int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int) ;
 int FUNC_23 (size_t) ;
 int FUNC_24 (int) ;
 int VAR_35 ;

boolean FUNC_25 (event_t* VAR_36)
{
    int VAR_37;
    int VAR_38;
    static int VAR_39 = 0;
    static int VAR_40 = 0;
    static int VAR_41 = 0;
    static int VAR_42 = 0;
    static int VAR_43 = 0;
    static int VAR_44 = 0;

    VAR_37 = -1;

    if (VAR_36->type == VAR_12 && VAR_39 < FUNC_1())
    {
 if (VAR_36->data3 == -1)
 {
     VAR_37 = 128;
     VAR_39 = FUNC_1() + 5;
 }
 else if (VAR_36->data3 == 1)
 {
     VAR_37 = 146;
     VAR_39 = FUNC_1() + 5;
 }

 if (VAR_36->data2 == -1)
 {
     VAR_37 = 131;
     VAR_39 = FUNC_1() + 2;
 }
 else if (VAR_36->data2 == 1)
 {
     VAR_37 = 129;
     VAR_39 = FUNC_1() + 2;
 }

 if (VAR_36->data1&1)
 {
     VAR_37 = 145;
     VAR_39 = FUNC_1() + 5;
 }
 if (VAR_36->data1&2)
 {
     VAR_37 = 147;
     VAR_39 = FUNC_1() + 5;
 }
    }
    else
    {
 if (VAR_36->type == VAR_14 && VAR_40 < FUNC_1())
 {
     VAR_41 += VAR_36->data3;
     if (VAR_41 < VAR_42-30)
     {
  VAR_37 = 146;
  VAR_40 = FUNC_1() + 5;
  VAR_41 = VAR_42 -= 30;
     }
     else if (VAR_41 > VAR_42+30)
     {
  VAR_37 = 128;
  VAR_40 = FUNC_1() + 5;
  VAR_41 = VAR_42 += 30;
     }

     VAR_43 += VAR_36->data2;
     if (VAR_43 < VAR_44-30)
     {
  VAR_37 = 131;
  VAR_40 = FUNC_1() + 5;
  VAR_43 = VAR_44 -= 30;
     }
     else if (VAR_43 > VAR_44+30)
     {
  VAR_37 = 129;
  VAR_40 = FUNC_1() + 5;
  VAR_43 = VAR_44 += 30;
     }

     if (VAR_36->data1&1)
     {
  VAR_37 = 145;
  VAR_40 = FUNC_1() + 15;
     }

     if (VAR_36->data1&2)
     {
  VAR_37 = 147;
  VAR_40 = FUNC_1() + 15;
     }
 }
 else
     if (VAR_36->type == VAR_13)
     {
  VAR_37 = VAR_36->data1;
     }
    }

    if (VAR_37 == -1)
 return 0;



    if (VAR_27)
    {
 switch(VAR_37)
 {
   case 147:
     if (VAR_24 > 0)
     {
  VAR_24--;
  VAR_28[VAR_26][VAR_24] = 0;
     }
     break;

   case 143:
     VAR_27 = 0;
     FUNC_19(&VAR_28[VAR_26][0],VAR_25);
     break;

   case 145:
     VAR_27 = 0;
     if (VAR_28[VAR_26][0])
  FUNC_6(VAR_26);
     break;

   default:
     VAR_37 = FUNC_24(VAR_37);
     if (VAR_37 != 32)
  if (VAR_37-VAR_1 < 0 || VAR_37-VAR_1 >= VAR_0)
      break;
     if (VAR_37 >= 32 && VAR_37 <= 127 &&
  VAR_24 < VAR_5-1 &&
  FUNC_15(VAR_28[VAR_26]) <
  (VAR_5-2)*8)
     {
  VAR_28[VAR_26][VAR_24++] = VAR_37;
  VAR_28[VAR_26][VAR_24] = 0;
     }
     break;
 }
 return 1;
    }


    if (VAR_21)
    {
 if (VAR_20 == 1 &&
     !(VAR_37 == ' ' || VAR_37 == 'n' || VAR_37 == 'y' || VAR_37 == 143))
     return 0;

 VAR_18 = VAR_19;
 VAR_21 = 0;
 if (&FUNC_18)
     FUNC_18(VAR_37);

 VAR_18 = 0;
 FUNC_16(((void*)0),VAR_33);
 return 1;
    }

    if (VAR_11 && VAR_37 == 142)
    {
 FUNC_0 ();
 return 1;
    }



    if (!VAR_18)
 switch(VAR_37)
 {
   case 130:
     if (VAR_7 || VAR_8)
  return 0;
     FUNC_13(0);
     FUNC_16(((void*)0),VAR_31);
     return 1;

   case 144:
     if (VAR_7 || VAR_8)
  return 0;
     FUNC_13(1);
     FUNC_16(((void*)0),VAR_31);
     return 1;

   case 142:
     FUNC_14 ();

     if ( VAR_15 == VAR_23 )
       VAR_10 = &VAR_4;
     else
       VAR_10 = &VAR_3;

     VAR_17 = 0;
     FUNC_16(((void*)0),VAR_32);
     return 1;

   case 139:
     FUNC_14();
     FUNC_16(((void*)0),VAR_32);
     FUNC_12(0);
     return 1;

   case 138:
     FUNC_14();
     FUNC_16(((void*)0),VAR_32);
     FUNC_8(0);
     return 1;

   case 137:
     FUNC_14 ();
     VAR_10 = &VAR_6;
     VAR_17 = VAR_34;
     FUNC_16(((void*)0),VAR_32);
     return 1;

   case 136:
     FUNC_3(0);
     FUNC_16(((void*)0),VAR_32);
     return 1;

   case 135:
     FUNC_16(((void*)0),VAR_32);
     FUNC_10();
     return 1;

   case 134:
     FUNC_16(((void*)0),VAR_32);
     FUNC_7(0);
     return 1;

   case 133:
     FUNC_4(0);
     FUNC_16(((void*)0),VAR_32);
     return 1;

   case 132:
     FUNC_16(((void*)0),VAR_32);
     FUNC_9();
     return 1;

   case 141:
     FUNC_16(((void*)0),VAR_32);
     FUNC_11(0);
     return 1;

   case 140:
     VAR_35++;
     if (VAR_35 > 4)
  VAR_35 = 0;
     VAR_22[VAR_9].message = VAR_16[VAR_35];
     FUNC_2 (FUNC_17 ("PLAYPAL",VAR_2));
     return 1;

 }



    if (!VAR_18)
    {
 if (VAR_37 == 143)
 {
     FUNC_14 ();
     FUNC_16(((void*)0),VAR_32);
     return 1;
 }
 return 0;
    }



    switch (VAR_37)
    {
      case 146:
 do
 {
     if (VAR_17+1 > VAR_10->numitems-1)
  VAR_17 = 0;
     else VAR_17++;
     FUNC_16(((void*)0),VAR_30);
 } while(VAR_10->menuitems[VAR_17].status==-1);
 return 1;

      case 128:
 do
 {
     if (!VAR_17)
  VAR_17 = VAR_10->numitems-1;
     else VAR_17--;
     FUNC_16(((void*)0),VAR_30);
 } while(VAR_10->menuitems[VAR_17].status==-1);
 return 1;

      case 131:
 if (VAR_10->menuitems[VAR_17].routine &&
     VAR_10->menuitems[VAR_17].status == 2)
 {
     FUNC_16(((void*)0),VAR_31);
     VAR_10->menuitems[VAR_17].routine(0);
 }
 return 1;

      case 129:
 if (VAR_10->menuitems[VAR_17].routine &&
     VAR_10->menuitems[VAR_17].status == 2)
 {
     FUNC_16(((void*)0),VAR_31);
     VAR_10->menuitems[VAR_17].routine(1);
 }
 return 1;

      case 145:
 if (VAR_10->menuitems[VAR_17].routine &&
     VAR_10->menuitems[VAR_17].status)
 {
     VAR_10->lastOn = VAR_17;
     if (VAR_10->menuitems[VAR_17].status == 2)
     {
  VAR_10->menuitems[VAR_17].routine(1);
  FUNC_16(((void*)0),VAR_31);
     }
     else
     {
  VAR_10->menuitems[VAR_17].routine(VAR_17);
  FUNC_16(((void*)0),VAR_29);
     }
 }
 return 1;

      case 143:
 VAR_10->lastOn = VAR_17;
 FUNC_5 ();
 FUNC_16(((void*)0),VAR_33);
 return 1;

      case 147:
 VAR_10->lastOn = VAR_17;
 if (VAR_10->prevMenu)
 {
     VAR_10 = VAR_10->prevMenu;
     VAR_17 = VAR_10->lastOn;
     FUNC_16(((void*)0),VAR_32);
 }
 return 1;

      default:
 for (VAR_38 = VAR_17+1;VAR_38 < VAR_10->numitems;VAR_38++)
     if (VAR_10->menuitems[VAR_38].alphaKey == VAR_37)
     {
  VAR_17 = VAR_38;
  FUNC_16(((void*)0),VAR_30);
  return 1;
     }
 for (VAR_38 = 0;VAR_38 <= VAR_17;VAR_38++)
     if (VAR_10->menuitems[VAR_38].alphaKey == VAR_37)
     {
  VAR_17 = VAR_38;
  FUNC_16(((void*)0),VAR_30);
  return 1;
     }
 break;

    }

    return 0;
}
