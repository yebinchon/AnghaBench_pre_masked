
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct storage_nio_thread_data {int thread_data; } ;
struct TYPE_3__ {int fd; } ;
struct fast_task_info {TYPE_1__ event; scalar_t__ arg; } ;
struct TYPE_4__ {int nio_thread_index; int stage; } ;
typedef TYPE_2__ StorageClientInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct storage_nio_thread_data* VAR_4 ;
 int FUNC_0 (struct fast_task_info*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct fast_task_info *VAR_5)
{
 StorageClientInfo *VAR_6;
 struct storage_nio_thread_data *VAR_7;

 VAR_6 = (StorageClientInfo *)VAR_5->arg;
 VAR_7 = VAR_4 + VAR_6->nio_thread_index;

 VAR_6->stage = VAR_0;
 return FUNC_0(VAR_5, &VAR_7->thread_data,
   VAR_5->event.fd, VAR_1, VAR_2,
   VAR_3);
}
