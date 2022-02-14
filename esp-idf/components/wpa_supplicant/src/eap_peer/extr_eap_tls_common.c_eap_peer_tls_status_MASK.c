
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_ssl_data {int conn; int ssl_ctx; } ;
struct eap_sm {int dummy; } ;
typedef int name ;


 int FUNC_0 (char*,size_t,char*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,char*,int) ;

int FUNC_2(struct eap_sm *VAR_0, struct eap_ssl_data *VAR_1,
   char *VAR_2, size_t VAR_3, int VAR_4)
{
 char VAR_5[128];
 int VAR_6 = 0, VAR_7;

 if (FUNC_1(VAR_1->ssl_ctx, VAR_1->conn, VAR_5, sizeof(VAR_5)) == 0)
 {
  VAR_7 = FUNC_0(VAR_2 + VAR_6, VAR_3 - VAR_6,
      "EAP TLS cipher=%s\n", VAR_5);
  if (VAR_7 < 0 || (size_t) VAR_7 >= VAR_3 - VAR_6)
   return VAR_6;
  VAR_6 += VAR_7;
 }

 return VAR_6;
}
