
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buf ;
struct TYPE_3__ {int verify; void* key_file; void* cert_file; void* ca_file; } ;
typedef TYPE_1__ TLSShared ;


 scalar_t__ FUNC_0 (char*,int,char*,char const*) ;
 void* FUNC_1 (char*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char**,int) ;

__attribute__((used)) static void FUNC_4(TLSShared *VAR_0, const char *VAR_1)
{
    char VAR_2[1024];
    const char *VAR_3 = FUNC_2(VAR_1, '?');
    if (!VAR_3)
        return;

    if (!VAR_0->ca_file && FUNC_0(VAR_2, sizeof(VAR_2), "cafile", VAR_3))
        VAR_0->ca_file = FUNC_1(VAR_2);

    if (!VAR_0->verify && FUNC_0(VAR_2, sizeof(VAR_2), "verify", VAR_3)) {
        char *VAR_4 = ((void*)0);
        VAR_0->verify = FUNC_3(VAR_2, &VAR_4, 10);
        if (VAR_2 == VAR_4)
            VAR_0->verify = 1;
    }

    if (!VAR_0->cert_file && FUNC_0(VAR_2, sizeof(VAR_2), "cert", VAR_3))
        VAR_0->cert_file = FUNC_1(VAR_2);

    if (!VAR_0->key_file && FUNC_0(VAR_2, sizeof(VAR_2), "key", VAR_3))
        VAR_0->key_file = FUNC_1(VAR_2);
}
