
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_config_blob {int dummy; } ;
struct TYPE_3__ {int * ca_cert; int * private_key; int * client_cert; } ;
struct eap_sm {TYPE_1__ config; TYPE_2__* blob; } ;
struct TYPE_4__ {int * name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct eap_sm *VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->blob[VAR_2].name) {
   FUNC_1(VAR_1->blob[VAR_2].name);
   VAR_1->blob[VAR_2].name = ((void*)0);
  }
 }
 FUNC_0(&VAR_1->blob[0], sizeof(struct wpa_config_blob)*VAR_0);

 VAR_1->config.client_cert = ((void*)0);
 VAR_1->config.private_key = ((void*)0);
 VAR_1->config.ca_cert = ((void*)0);
}
