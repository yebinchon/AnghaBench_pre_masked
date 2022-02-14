
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct AVMD5 {int dummy; } ;
typedef int cnonce ;
struct TYPE_3__ {char* password; char* app; int auth_params; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct AVMD5*) ;
 int FUNC_2 () ;
 struct AVMD5* FUNC_3 () ;
 int FUNC_4 (struct AVMD5*,int *) ;
 int FUNC_5 (struct AVMD5*) ;
 int FUNC_6 (struct AVMD5*,char const*,int) ;
 int FUNC_7 (char*,int *,int,int) ;
 int FUNC_8 (char*,int,char*,...) ;
 int FUNC_9 (char*,char) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(RTMPContext *VAR_1, const char *VAR_2, const char *VAR_3)
{
    uint8_t VAR_4[16];
    char VAR_5[33], VAR_6[33];
    const char *VAR_7 = "live";
    const char *VAR_8 = "publish";
    const char *VAR_9 = "auth";
    const char *VAR_10 = "00000001";
    char VAR_11[10];
    struct AVMD5 *VAR_12 = FUNC_3();
    if (!VAR_12)
        return FUNC_0(VAR_0);

    FUNC_8(VAR_11, sizeof(VAR_11), "%08x", FUNC_2());

    FUNC_5(VAR_12);
    FUNC_6(VAR_12, VAR_2, FUNC_10(VAR_2));
    FUNC_6(VAR_12, ":", 1);
    FUNC_6(VAR_12, VAR_7, FUNC_10(VAR_7));
    FUNC_6(VAR_12, ":", 1);
    FUNC_6(VAR_12, VAR_1->password, FUNC_10(VAR_1->password));
    FUNC_4(VAR_12, VAR_4);
    FUNC_7(VAR_5, VAR_4, 16, 1);
    VAR_5[32] = '\0';

    FUNC_5(VAR_12);
    FUNC_6(VAR_12, VAR_8, FUNC_10(VAR_8));
    FUNC_6(VAR_12, ":/", 2);
    FUNC_6(VAR_12, VAR_1->app, FUNC_10(VAR_1->app));
    if (!FUNC_9(VAR_1->app, '/'))
        FUNC_6(VAR_12, "/_definst_", FUNC_10("/_definst_"));
    FUNC_4(VAR_12, VAR_4);
    FUNC_7(VAR_6, VAR_4, 16, 1);
    VAR_6[32] = '\0';

    FUNC_5(VAR_12);
    FUNC_6(VAR_12, VAR_5, FUNC_10(VAR_5));
    FUNC_6(VAR_12, ":", 1);
    if (VAR_3)
        FUNC_6(VAR_12, VAR_3, FUNC_10(VAR_3));
    FUNC_6(VAR_12, ":", 1);
    FUNC_6(VAR_12, VAR_10, FUNC_10(VAR_10));
    FUNC_6(VAR_12, ":", 1);
    FUNC_6(VAR_12, VAR_11, FUNC_10(VAR_11));
    FUNC_6(VAR_12, ":", 1);
    FUNC_6(VAR_12, VAR_9, FUNC_10(VAR_9));
    FUNC_6(VAR_12, ":", 1);
    FUNC_6(VAR_12, VAR_6, FUNC_10(VAR_6));
    FUNC_4(VAR_12, VAR_4);
    FUNC_7(VAR_5, VAR_4, 16, 1);

    FUNC_8(VAR_1->auth_params, sizeof(VAR_1->auth_params),
             "?authmod=%s&user=%s&nonce=%s&cnonce=%s&nc=%s&response=%s",
             "llnw", VAR_2, VAR_3, VAR_11, VAR_10, VAR_5);

    FUNC_1(VAR_12);
    return 0;
}
