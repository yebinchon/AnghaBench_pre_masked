
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_2__ ;
typedef struct TYPE_33__ TYPE_1__ ;


typedef TYPE_1__* Type ;
typedef TYPE_2__* Tree ;
struct TYPE_35__ {int type; } ;
struct TYPE_34__ {int op; TYPE_4__* type; } ;
struct TYPE_33__ {long size; TYPE_4__* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_4__*,TYPE_4__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_2 (int ,long) ;
 int FUNC_3 (char*,TYPE_4__*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 TYPE_2__* FUNC_9 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_1__*,scalar_t__,TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* FUNC_11 (TYPE_4__*) ;
 int VAR_4 ;
 TYPE_2__* FUNC_12 (int,TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_13 (int,TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* FUNC_14 (TYPE_4__*) ;

__attribute__((used)) static Tree FUNC_15(int VAR_5, Tree VAR_6, Tree VAR_7) {
 Type VAR_8 = VAR_3;

 if (FUNC_5(VAR_6->type) && FUNC_5(VAR_7->type)) {
  VAR_8 = FUNC_0(VAR_6->type, VAR_7->type);
  VAR_6 = FUNC_1(VAR_6, VAR_8);
  VAR_7 = FUNC_1(VAR_7, VAR_8);
 } else if (FUNC_8(VAR_6->type) && FUNC_7(VAR_7->type))
  return FUNC_15(VAR_0, VAR_7, VAR_6);
 else if ( FUNC_8(VAR_7->type) && FUNC_7(VAR_6->type)
 && !FUNC_6(VAR_7->type->type))
  {
   long VAR_9;
   VAR_8 = FUNC_14(VAR_7->type);
   VAR_9 = FUNC_14(VAR_8->type)->size;
   if (VAR_9 == 0)
    FUNC_3("unknown size for type `%t'\n", VAR_8->type);
   VAR_6 = FUNC_1(VAR_6, FUNC_11(VAR_6->type));
   if (VAR_9 > 1)
    VAR_6 = FUNC_9(VAR_1, FUNC_2(VAR_4, VAR_9), VAR_6);
   if (VAR_2 && !FUNC_4(VAR_7->op))
    return FUNC_10(VAR_8, VAR_2, VAR_7, VAR_6);
   return FUNC_12(VAR_0, VAR_8, VAR_6, VAR_7);
  }

 else
  FUNC_13(VAR_5, VAR_6, VAR_7);
 return FUNC_12(VAR_5, VAR_8, VAR_6, VAR_7);
}
