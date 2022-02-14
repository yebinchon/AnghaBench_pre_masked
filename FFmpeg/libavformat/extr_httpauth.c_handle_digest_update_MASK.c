
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* nonce; } ;
struct TYPE_4__ {TYPE_2__ digest_params; } ;
typedef TYPE_1__ HTTPAuthState ;
typedef TYPE_2__ DigestParams ;


 int FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_1(HTTPAuthState *VAR_0, const char *VAR_1,
                                 int VAR_2, char **VAR_3, int *VAR_4)
{
    DigestParams *VAR_5 = &VAR_0->digest_params;

    if (!FUNC_0(VAR_1, "nextnonce=", VAR_2)) {
        *VAR_3 = VAR_5->nonce;
        *VAR_4 = sizeof(VAR_5->nonce);
    }
}
