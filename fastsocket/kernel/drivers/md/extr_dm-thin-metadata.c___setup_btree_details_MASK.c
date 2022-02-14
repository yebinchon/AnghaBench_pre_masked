
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {int size; int * equal; int * dec; int * inc; int * context; } ;
struct TYPE_16__ {int levels; TYPE_6__ value_type; int tm; } ;
struct TYPE_13__ {int size; void* equal; void* dec; void* inc; int context; } ;
struct TYPE_14__ {int levels; TYPE_4__ value_type; int tm; } ;
struct TYPE_11__ {int size; int equal; int dec; int inc; TYPE_5__* context; } ;
struct TYPE_12__ {int levels; TYPE_2__ value_type; int tm; } ;
struct TYPE_17__ {int tm; } ;
struct TYPE_10__ {int size; void* equal; void* dec; void* inc; int context; } ;
struct TYPE_18__ {int levels; TYPE_1__ value_type; int tm; } ;
struct dm_pool_metadata {TYPE_7__ details_info; int tm; TYPE_5__ bl_info; int data_sm; TYPE_3__ tl_info; int nb_tm; TYPE_8__ nb_info; TYPE_9__ info; } ;
struct disk_device_details {int dummy; } ;
typedef int __le64 ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_8__*,TYPE_9__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_1(struct dm_pool_metadata *VAR_6)
{
 VAR_6->info.tm = VAR_6->tm;
 VAR_6->info.levels = 2;
 VAR_6->info.value_type.context = VAR_6->data_sm;
 VAR_6->info.value_type.size = sizeof(__le64);
 VAR_6->info.value_type.inc = VAR_2;
 VAR_6->info.value_type.dec = VAR_0;
 VAR_6->info.value_type.equal = VAR_1;

 FUNC_0(&VAR_6->nb_info, &VAR_6->info, sizeof(VAR_6->nb_info));
 VAR_6->nb_info.tm = VAR_6->nb_tm;

 VAR_6->tl_info.tm = VAR_6->tm;
 VAR_6->tl_info.levels = 1;
 VAR_6->tl_info.value_type.context = &VAR_6->bl_info;
 VAR_6->tl_info.value_type.size = sizeof(__le64);
 VAR_6->tl_info.value_type.inc = VAR_5;
 VAR_6->tl_info.value_type.dec = VAR_3;
 VAR_6->tl_info.value_type.equal = VAR_4;

 VAR_6->bl_info.tm = VAR_6->tm;
 VAR_6->bl_info.levels = 1;
 VAR_6->bl_info.value_type.context = VAR_6->data_sm;
 VAR_6->bl_info.value_type.size = sizeof(__le64);
 VAR_6->bl_info.value_type.inc = VAR_2;
 VAR_6->bl_info.value_type.dec = VAR_0;
 VAR_6->bl_info.value_type.equal = VAR_1;

 VAR_6->details_info.tm = VAR_6->tm;
 VAR_6->details_info.levels = 1;
 VAR_6->details_info.value_type.context = ((void*)0);
 VAR_6->details_info.value_type.size = sizeof(struct disk_device_details);
 VAR_6->details_info.value_type.inc = ((void*)0);
 VAR_6->details_info.value_type.dec = ((void*)0);
 VAR_6->details_info.value_type.equal = ((void*)0);
}
