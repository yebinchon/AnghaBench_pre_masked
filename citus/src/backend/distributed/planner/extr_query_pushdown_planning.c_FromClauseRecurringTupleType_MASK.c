
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rtable; } ;
typedef int RecurringTuplesType ;
typedef TYPE_1__ Query ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static RecurringTuplesType
FUNC_3(Query *VAR_3)
{
 RecurringTuplesType VAR_4 = VAR_2;

 if (FUNC_1(VAR_3))
 {
  return VAR_1;
 }

 if (FUNC_0(VAR_3->rtable, VAR_0))
 {
  return VAR_2;
 }





 FUNC_2(VAR_3->rtable, &VAR_4);

 return VAR_4;
}
