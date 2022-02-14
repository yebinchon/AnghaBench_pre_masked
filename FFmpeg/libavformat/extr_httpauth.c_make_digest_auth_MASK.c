
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
typedef int uint32_t ;
struct AVMD5 {int dummy; } ;
typedef int nc ;
typedef int cnonce_buf ;
struct TYPE_5__ {int nc; char* algorithm; char* nonce; char* qop; char* opaque; } ;
struct TYPE_4__ {char* realm; TYPE_2__ digest_params; } ;
typedef TYPE_1__ HTTPAuthState ;
typedef TYPE_2__ DigestParams ;


 int FUNC_0 (struct AVMD5*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int) ;
 struct AVMD5* FUNC_3 () ;
 int FUNC_4 (struct AVMD5*,int const*) ;
 int FUNC_5 (struct AVMD5*) ;
 int FUNC_6 (char*,int,char*,...) ;
 int FUNC_7 (char*,int const*,int,int) ;
 int FUNC_8 (char*,int,char*,...) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct AVMD5*,char const*,char*,char const*,...) ;

__attribute__((used)) static char *FUNC_12(HTTPAuthState *VAR_0, const char *VAR_1,
                              const char *VAR_2, const char *VAR_3,
                              const char *VAR_4)
{
    DigestParams *VAR_5 = &VAR_0->digest_params;
    int VAR_6;
    uint32_t VAR_7[2];
    char VAR_8[17];
    char VAR_9[9];
    int VAR_10;
    char VAR_11[33], VAR_12[33], VAR_13[33];
    struct AVMD5 *VAR_14;
    uint8_t VAR_15[16];
    char *VAR_16;

    VAR_5->nc++;
    FUNC_8(VAR_9, sizeof(VAR_9), "%08x", VAR_5->nc);


    for (VAR_10 = 0; VAR_10 < 2; VAR_10++)
        VAR_7[VAR_10] = FUNC_1();
    FUNC_7(VAR_8, (const uint8_t*) VAR_7, sizeof(VAR_7), 1);
    VAR_8[2*sizeof(VAR_7)] = 0;

    VAR_14 = FUNC_3();
    if (!VAR_14)
        return ((void*)0);

    FUNC_5(VAR_14);
    FUNC_11(VAR_14, VAR_1, ":", VAR_0->realm, ":", VAR_2, ((void*)0));
    FUNC_4(VAR_14, VAR_15);
    FUNC_7(VAR_11, VAR_15, 16, 1);
    VAR_11[32] = 0;

    if (!FUNC_9(VAR_5->algorithm, "") || !FUNC_9(VAR_5->algorithm, "MD5")) {
    } else if (!FUNC_9(VAR_5->algorithm, "MD5-sess")) {
        FUNC_5(VAR_14);
        FUNC_11(VAR_14, VAR_11, ":", VAR_5->nonce, ":", VAR_8, ((void*)0));
        FUNC_4(VAR_14, VAR_15);
        FUNC_7(VAR_11, VAR_15, 16, 1);
        VAR_11[32] = 0;
    } else {

        FUNC_0(VAR_14);
        return ((void*)0);
    }

    FUNC_5(VAR_14);
    FUNC_11(VAR_14, VAR_4, ":", VAR_3, ((void*)0));
    FUNC_4(VAR_14, VAR_15);
    FUNC_7(VAR_12, VAR_15, 16, 1);
    VAR_12[32] = 0;

    FUNC_5(VAR_14);
    FUNC_11(VAR_14, VAR_11, ":", VAR_5->nonce, ((void*)0));
    if (!FUNC_9(VAR_5->qop, "auth") || !FUNC_9(VAR_5->qop, "auth-int")) {
        FUNC_11(VAR_14, ":", VAR_9, ":", VAR_8, ":", VAR_5->qop, ((void*)0));
    }
    FUNC_11(VAR_14, ":", VAR_12, ((void*)0));
    FUNC_4(VAR_14, VAR_15);
    FUNC_7(VAR_13, VAR_15, 16, 1);
    VAR_13[32] = 0;

    FUNC_0(VAR_14);

    if (!FUNC_9(VAR_5->qop, "") || !FUNC_9(VAR_5->qop, "auth")) {
    } else if (!FUNC_9(VAR_5->qop, "auth-int")) {

        return ((void*)0);
    } else {

        return ((void*)0);
    }

    VAR_6 = FUNC_10(VAR_1) + FUNC_10(VAR_0->realm) + FUNC_10(VAR_5->nonce) +
              FUNC_10(VAR_3) + FUNC_10(VAR_13) + FUNC_10(VAR_5->algorithm) +
              FUNC_10(VAR_5->opaque) + FUNC_10(VAR_5->qop) + FUNC_10(VAR_8) +
              FUNC_10(VAR_9) + 150;

    VAR_16 = FUNC_2(VAR_6);
    if (!VAR_16)
        return ((void*)0);
    FUNC_8(VAR_16, VAR_6, "Authorization: Digest ");


    FUNC_6(VAR_16, VAR_6, "username=\"%s\"", VAR_1);
    FUNC_6(VAR_16, VAR_6, ", realm=\"%s\"", VAR_0->realm);
    FUNC_6(VAR_16, VAR_6, ", nonce=\"%s\"", VAR_5->nonce);
    FUNC_6(VAR_16, VAR_6, ", uri=\"%s\"", VAR_3);
    FUNC_6(VAR_16, VAR_6, ", response=\"%s\"", VAR_13);


    if (VAR_5->algorithm[0])
        FUNC_6(VAR_16, VAR_6, ", algorithm=\"%s\"", VAR_5->algorithm);

    if (VAR_5->opaque[0])
        FUNC_6(VAR_16, VAR_6, ", opaque=\"%s\"", VAR_5->opaque);
    if (VAR_5->qop[0]) {
        FUNC_6(VAR_16, VAR_6, ", qop=\"%s\"", VAR_5->qop);
        FUNC_6(VAR_16, VAR_6, ", cnonce=\"%s\"", VAR_8);
        FUNC_6(VAR_16, VAR_6, ", nc=%s", VAR_9);
    }

    FUNC_6(VAR_16, VAR_6, "\r\n");

    return VAR_16;
}
