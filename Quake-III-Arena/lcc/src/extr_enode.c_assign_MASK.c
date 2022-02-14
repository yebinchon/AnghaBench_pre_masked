
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef TYPE_1__* Type ;
typedef TYPE_2__* Tree ;
struct TYPE_22__ {TYPE_1__* type; } ;
struct TYPE_21__ {scalar_t__ size; struct TYPE_21__* type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (char*,TYPE_1__*,TYPE_1__*) ;

Type FUNC_11(Type VAR_2, Tree VAR_3) {
 Type VAR_4 = FUNC_9(VAR_3->type);

 VAR_2 = FUNC_9(VAR_2);
 if (FUNC_3(VAR_2))
  VAR_2 = VAR_2->type;
 if (VAR_2->size == 0 || VAR_4->size == 0)
  return ((void*)0);
 if ( FUNC_1(VAR_2) && FUNC_1(VAR_4)
 || FUNC_6(VAR_2) && VAR_2 == VAR_4)
  return VAR_2;
 if (FUNC_5(VAR_2) && FUNC_4(VAR_3))
  return VAR_2;
 if ((FUNC_7(VAR_2) && FUNC_5(VAR_4)
   || FUNC_5(VAR_2) && FUNC_7(VAR_4))
 && ( (FUNC_2(VAR_2->type) || !FUNC_2(VAR_4->type))
    && (FUNC_8(VAR_2->type) || !FUNC_8(VAR_4->type))))
  return VAR_2;

 if ((FUNC_5(VAR_2) && FUNC_5(VAR_4)
     && FUNC_0(FUNC_9(VAR_2->type), FUNC_9(VAR_4->type), 1))
 && ( (FUNC_2(VAR_2->type) || !FUNC_2(VAR_4->type))
     && (FUNC_8(VAR_2->type) || !FUNC_8(VAR_4->type))))
  return VAR_2;
 if (FUNC_5(VAR_2) && FUNC_5(VAR_4)
 && ( (FUNC_2(VAR_2->type) || !FUNC_2(VAR_4->type))
    && (FUNC_8(VAR_2->type) || !FUNC_8(VAR_4->type)))) {
  Type VAR_5 = FUNC_9(VAR_2->type), VAR_6 = FUNC_9(VAR_4->type);
  if (FUNC_3(VAR_5) && VAR_6 == VAR_1
  || FUNC_3(VAR_6) && VAR_5 == VAR_1) {
   if (VAR_0 >= 1)
    FUNC_10("assignment between `%t' and `%t' is compiler-dependent\n",
     VAR_2, VAR_4);
   return VAR_2;
  }
 }
 return ((void*)0);
}
