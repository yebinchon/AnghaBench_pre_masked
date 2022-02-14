
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;scalar_t__ provider_data; } ;
struct TYPE_5__ {TYPE_1__* api; } ;
struct TYPE_4__ {int (* stop_listener ) (TYPE_2__*,scalar_t__) ;} ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (struct iw_cm_id*) ;

int FUNC_3(struct iw_cm_id *VAR_2)
{
 if (VAR_2->provider_data)
  VAR_1->api->stop_listener(VAR_1, VAR_2->provider_data);
 else
  FUNC_0(VAR_0, "cm_id->provider_data was NULL\n");

 VAR_2->rem_ref(VAR_2);

 return 0;
}
