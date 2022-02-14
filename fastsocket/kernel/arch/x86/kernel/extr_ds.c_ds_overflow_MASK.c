
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ds_context {TYPE_1__* pebs_master; TYPE_2__* bts_master; } ;
typedef enum ds_qualifier { ____Placeholder_ds_qualifier } ds_qualifier ;
struct TYPE_4__ {int (* ovfl ) (TYPE_2__*) ;} ;
struct TYPE_3__ {int (* ovfl ) (TYPE_1__*) ;} ;




 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct ds_context *VAR_0, enum ds_qualifier VAR_1)
{
 switch (VAR_1) {
 case 129:
  if (VAR_0->bts_master &&
      VAR_0->bts_master->ovfl)
   VAR_0->bts_master->ovfl(VAR_0->bts_master);
  break;
 case 128:
  if (VAR_0->pebs_master &&
      VAR_0->pebs_master->ovfl)
   VAR_0->pebs_master->ovfl(VAR_0->pebs_master);
  break;
 }
}
