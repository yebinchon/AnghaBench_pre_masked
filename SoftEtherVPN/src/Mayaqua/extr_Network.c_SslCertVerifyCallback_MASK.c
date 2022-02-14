
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct SslClientCertInfo {char* PreverifyErrMessage; TYPE_1__* X; int PreverifyErr; } ;
typedef int X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_6__ {int do_not_free; } ;
typedef TYPE_1__ X ;
typedef int SSL ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 struct SslClientCertInfo* FUNC_4 (int *,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ,char*) ;
 TYPE_1__* FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 char* FUNC_11 (int ) ;

int FUNC_12(int VAR_1, X509_STORE_CTX *VAR_2)
{
 SSL *VAR_3;
 struct SslClientCertInfo *VAR_4;
 X509 *VAR_5;

 VAR_3 = FUNC_10(VAR_2, FUNC_5());
 VAR_4 = FUNC_4(VAR_3, FUNC_3());

 if (VAR_4 != ((void*)0))
 {
  VAR_4->PreverifyErr = FUNC_9(VAR_2);
  VAR_4->PreverifyErrMessage[0] = '\0';
  if (!VAR_1)
  {
   const char *VAR_6 = FUNC_11(VAR_4->PreverifyErr);
   FUNC_6(VAR_4->PreverifyErrMessage, VAR_0, (char *)VAR_6);
   FUNC_1("SslCertVerifyCallback preverify error: '%s'\n", VAR_6);
  }
  else
  {
   VAR_5 = FUNC_8(VAR_2);
   if (VAR_5 != ((void*)0))
   {
    X *VAR_7 = FUNC_7(VAR_5);
    X *VAR_8 = FUNC_0(VAR_7);
    VAR_7->do_not_free = 1;
    FUNC_2(VAR_7);
    VAR_4->X = VAR_8;
   }
  }
 }

 return 1;
}
