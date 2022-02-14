
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** mib; } ;
typedef TYPE_1__ islpci_private ;
typedef enum oid_num_t { ____Placeholder_oid_num_t } oid_num_t ;
struct TYPE_5__ {int flags; int size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (void*,int *,int ) ;
 int FUNC_2 (int,void*) ;

void
FUNC_3(islpci_private *VAR_3, enum oid_num_t VAR_4, void *VAR_5)
{
 FUNC_0(VAR_1 <= VAR_4);
 FUNC_0(VAR_3->mib[VAR_4] == ((void*)0));
 FUNC_0(VAR_5 == ((void*)0));

 FUNC_1(VAR_5, VAR_3->mib[VAR_4], VAR_2[VAR_4].size);
 FUNC_2(VAR_2[VAR_4].flags & VAR_0, VAR_5);
}
