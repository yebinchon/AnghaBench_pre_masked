
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int memory_object_control_t ;
typedef int kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {scalar_t__ named; int pager_ready; int ref_count; int alive; scalar_t__ terminating; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

kern_return_t
FUNC_7(
 memory_object_control_t VAR_8,
 boolean_t VAR_9)
{
 vm_object_t VAR_10;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 == VAR_7) {
  return (VAR_1);
 }
restart:
 FUNC_1(VAR_10);

 if (VAR_10->terminating && VAR_9) {
  FUNC_6(VAR_10,
   VAR_6,
   VAR_3);
  goto restart;
 }

 if (!VAR_10->alive) {
  FUNC_5(VAR_10);
  return VAR_0;
 }

 if (VAR_10->named == VAR_4) {
  FUNC_5(VAR_10);
  return VAR_2;
 }
 VAR_10->named = VAR_4;
 FUNC_2(VAR_10);
 VAR_10->ref_count++;
 FUNC_3(VAR_10);
 while (!VAR_10->pager_ready) {
  FUNC_4(VAR_10,
    VAR_5,
    VAR_3);
 }
 FUNC_5(VAR_10);
 return (VAR_2);
}
