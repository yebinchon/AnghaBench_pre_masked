
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_28__ ;
typedef struct TYPE_37__ TYPE_22__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_18__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int Type ;
typedef TYPE_10__* Tree ;
struct TYPE_45__ {int label; } ;
struct TYPE_46__ {TYPE_8__ l; } ;
struct TYPE_43__ {int label; } ;
struct TYPE_44__ {TYPE_6__ f; } ;
struct TYPE_41__ {int label; } ;
struct TYPE_42__ {TYPE_4__ l; } ;
struct TYPE_39__ {int i; int u; } ;
struct TYPE_40__ {TYPE_2__ v; } ;
struct TYPE_38__ {TYPE_7__ u; int type; } ;
struct TYPE_37__ {TYPE_5__ u; } ;
struct TYPE_36__ {int type; } ;
struct TYPE_35__ {int op; } ;
struct TYPE_34__ {int lab; TYPE_22__* deflab; TYPE_1__* sym; } ;
struct TYPE_33__ {TYPE_9__ u; int src; int scope; } ;
struct TYPE_32__ {TYPE_3__ u; TYPE_18__* type; int op; } ;
typedef TYPE_11__* Symbol ;
typedef TYPE_12__* Swtch ;


 int VAR_0 ;


 int VAR_1 ;



 int VAR_2 ;

 int VAR_3 ;



 int VAR_4 ;

 int VAR_5 ;

 int VAR_6 ;

 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_12__*,int ,int) ;
 TYPE_10__* FUNC_2 (TYPE_10__*,int ) ;
 TYPE_28__* VAR_7 ;
 int FUNC_3 (int,TYPE_12__*,int) ;
 TYPE_10__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*,TYPE_12__*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char) ;
 int * FUNC_11 (int ) ;
 TYPE_10__* FUNC_12 (int ) ;
 int FUNC_13 (int ,TYPE_18__*) ;
 TYPE_22__* FUNC_14 (int) ;
 int FUNC_15 (void*,TYPE_12__*,int) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 void* FUNC_18 (int) ;
 char FUNC_19 () ;
 int FUNC_20 () ;
 int VAR_8 ;
 int FUNC_21 (void*,int,TYPE_12__*,int) ;
 TYPE_11__* FUNC_22 (int ,int *,int ,int ) ;
 int FUNC_23 (TYPE_18__*) ;
 int const* VAR_9 ;
 int FUNC_24 (TYPE_10__*,int ,int ) ;
 TYPE_11__* FUNC_25 (int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 float VAR_12 ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int ,char*) ;
 int VAR_13 ;
 int FUNC_28 () ;
 int VAR_14 ;
 int FUNC_29 (int,void*,int) ;
 int VAR_15 ;
 int FUNC_30 (char,char*) ;
 int VAR_16 ;
 int FUNC_31 (TYPE_11__*,int ) ;
 int VAR_17 ;
 int FUNC_32 (int *,int ,int ) ;
 int FUNC_33 (char*) ;
 int FUNC_34 (void*,TYPE_12__*,int) ;

void FUNC_35(int VAR_18, Swtch VAR_19, int VAR_20) {
 float VAR_21 = VAR_12;

 if (VAR_0 >= 2 && VAR_20 == 15)
  FUNC_33("more than 15 levels of nested statements\n");
 switch (VAR_15) {
 case 131: FUNC_21(FUNC_18(2), VAR_18, VAR_19, VAR_20 + 1);
 break;
 case 128: FUNC_34(FUNC_18(3), VAR_19, VAR_20 + 1); break;
 case 135: FUNC_8(FUNC_18(3), VAR_19, VAR_20 + 1); FUNC_10(';');
     break;

 case 134: FUNC_15(FUNC_18(4), VAR_19, VAR_20 + 1);
 break;
 case 139: FUNC_32(((void*)0), 0, 0);
         FUNC_7(((void*)0));
         if (VAR_19 && VAR_19->lab > VAR_18)
          FUNC_0(VAR_19->lab + 1);
         else if (VAR_18)
          FUNC_0(VAR_18 + 2);
         else
          FUNC_9("illegal break statement\n");
         VAR_15 = FUNC_20(); FUNC_10(';');
        break;

 case 137: FUNC_32(((void*)0), 0, 0);
         FUNC_7(((void*)0));
         if (VAR_18)
          FUNC_0(VAR_18 + 1);
         else
          FUNC_9("illegal continue statement\n");
         VAR_15 = FUNC_20(); FUNC_10(';');
           break;

 case 129: FUNC_29(VAR_18, FUNC_18(2), VAR_20 + 1);
 break;
 case 138: {
          int VAR_22 = FUNC_18(1);
          if (VAR_19 == ((void*)0))
           FUNC_9("illegal case label\n");
          FUNC_6(VAR_22);
          while (VAR_15 == 138) {
           static char VAR_23[] = { 131, 132, 0 };
           Tree VAR_24;
           VAR_15 = FUNC_20();
           VAR_24 = FUNC_4(0);
           if (FUNC_17(VAR_24->op) == VAR_1 && FUNC_23(VAR_24->type)) {
            if (VAR_19) {
             VAR_10++;
             VAR_24 = FUNC_2(VAR_24, VAR_19->sym->type);
             if (VAR_24->type->op == VAR_6)
              VAR_24->u.v.i = FUNC_13(VAR_24->u.v.u, VAR_24->type);
             VAR_10--;
             FUNC_1(VAR_19, VAR_24->u.v.i, VAR_22);
            }
           } else
            FUNC_9("case label must be a constant integer expression\n");

           FUNC_30(':', VAR_23);
          }
          FUNC_35(VAR_18, VAR_19, VAR_20);
         } break;
 case 136: if (VAR_19 == ((void*)0))
          FUNC_9("illegal default label\n");
         else if (VAR_19->deflab)
          FUNC_9("extra default label\n");
         else {
          VAR_19->deflab = FUNC_14(VAR_19->lab);
          FUNC_6(VAR_19->deflab->u.l.label);
         }
         VAR_15 = FUNC_20();
         FUNC_10(':');
         FUNC_35(VAR_18, VAR_19, VAR_20); break;
 case 130: {
          Type VAR_25 = FUNC_16(VAR_7->type);
          VAR_15 = FUNC_20();
          FUNC_7(((void*)0));
          if (VAR_15 != ';')
           if (VAR_25 == VAR_17) {
            FUNC_9("extraneous return value\n");
            FUNC_11(0);
            FUNC_26(((void*)0));
           } else
            FUNC_26(FUNC_11(0));
          else {
           if (VAR_25 != VAR_17)
            FUNC_33("missing return value\n");
           FUNC_26(((void*)0));
          }
          FUNC_0(VAR_7->u.f.label);
         } FUNC_10(';');
         break;

 case '{': FUNC_3(VAR_18, VAR_19, VAR_20 + 1); break;
 case ';': FUNC_7(((void*)0)); VAR_15 = FUNC_20(); break;
 case 133: FUNC_32(((void*)0), 0, 0);
         FUNC_7(((void*)0));
         VAR_15 = FUNC_20();
         if (VAR_15 == 132) {
          Symbol VAR_26 = FUNC_25(VAR_16, VAR_14);
          if (VAR_26 == ((void*)0)) {
    VAR_26 = FUNC_22(VAR_16, &VAR_14, 0, VAR_3);
    VAR_26->scope = VAR_4;
    VAR_26->u.l.label = FUNC_18(1);
    VAR_26->src = VAR_13;
   }
          FUNC_31(VAR_26, VAR_13);
          FUNC_0(VAR_26->u.l.label);
          VAR_15 = FUNC_20();
         } else
          FUNC_9("missing label in goto\n"); FUNC_10(';');
       break;

 case 132: if (FUNC_19() == ':') {
          FUNC_28();
          FUNC_35(VAR_18, VAR_19, VAR_20);
          break;
         }
 default: FUNC_7(((void*)0));
         if (VAR_9[VAR_15] != 132) {
          FUNC_9("unrecognized statement\n");
          VAR_15 = FUNC_20();
         } else {
          Tree VAR_27 = FUNC_12(0);
          FUNC_24(VAR_27, 0, 0);
          if (VAR_11 == 0 || VAR_11 > 200)
           FUNC_32(((void*)0), 0, 0);
          else if (VAR_8) FUNC_32(((void*)0), 0, 0);
          FUNC_5(VAR_5);
         } FUNC_10(';');
      break;

 }
 if (VAR_9[VAR_15] != 131 && VAR_9[VAR_15] != 132
 && VAR_15 != '}' && VAR_15 != VAR_2) {
  static char VAR_28[] = { 131, 132, '}', 0 };
  FUNC_9("illegal statement termination\n");
  FUNC_27(0, VAR_28);
 }
 VAR_12 = VAR_21;
}
