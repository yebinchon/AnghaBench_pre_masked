
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct agp_memory {int dummy; } ;
typedef int off_t ;
struct TYPE_6__ {TYPE_1__* ops; } ;
typedef TYPE_2__ alpha_agp_info ;
struct TYPE_7__ {TYPE_2__* dev_private_data; } ;
struct TYPE_5__ {int (* unbind ) (TYPE_2__*,int ,struct agp_memory*) ;} ;


 TYPE_4__* VAR_0 ;
 int FUNC_0 (struct agp_memory*) ;
 int FUNC_1 (TYPE_2__*,int ,struct agp_memory*) ;

__attribute__((used)) static int FUNC_2(struct agp_memory *VAR_1, off_t VAR_2,
     int VAR_3)
{
 alpha_agp_info *VAR_4 = VAR_0->dev_private_data;
 int VAR_5;

 VAR_5 = VAR_4->ops->unbind(VAR_4, VAR_2, VAR_1);
 FUNC_0(VAR_1);
 return VAR_5;
}
