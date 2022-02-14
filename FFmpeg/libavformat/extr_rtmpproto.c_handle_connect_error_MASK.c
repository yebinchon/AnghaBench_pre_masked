
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buf ;
typedef int authmod ;
struct TYPE_7__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_8__ {char* username; int auth_tried; char* auth_params; int * password; } ;
typedef TYPE_2__ RTMPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ,char*,...) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (TYPE_2__*,char const*,char const*,char const*,char const*) ;
 int FUNC_3 (TYPE_2__*,char const*,char const*) ;
 int FUNC_4 (char*,int,char*,char*,char*) ;
 char* FUNC_5 (char*,char) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char const*,char*) ;

__attribute__((used)) static int FUNC_9(URLContext *VAR_4, const char *VAR_5)
{
    RTMPContext *VAR_6 = VAR_4->priv_data;
    char VAR_7[300], *VAR_8, VAR_9[15];
    int VAR_10 = 0, VAR_11 = 0;
    const char *VAR_12 = "", *VAR_13 = "", *VAR_14 = ((void*)0),
               *VAR_15 = ((void*)0), *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);

    if (!(VAR_16 = FUNC_8(VAR_5, "authmod=adobe")) &&
        !(VAR_16 = FUNC_8(VAR_5, "authmod=llnw"))) {
        FUNC_0(VAR_4, VAR_1,
               "Unknown connect error (unsupported authentication method?)\n");
        return VAR_0;
    }
    VAR_16 += FUNC_7("authmod=");
    while (*VAR_16 && *VAR_16 != ' ' && VAR_10 < sizeof(VAR_9) - 1)
        VAR_9[VAR_10++] = *VAR_16++;
    VAR_9[VAR_10] = '\0';

    if (!VAR_6->username[0] || !VAR_6->password[0]) {
        FUNC_0(VAR_4, VAR_1, "No credentials set\n");
        return VAR_0;
    }

    if (FUNC_8(VAR_5, "?reason=authfailed")) {
        FUNC_0(VAR_4, VAR_1, "Incorrect username/password\n");
        return VAR_0;
    } else if (FUNC_8(VAR_5, "?reason=nosuchuser")) {
        FUNC_0(VAR_4, VAR_1, "Incorrect username\n");
        return VAR_0;
    }

    if (VAR_6->auth_tried) {
        FUNC_0(VAR_4, VAR_1, "Authentication failed\n");
        return VAR_0;
    }

    VAR_6->auth_params[0] = '\0';

    if (FUNC_8(VAR_5, "code=403 need auth")) {
        FUNC_4(VAR_6->auth_params, sizeof(VAR_6->auth_params),
                 "?authmod=%s&user=%s", VAR_9, VAR_6->username);
        return 0;
    }

    if (!(VAR_16 = FUNC_8(VAR_5, "?reason=needauth"))) {
        FUNC_0(VAR_4, VAR_1, "No auth parameters found\n");
        return VAR_0;
    }

    FUNC_1(VAR_7, VAR_16 + 1, sizeof(VAR_7));
    VAR_8 = VAR_7;

    while (VAR_8) {
        char *VAR_18 = FUNC_5(VAR_8, '&');
        char *VAR_19 = FUNC_5(VAR_8, '=');
        if (VAR_18)
            *VAR_18++ = '\0';
        if (VAR_19) {
            *VAR_19++ = '\0';
            if (!FUNC_6(VAR_8, "user")) {
                VAR_12 = VAR_19;
            } else if (!FUNC_6(VAR_8, "salt")) {
                VAR_13 = VAR_19;
            } else if (!FUNC_6(VAR_8, "opaque")) {
                VAR_14 = VAR_19;
            } else if (!FUNC_6(VAR_8, "challenge")) {
                VAR_15 = VAR_19;
            } else if (!FUNC_6(VAR_8, "nonce")) {
                VAR_17 = VAR_19;
            } else {
                FUNC_0(VAR_4, VAR_2, "Ignoring unsupported var %s\n", VAR_8);
            }
        } else {
            FUNC_0(VAR_4, VAR_3, "Variable %s has NULL value\n", VAR_8);
        }
        VAR_8 = VAR_18;
    }

    if (!FUNC_6(VAR_9, "adobe")) {
        if ((VAR_11 = FUNC_2(VAR_6, VAR_12, VAR_13, VAR_14, VAR_15)) < 0)
            return VAR_11;
    } else {
        if ((VAR_11 = FUNC_3(VAR_6, VAR_12, VAR_17)) < 0)
            return VAR_11;
    }

    VAR_6->auth_tried = 1;
    return 0;
}
