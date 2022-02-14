
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct obj_mlme {scalar_t__ state; int code; int address; } ;
struct TYPE_5__ {int acl; } ;
typedef TYPE_1__ islpci_private ;
typedef enum oid_num_t { ____Placeholder_oid_num_t } oid_num_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int ,struct obj_mlme*) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(islpci_private *VAR_2, struct obj_mlme *VAR_3, enum oid_num_t VAR_4)
{
 if (((VAR_3->state == VAR_1) ||
      (VAR_3->state == VAR_0))
     && FUNC_0(VAR_2)) {



  VAR_3->code = FUNC_2(&VAR_2->acl,
      VAR_3->address) ? 0 : 1;
  FUNC_1(VAR_2, VAR_4, 0, VAR_3);
 }
}
