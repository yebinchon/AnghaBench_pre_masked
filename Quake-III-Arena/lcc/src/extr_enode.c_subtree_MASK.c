
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_40__ TYPE_5__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


typedef TYPE_1__* Type ;
typedef TYPE_2__* Tree ;
struct TYPE_40__ {int type; } ;
struct TYPE_39__ {TYPE_5__* type; } ;
struct TYPE_38__ {long size; TYPE_5__* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (TYPE_5__*,TYPE_5__*) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,long) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_4 (char*,TYPE_5__*) ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 scalar_t__ FUNC_8 (TYPE_5__*) ;
 scalar_t__ FUNC_9 (TYPE_5__*) ;
 TYPE_1__* VAR_7 ;
 TYPE_2__* FUNC_10 (int ,TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* FUNC_11 (TYPE_5__*) ;
 TYPE_1__* VAR_8 ;
 TYPE_2__* FUNC_12 (int,TYPE_1__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_13 (int,TYPE_2__*,TYPE_2__*) ;
 TYPE_1__* FUNC_14 (TYPE_5__*) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static Tree FUNC_15(int VAR_10, Tree VAR_11, Tree VAR_12) {
 long VAR_13;
 Type VAR_14 = VAR_6;

 if (FUNC_5(VAR_11->type) && FUNC_5(VAR_12->type)) {
  VAR_14 = FUNC_0(VAR_11->type, VAR_12->type);
  VAR_11 = FUNC_1(VAR_11, VAR_14);
  VAR_12 = FUNC_1(VAR_12, VAR_14);
 } else if (FUNC_8(VAR_11->type) && !FUNC_6(VAR_11->type->type) && FUNC_7(VAR_12->type)) {
  VAR_14 = FUNC_14(VAR_11->type);
  VAR_13 = FUNC_14(VAR_14->type)->size;
  if (VAR_13 == 0)
   FUNC_4("unknown size for type `%t'\n", VAR_14->type);
  VAR_12 = FUNC_1(VAR_12, FUNC_11(VAR_12->type));
  if (VAR_13 > 1)
   VAR_12 = FUNC_10(VAR_2, FUNC_2(VAR_8, VAR_13), VAR_12);
  if (FUNC_9(VAR_12->type))
   VAR_12 = FUNC_1(VAR_12, VAR_9);
  else
   VAR_12 = FUNC_1(VAR_12, VAR_8);
  return FUNC_12(VAR_4+VAR_3, VAR_14, VAR_11, VAR_12);
 } else if (FUNC_3(VAR_11->type, VAR_12->type)) {
  VAR_14 = FUNC_14(VAR_11->type);
  VAR_13 = FUNC_14(VAR_14->type)->size;
  if (VAR_13 == 0)
   FUNC_4("unknown size for type `%t'\n", VAR_14->type);
  VAR_11 = FUNC_12(VAR_4+VAR_5, VAR_9,
   FUNC_1(VAR_11, VAR_9), FUNC_1(VAR_12, VAR_9));
  return FUNC_12(VAR_0+VAR_1, VAR_7,
   FUNC_1(VAR_11, VAR_7), FUNC_2(VAR_7, VAR_13));
 } else
  FUNC_13(VAR_10, VAR_11, VAR_12);
 return FUNC_12(VAR_10, VAR_14, VAR_11, VAR_12);
}
