
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sm {int dummy; } ;
struct eap_peer_config {size_t password_len; int flags; int const* password; } ;


 int VAR_0 ;
 struct eap_peer_config* FUNC_0 (struct eap_sm*) ;

const u8 * FUNC_1(struct eap_sm *VAR_1, size_t *VAR_2, int *VAR_3)
{
 struct eap_peer_config *VAR_4 = FUNC_0(VAR_1);
 if (VAR_4 == ((void*)0))
  return ((void*)0);

 *VAR_2 = VAR_4->password_len;
 if (VAR_3)
  *VAR_3 = !!(VAR_4->flags & VAR_0);
 return VAR_4->password;
}
