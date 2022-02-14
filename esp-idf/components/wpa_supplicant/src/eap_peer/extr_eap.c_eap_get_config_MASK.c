
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_peer_config {int dummy; } ;
struct eap_sm {struct eap_peer_config config; } ;



struct eap_peer_config * FUNC_0(struct eap_sm *VAR_0)
{
 return &VAR_0->config;
}
