
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int type; int player; } ;
typedef TYPE_1__ mobj_t ;
struct TYPE_18__ {int special; } ;
typedef TYPE_2__ line_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int,TYPE_1__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;






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
 TYPE_2__* VAR_10 ;
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
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

void
FUNC_13
( int VAR_30,
  int VAR_31,
  mobj_t* VAR_32 )
{
    line_t* VAR_33;
    int VAR_34;

    VAR_33 = &VAR_10[VAR_30];


    if (!VAR_32->player)
    {

 switch(VAR_32->type)
 {
   case 129:
   case 130:
   case 133:
   case 128:
   case 131:
   case 132:
     return;
     break;

   default: break;
 }

 VAR_34 = 0;
 switch(VAR_33->special)
 {
   case 39:
   case 97:
   case 125:
   case 126:
   case 4:
   case 10:
   case 88:
     VAR_34 = 1;
     break;
 }
 if (!VAR_34)
     return;
    }



    switch (VAR_33->special)
    {


      case 2:

 FUNC_3(VAR_33,VAR_16);
 VAR_33->special = 0;
 break;

      case 3:

 FUNC_3(VAR_33,VAR_5);
 VAR_33->special = 0;
 break;

      case 4:

 FUNC_3(VAR_33,VAR_15);
 VAR_33->special = 0;
 break;

      case 5:

 FUNC_4(VAR_33,VAR_18);
 VAR_33->special = 0;
 break;

      case 6:

 FUNC_2(VAR_33,VAR_9);
 VAR_33->special = 0;
 break;

      case 8:

 FUNC_0(VAR_33,VAR_4);
 VAR_33->special = 0;
 break;

      case 10:

 FUNC_5(VAR_33,VAR_8,0);
 VAR_33->special = 0;
 break;

      case 12:

 FUNC_6(VAR_33,0);
 VAR_33->special = 0;
 break;

      case 13:

 FUNC_6(VAR_33,255);
 VAR_33->special = 0;
 break;

      case 16:

 FUNC_3(VAR_33,VAR_6);
 VAR_33->special = 0;
 break;

      case 17:

 FUNC_7(VAR_33);
 VAR_33->special = 0;
 break;

      case 19:

 FUNC_4(VAR_33,VAR_13);
 VAR_33->special = 0;
 break;

      case 22:

 FUNC_5(VAR_33,VAR_25,0);
 VAR_33->special = 0;
 break;

      case 25:

 FUNC_2(VAR_33,VAR_7);
 VAR_33->special = 0;
 break;

      case 30:


 FUNC_4(VAR_33,VAR_26);
 VAR_33->special = 0;
 break;

      case 35:

 FUNC_6(VAR_33,35);
 VAR_33->special = 0;
 break;

      case 36:

 FUNC_4(VAR_33,VAR_29);
 VAR_33->special = 0;
 break;

      case 37:

 FUNC_4(VAR_33,VAR_11);
 VAR_33->special = 0;
 break;

      case 38:

 FUNC_4( VAR_33, VAR_14 );
 VAR_33->special = 0;
 break;

      case 39:

 FUNC_9( VAR_33, VAR_31, VAR_32 );
 VAR_33->special = 0;
 break;

      case 40:

 FUNC_2( VAR_33, VAR_24 );
 FUNC_4( VAR_33, VAR_14 );
 VAR_33->special = 0;
 break;

      case 44:

 FUNC_2( VAR_33, VAR_12 );
 VAR_33->special = 0;
 break;

      case 52:

 FUNC_11 ();
 break;

      case 53:

 FUNC_5(VAR_33,VAR_17,0);
 VAR_33->special = 0;
 break;

      case 54:

 FUNC_8(VAR_33);
 VAR_33->special = 0;
 break;

      case 56:

 FUNC_4(VAR_33,VAR_21);
 VAR_33->special = 0;
 break;

      case 57:

 FUNC_1(VAR_33);
 VAR_33->special = 0;
 break;

      case 58:

 FUNC_4(VAR_33,VAR_19);
 VAR_33->special = 0;
 break;

      case 59:

 FUNC_4(VAR_33,VAR_20);
 VAR_33->special = 0;
 break;

      case 104:

 FUNC_10(VAR_33);
 VAR_33->special = 0;
 break;

      case 108:

 FUNC_3 (VAR_33,VAR_3);
 VAR_33->special = 0;
 break;

      case 109:

 FUNC_3 (VAR_33,VAR_2);
 VAR_33->special = 0;
 break;

      case 100:

 FUNC_0(VAR_33,VAR_28);
 VAR_33->special = 0;
 break;

      case 110:

 FUNC_3 (VAR_33,VAR_0);
 VAR_33->special = 0;
 break;

      case 119:

 FUNC_4(VAR_33,VAR_22);
 VAR_33->special = 0;
 break;

      case 121:

 FUNC_5(VAR_33,VAR_1,0);
 VAR_33->special = 0;
 break;

      case 124:

 FUNC_12 ();
 break;

      case 125:

 if (!VAR_32->player)
 {
     FUNC_9( VAR_33, VAR_31, VAR_32 );
     VAR_33->special = 0;
 }
 break;

      case 130:

 FUNC_4(VAR_33,VAR_23);
 VAR_33->special = 0;
 break;

      case 141:

 FUNC_2(VAR_33,VAR_27);
 VAR_33->special = 0;
 break;


      case 72:

 FUNC_2( VAR_33, VAR_12 );
 break;

      case 73:

 FUNC_2(VAR_33,VAR_7);
 break;

      case 74:

 FUNC_1(VAR_33);
 break;

      case 75:

 FUNC_3(VAR_33,VAR_5);
 break;

      case 76:

 FUNC_3(VAR_33,VAR_6);
 break;

      case 77:

 FUNC_2(VAR_33,VAR_9);
 break;

      case 79:

 FUNC_6(VAR_33,35);
 break;

      case 80:

 FUNC_6(VAR_33,0);
 break;

      case 81:

 FUNC_6(VAR_33,255);
 break;

      case 82:

 FUNC_4( VAR_33, VAR_14 );
 break;

      case 83:

 FUNC_4(VAR_33,VAR_13);
 break;

      case 84:

 FUNC_4(VAR_33,VAR_11);
 break;

      case 86:

 FUNC_3(VAR_33,VAR_16);
 break;

      case 87:

 FUNC_5(VAR_33,VAR_17,0);
 break;

      case 88:

 FUNC_5(VAR_33,VAR_8,0);
 break;

      case 89:

 FUNC_8(VAR_33);
 break;

      case 90:

 FUNC_3(VAR_33,VAR_15);
 break;

      case 91:

 FUNC_4(VAR_33,VAR_18);
 break;

      case 92:

 FUNC_4(VAR_33,VAR_19);
 break;

      case 93:

 FUNC_4(VAR_33,VAR_20);
 break;

      case 94:

 FUNC_4(VAR_33,VAR_21);
 break;

      case 95:


 FUNC_5(VAR_33,VAR_25,0);
 break;

      case 96:


 FUNC_4(VAR_33,VAR_26);
 break;

      case 97:

 FUNC_9( VAR_33, VAR_31, VAR_32 );
 break;

      case 98:

 FUNC_4(VAR_33,VAR_29);
 break;

      case 105:

 FUNC_3 (VAR_33,VAR_3);
 break;

      case 106:

 FUNC_3 (VAR_33,VAR_2);
 break;

      case 107:

 FUNC_3 (VAR_33,VAR_0);
 break;

      case 120:

 FUNC_5(VAR_33,VAR_1,0);
 break;

      case 126:

 if (!VAR_32->player)
     FUNC_9( VAR_33, VAR_31, VAR_32 );
 break;

      case 128:

 FUNC_4(VAR_33,VAR_22);
 break;

      case 129:

 FUNC_4(VAR_33,VAR_23);
 break;
    }
}
