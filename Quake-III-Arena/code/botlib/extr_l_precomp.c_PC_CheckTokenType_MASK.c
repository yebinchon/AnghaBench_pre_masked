
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int type; int subtype; } ;
typedef TYPE_1__ token_t ;
typedef int source_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_3(source_t *VAR_2, int VAR_3, int VAR_4, token_t *VAR_5)
{
 token_t VAR_6;

 if (!FUNC_1(VAR_2, &VAR_6)) return VAR_0;

 if (VAR_6.type == VAR_3 &&
   (VAR_6.subtype & VAR_4) == VAR_4)
 {
  FUNC_0(VAR_5, &VAR_6, sizeof(token_t));
  return VAR_1;
 }

 FUNC_2(VAR_2, &VAR_6);
 return VAR_0;
}
