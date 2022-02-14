
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef TYPE_2__* pcb_t ;
struct TYPE_10__ {int (* thread_destroy ) (int *) ;} ;
struct TYPE_9__ {scalar_t__ ifps; scalar_t__ iss; int * ids; } ;
struct TYPE_8__ {int * hv_thread_target; } ;


 TYPE_2__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(
 thread_t VAR_3)
{
 pcb_t VAR_4 = FUNC_0(VAR_3);
 if (VAR_4->ifps != 0)
  FUNC_1(VAR_3, VAR_4->ifps);
 if (VAR_4->iss != 0) {
  FUNC_3(VAR_2, VAR_4->iss);
  VAR_4->iss = 0;
 }
 if (VAR_4->ids) {
  FUNC_3(VAR_1, VAR_4->ids);
  VAR_4->ids = ((void*)0);
 }
}
