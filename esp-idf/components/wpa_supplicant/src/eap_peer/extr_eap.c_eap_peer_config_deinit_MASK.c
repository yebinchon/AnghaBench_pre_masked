
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int new_password; int password; int identity; int anonymous_identity; } ;
struct eap_sm {TYPE_1__ config; } ;
struct eap_peer_config {int dummy; } ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct eap_sm *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->config.anonymous_identity);
 FUNC_1(VAR_0->config.identity);
 FUNC_1(VAR_0->config.password);
 FUNC_1(VAR_0->config.new_password);
 FUNC_0(&VAR_0->config, sizeof(struct eap_peer_config));
}
