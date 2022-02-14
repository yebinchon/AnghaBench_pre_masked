
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int kern_return_t ;
typedef TYPE_1__* coalition_t ;
typedef void* boolean_t ;
struct TYPE_6__ {size_t type; scalar_t__ active_count; int id; void* should_notify; void* notified; void* terminated; void* termrequested; scalar_t__ reaped; } ;


 size_t VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__** VAR_7 ;

kern_return_t
FUNC_4(coalition_t VAR_8)
{
 FUNC_0(VAR_8->type >= 0 && VAR_8->type <= VAR_0);

 if (VAR_8 == VAR_7[VAR_8->type]) {
  return VAR_2;
 }

 FUNC_1(VAR_8);

 if (VAR_8->reaped) {
  FUNC_3(VAR_8);
  return VAR_3;
 }

 if (VAR_8->terminated || VAR_8->termrequested) {
  FUNC_3(VAR_8);
  return VAR_5;
 }

 VAR_8->termrequested = VAR_6;

 boolean_t VAR_9 = VAR_1;
 uint64_t VAR_10 = 0;
 uint32_t VAR_11 = 0;

 if (VAR_8->active_count == 0) {






  FUNC_0(!VAR_8->terminated);
  VAR_8->terminated = VAR_6;

  FUNC_0(!VAR_8->notified);

  VAR_8->notified = VAR_6;



  VAR_9 = VAR_6;

  VAR_10 = VAR_8->id;
  VAR_11 = 0;
 }

 FUNC_3(VAR_8);

 if (VAR_9) {
  FUNC_2(VAR_10, VAR_11);
 }

 return VAR_4;
}
