
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lock; } ;
struct TYPE_4__ {int triggerMetadataSync; } ;
typedef TYPE_1__ MaintenanceDaemonDBData ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static bool
FUNC_2(MaintenanceDaemonDBData *VAR_2)
{
 bool VAR_3 = 0;

 FUNC_0(&VAR_1->lock, VAR_0);

 VAR_3 = VAR_2->triggerMetadataSync;
 VAR_2->triggerMetadataSync = 0;

 FUNC_1(&VAR_1->lock);

 return VAR_3;
}
