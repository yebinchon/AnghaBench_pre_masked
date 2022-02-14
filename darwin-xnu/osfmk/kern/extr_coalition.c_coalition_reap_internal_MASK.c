
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int kern_return_t ;
typedef TYPE_1__* coalition_t ;
struct TYPE_7__ {size_t type; int termrequested; scalar_t__ active_count; int ref_count; int coalitions; scalar_t__ reaped; int terminated; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 TYPE_1__** VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

kern_return_t
FUNC_7(coalition_t VAR_9)
{
 FUNC_0(VAR_9->type <= VAR_0);

 if (VAR_9 == VAR_8[VAR_9->type]) {
  return VAR_1;
 }

 FUNC_1(VAR_9);
 if (VAR_9->reaped) {
  FUNC_3(VAR_9);
  return VAR_4;
 }
 if (!VAR_9->terminated) {
  FUNC_3(VAR_9);
  return VAR_2;
 }
 FUNC_0(VAR_9->termrequested);
 if (VAR_9->active_count > 0) {
  FUNC_3(VAR_9);
  return VAR_2;
 }

 VAR_9->reaped = VAR_5;


 FUNC_0(VAR_9->ref_count > 2);

 FUNC_3(VAR_9);

 FUNC_4(&VAR_7);
 VAR_6--;
 FUNC_6(&VAR_9->coalitions);
 FUNC_5(&VAR_7);


 FUNC_2(VAR_9);
 FUNC_2(VAR_9);

 return VAR_3;
}
