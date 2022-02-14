
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_3__ ;
typedef struct TYPE_37__ TYPE_2__ ;
typedef struct TYPE_36__ TYPE_21__ ;
typedef struct TYPE_35__ TYPE_20__ ;
typedef struct TYPE_34__ TYPE_1__ ;


typedef int * Type ;
typedef TYPE_2__* Tree ;
struct TYPE_38__ {scalar_t__ scope; int name; scalar_t__ generated; scalar_t__ computed; } ;
struct TYPE_37__ {int type; TYPE_1__** kids; } ;
struct TYPE_36__ {int type; } ;
struct TYPE_35__ {scalar_t__ returns; } ;
struct TYPE_34__ {TYPE_2__** kids; } ;
typedef TYPE_3__* Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (scalar_t__,TYPE_21__*,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*,TYPE_2__*) ;
 int * FUNC_4 (char*,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*,int *) ;
 TYPE_21__* VAR_7 ;
 int FUNC_6 (char*,int ,char*) ;
 TYPE_20__ VAR_8 ;
 char* FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ,int ,int ) ;
 TYPE_2__* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int VAR_9 ;
 TYPE_3__* FUNC_13 (TYPE_2__*) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 TYPE_2__* FUNC_15 (TYPE_2__*) ;
 int * FUNC_16 (int ) ;
 TYPE_3__* VAR_10 ;
 TYPE_2__* FUNC_17 (TYPE_2__*) ;
 TYPE_2__* FUNC_18 (scalar_t__,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_19 (TYPE_2__*,int ,int ) ;
 int FUNC_20 (char*,char*,...) ;

void FUNC_21(Tree VAR_11) {
 Type VAR_12;

 if (VAR_11 == ((void*)0)) {
  if (VAR_8.returns)
   FUNC_1(VAR_8.returns, VAR_7, ((void*)0));
  return;
 }
 VAR_11 = FUNC_15(VAR_11);
 VAR_12 = FUNC_4(FUNC_7(VAR_7->type), VAR_11);
 if (VAR_12 == ((void*)0)) {
  FUNC_6("illegal return type; found `%t' expected `%t'\n",
   VAR_11->type, FUNC_7(VAR_7->type));
  return;
 }
 VAR_11 = FUNC_5(VAR_11, VAR_12);
 if (VAR_10)
  {
   if (FUNC_10(VAR_11))
    VAR_11 = FUNC_18(VAR_6, VAR_11->type,
     FUNC_18(VAR_3+VAR_2, VAR_11->type,
      VAR_11->kids[0]->kids[0], FUNC_9(VAR_10)),
     FUNC_17(FUNC_9(VAR_10)));
   else
    VAR_11 = FUNC_3(VAR_0, FUNC_17(FUNC_9(VAR_10)), VAR_11);
   FUNC_19(VAR_11, 0, 0);
   if (VAR_8.returns)
    FUNC_1(VAR_8.returns, VAR_7, FUNC_17(FUNC_9(VAR_10)));
   return;
  }
 if (VAR_8.returns)
  {
   Symbol VAR_13 = FUNC_8(VAR_1, VAR_11->type, VAR_9);
   FUNC_0(VAR_13);
   FUNC_19(FUNC_2(VAR_13, VAR_11), 0, 0);
   FUNC_1(VAR_8.returns, VAR_7, FUNC_9(VAR_13));
   VAR_11 = FUNC_9(VAR_13);
  }
 if (!FUNC_11(VAR_11->type))
  VAR_11 = FUNC_5(VAR_11, FUNC_16(VAR_11->type));
 if (FUNC_12(VAR_11->type))
  {
   Symbol VAR_14 = FUNC_13(VAR_11);
   if (VAR_14 && (VAR_14->computed || VAR_14->generated))
    FUNC_20("pointer to a %s is an illegal return value\n",
     VAR_14->scope == VAR_4 ? "parameter" : "local");
   else if (VAR_14)
    FUNC_20("pointer to %s `%s' is an illegal return value\n",
     VAR_14->scope == VAR_4 ? "parameter" : "local", VAR_14->name);
  }
 FUNC_19(FUNC_18(FUNC_14(VAR_5,VAR_11->type), VAR_11->type, VAR_11, ((void*)0)), 0, 0);
}
