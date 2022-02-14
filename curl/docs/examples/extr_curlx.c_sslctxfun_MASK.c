
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int errorbio; int ca; int pkey; int usercert; } ;
typedef TYPE_1__ sslctxparm ;
typedef int SSL_CTX ;
typedef int CURLcode ;
typedef int CURL ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,void*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static CURLcode FUNC_15(CURL *VAR_6, void *VAR_7, void *VAR_8)
{
  sslctxparm *VAR_9 = (sslctxparm *) VAR_8;
  SSL_CTX *VAR_10 = (SSL_CTX *) VAR_7;

  if(!FUNC_11(VAR_10, VAR_9->usercert)) {
    FUNC_0(VAR_9->errorbio, "SSL_CTX_use_certificate problem\n");
    goto err;
  }
  if(!FUNC_10(VAR_10, VAR_9->pkey)) {
    FUNC_0(VAR_9->errorbio, "SSL_CTX_use_PrivateKey\n");
    goto err;
  }

  if(!FUNC_2(VAR_10)) {
    FUNC_0(VAR_9->errorbio, "SSL_CTX_check_private_key\n");
    goto err;
  }

  FUNC_7(VAR_10, 1);
  FUNC_5(VAR_10, "RC4-MD5");
  FUNC_6(VAR_10, VAR_2);

  FUNC_12(FUNC_3(VAR_10),
                      FUNC_14(VAR_9->ca, FUNC_13(VAR_9->ca)-1));

  FUNC_9(VAR_10, 2);
  FUNC_8(VAR_10, VAR_3, VAR_4);
  FUNC_4(VAR_10, VAR_5, VAR_8);

  return VAR_0;
  err:
  FUNC_1(VAR_9->errorbio);
  return VAR_1;

}
