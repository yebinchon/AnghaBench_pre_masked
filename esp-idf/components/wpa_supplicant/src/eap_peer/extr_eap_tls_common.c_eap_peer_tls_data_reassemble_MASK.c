
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct eap_ssl_data {scalar_t__ tls_in_left; struct wpabuf const* tls_in; } ;


 int FUNC_0 (struct eap_ssl_data*,struct wpabuf const*) ;
 struct wpabuf const* FUNC_1 (struct wpabuf const*) ;
 scalar_t__ FUNC_2 (struct wpabuf const*) ;

__attribute__((used)) static const struct wpabuf * FUNC_3(
 struct eap_ssl_data *VAR_0, const struct wpabuf *VAR_1,
 int *VAR_2)
{
 *VAR_2 = 0;

 if (VAR_0->tls_in_left > FUNC_2(VAR_1) || VAR_0->tls_in) {

  int VAR_3 = FUNC_0(VAR_0, VAR_1);
  if (VAR_3) {
   if (VAR_3 == 1)
    *VAR_2 = 1;
   return ((void*)0);
  }


 } else {

  VAR_0->tls_in_left = 0;
  VAR_0->tls_in = FUNC_1(VAR_1);
  if (VAR_0->tls_in == ((void*)0))
   return ((void*)0);
 }

 return VAR_0->tls_in;
}
