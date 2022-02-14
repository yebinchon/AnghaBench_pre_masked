
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {size_t password_len; int const* password; } ;


 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;

const u8 * FUNC_1(struct eap_sm *VAR_0, size_t *VAR_1)
{
 struct eap_peer_config *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 *VAR_1 = VAR_2->password_len;
 return VAR_2->password;
}
