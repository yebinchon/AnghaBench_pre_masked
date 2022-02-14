
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wep_enabled; int auth_mode; } ;
struct assoc_request {int flags; TYPE_2__* wep_keys; TYPE_1__ secinfo; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct assoc_request *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_3);


 VAR_4->secinfo.auth_mode = VAR_2;


 VAR_4->secinfo.wep_enabled = 0;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  VAR_4->wep_keys[VAR_5].len = 0;

 FUNC_2(VAR_0, &VAR_4->flags);
 FUNC_2(VAR_1, &VAR_4->flags);

 FUNC_1(VAR_3);
}
