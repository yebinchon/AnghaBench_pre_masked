
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int kern_return_t ;
struct TYPE_15__ {scalar_t__ affinity_set; scalar_t__ inspection; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*) ;

kern_return_t
FUNC_8(
 thread_t VAR_7,
 thread_t VAR_8)
{
 kern_return_t VAR_9 = VAR_3;
 uint32_t VAR_10 = 0;

 if (VAR_7 == VAR_5 || VAR_8 == VAR_5 || VAR_8 == VAR_7)
  return (VAR_2);

 FUNC_3(VAR_7);
 VAR_10 = VAR_7->active;
 FUNC_4(VAR_7);

 if (!VAR_10) {
  return VAR_4;
 }

 FUNC_3(VAR_8);

 if (VAR_8->active || VAR_8->inspection) {
  FUNC_2(VAR_8);

  FUNC_4(VAR_8);

  if (FUNC_6(VAR_8, VAR_6)) {
   FUNC_3(VAR_8);
   VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_6);
   if (VAR_7->affinity_set != VAR_0)
    FUNC_1(VAR_7, VAR_8);
   FUNC_7(VAR_8);
  }
  else {
   FUNC_3(VAR_8);
   VAR_9 = VAR_1;
  }

  FUNC_5(VAR_8);
 }
 else
  VAR_9 = VAR_4;

 FUNC_4(VAR_8);

 return (VAR_9);
}
