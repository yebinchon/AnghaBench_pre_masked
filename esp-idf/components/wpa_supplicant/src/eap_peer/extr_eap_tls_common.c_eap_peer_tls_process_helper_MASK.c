
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ssl_data {int * tls_out; int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;
typedef int EapType ;


 int VAR_0 ;
 int FUNC_0 (struct eap_ssl_data*) ;
 int FUNC_1 (struct eap_sm*,struct eap_ssl_data*,int const*,size_t,struct wpabuf**) ;
 int FUNC_2 (struct eap_ssl_data*,int ,int,int ,int,struct wpabuf**) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

int FUNC_7(struct eap_sm *VAR_1, struct eap_ssl_data *VAR_2,
    EapType VAR_3, int VAR_4,
    u8 VAR_5, const u8 *VAR_6, size_t VAR_7,
    struct wpabuf **VAR_8)
{
 int VAR_9 = 0;

 *VAR_8 = ((void*)0);

 if (VAR_2->tls_out && FUNC_6(VAR_2->tls_out) > 0 && VAR_7 > 0) {
  FUNC_4(VAR_0, "SSL: Received non-ACK when output "
      "fragments are waiting to be sent out");
  return -1;
 }

 if (VAR_2->tls_out == ((void*)0) || FUNC_6(VAR_2->tls_out) == 0) {




  int VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_6, VAR_7,
      VAR_8);
  if (VAR_10) {




   return VAR_10;
  }





 }

 if (VAR_2->tls_out == ((void*)0)) {





  FUNC_0(VAR_2);
  return -1;
 }

 if (FUNC_3(VAR_2->ssl_ctx, VAR_2->conn)) {

  FUNC_4(VAR_0, "SSL: Failed - tls_out available to "
      "report error");
  VAR_9 = -1;

 }

 if (VAR_2->tls_out == ((void*)0) || FUNC_6(VAR_2->tls_out) == 0) {





  FUNC_4(VAR_0, "SSL: No data to be sent out");
  FUNC_5(VAR_2->tls_out);
  VAR_2->tls_out = ((void*)0);
  return 1;
 }


 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_9,
          VAR_8);
}
