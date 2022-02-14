
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_8__ {void* data; int id; int base; scalar_t__ data_allocated; scalar_t__ data_set; } ;
typedef TYPE_1__ esp_event_post_instance_t ;
struct TYPE_9__ {int profiling_mutex; } ;
typedef TYPE_2__ esp_event_loop_instance_t ;
struct TYPE_10__ {int time; int invoked; int arg; int (* handler ) (int ,int ,int ,void*) ;} ;
typedef TYPE_3__ esp_event_handler_instance_t ;


 int FUNC_0 (int ,char*,int ,int ,int (*) (int ,int ,int ,void*),TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,void*) ;
 int FUNC_3 (int ,int ,int ,void*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(esp_event_loop_instance_t* VAR_2, esp_event_handler_instance_t *VAR_3, esp_event_post_instance_t VAR_4)
{
    FUNC_0(VAR_0, "running post %s:%d with handler %p on loop %p", VAR_4.base, VAR_4.id, VAR_3->handler, VAR_2);
    (*(VAR_3->handler))(VAR_3->arg, VAR_4.base, VAR_4.id, VAR_4.data);
}
