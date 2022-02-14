
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_ssl_data {int conn; int ssl_ctx; struct wpabuf* tls_out; } ;
struct eap_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct wpabuf* FUNC_0 (struct eap_ssl_data*,struct wpabuf*,int*) ;
 int FUNC_1 (struct eap_ssl_data*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 struct wpabuf* FUNC_4 (int ,int ,struct wpabuf const*,struct wpabuf**) ;
 int FUNC_5 (int ,char*,struct wpabuf*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (struct wpabuf*) ;
 int FUNC_8 (struct wpabuf*,int const*,size_t) ;

__attribute__((used)) static int FUNC_9(struct eap_sm *VAR_2, struct eap_ssl_data *VAR_3,
     const u8 *VAR_4, size_t VAR_5,
     struct wpabuf **VAR_6)
{
 const struct wpabuf *VAR_7;
 int VAR_8;
 struct wpabuf *VAR_9;
 struct wpabuf VAR_10;

 FUNC_8(&VAR_10, VAR_4, VAR_5);
 VAR_7 = FUNC_0(VAR_3, &VAR_10, &VAR_8);
 if (VAR_7 == ((void*)0))
  return VAR_8 ? 1 : -1;


 if (VAR_3->tls_out) {

  FUNC_6(VAR_0, "SSL: eap_tls_process_input - pending "
      "tls_out data even though tls_out_len = 0");
  FUNC_7(VAR_3->tls_out);

 }
 VAR_9 = ((void*)0);
 VAR_3->tls_out = FUNC_4(VAR_3->ssl_ctx, VAR_3->conn,
       VAR_7, &VAR_9);

 FUNC_1(VAR_3);
 if (VAR_9 &&
     FUNC_2(VAR_3->ssl_ctx, VAR_3->conn) &&
     !FUNC_3(VAR_3->ssl_ctx, VAR_3->conn)) {
  FUNC_5(VAR_1, "SSL: Application data",
        VAR_9);
  *VAR_6 = VAR_9;
  return 2;
 }

 FUNC_7(VAR_9);

 return 0;
}
