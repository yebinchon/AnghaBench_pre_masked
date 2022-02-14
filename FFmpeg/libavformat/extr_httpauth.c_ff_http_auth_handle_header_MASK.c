
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ff_parse_key_val_cb ;
struct TYPE_6__ {char const* stale; int qop; } ;
struct TYPE_5__ {scalar_t__ auth_type; int stale; TYPE_2__ digest_params; scalar_t__* realm; } ;
typedef TYPE_1__ HTTPAuthState ;
typedef int DigestParams ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char const*,int ,TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

void FUNC_5(HTTPAuthState *VAR_5, const char *VAR_6,
                                const char *VAR_7)
{
    if (!FUNC_0(VAR_6, "WWW-Authenticate") || !FUNC_0(VAR_6, "Proxy-Authenticate")) {
        const char *VAR_8;
        if (FUNC_1(VAR_7, "Basic ", &VAR_8) &&
            VAR_5->auth_type <= VAR_0) {
            VAR_5->auth_type = VAR_0;
            VAR_5->realm[0] = 0;
            VAR_5->stale = 0;
            FUNC_3(VAR_8, (ff_parse_key_val_cb) VAR_2,
                               VAR_5);
        } else if (FUNC_1(VAR_7, "Digest ", &VAR_8) &&
                   VAR_5->auth_type <= VAR_1) {
            VAR_5->auth_type = VAR_1;
            FUNC_4(&VAR_5->digest_params, 0, sizeof(DigestParams));
            VAR_5->realm[0] = 0;
            VAR_5->stale = 0;
            FUNC_3(VAR_8, (ff_parse_key_val_cb) VAR_3,
                               VAR_5);
            FUNC_2(VAR_5->digest_params.qop,
                       sizeof(VAR_5->digest_params.qop));
            if (!FUNC_0(VAR_5->digest_params.stale, "true"))
                VAR_5->stale = 1;
        }
    } else if (!FUNC_0(VAR_6, "Authentication-Info")) {
        FUNC_3(VAR_7, (ff_parse_key_val_cb) VAR_4,
                           VAR_5);
    }
}
