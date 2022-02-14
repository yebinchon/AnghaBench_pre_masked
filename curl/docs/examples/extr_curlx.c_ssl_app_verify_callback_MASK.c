
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int verbose; int errorbio; int curl; int accesstype; } ;
typedef TYPE_1__ sslctxparm ;
struct TYPE_6__ {scalar_t__ cert; } ;
typedef TYPE_2__ X509_STORE_CTX ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,unsigned char*) ;
 unsigned char* FUNC_4 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_5(X509_STORE_CTX *VAR_3, void *VAR_4)
{
  sslctxparm * VAR_5 = (sslctxparm *) VAR_4;
  int VAR_6;

  if(VAR_5->verbose > 2)
    FUNC_0(VAR_5->errorbio, "entering ssl_app_verify_callback\n");

  VAR_6 = FUNC_2(VAR_3);
  if(VAR_6 && VAR_3->cert) {
    unsigned char *VAR_7;
    if(VAR_5->verbose > 1)
      FUNC_1(VAR_5->errorbio, VAR_3->cert, 0, 0);

    VAR_7 = FUNC_4(VAR_3->cert, VAR_5->accesstype, VAR_2);
    if(VAR_7) {
      if(VAR_5->verbose)
        FUNC_0(VAR_5->errorbio, "Setting URL from SIA to: %s\n", VAR_7);

      FUNC_3(VAR_5->curl, VAR_0, VAR_7);
    }
    else if((VAR_7 = FUNC_4(VAR_3->cert, VAR_5->accesstype,
                                    VAR_1))) {
      if(VAR_5->verbose)
        FUNC_0(VAR_5->errorbio, "Setting URL from AIA to: %s\n", VAR_7);

      FUNC_3(VAR_5->curl, VAR_0, VAR_7);
    }
  }
  if(VAR_5->verbose > 2)
    FUNC_0(VAR_5->errorbio, "leaving ssl_app_verify_callback with %d\n", VAR_6);

  return VAR_6;
}
