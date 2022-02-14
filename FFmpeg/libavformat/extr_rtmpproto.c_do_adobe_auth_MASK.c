
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct AVMD5 {int dummy; } ;
typedef int hashstr ;
typedef int hash ;
typedef int challenge2 ;
struct TYPE_3__ {char* password; int auth_params; } ;
typedef TYPE_1__ RTMPContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int *,int) ;
 int FUNC_3 (struct AVMD5*) ;
 int FUNC_4 () ;
 struct AVMD5* FUNC_5 () ;
 int FUNC_6 (struct AVMD5*,int *) ;
 int FUNC_7 (struct AVMD5*) ;
 int FUNC_8 (struct AVMD5*,char const*,int ) ;
 int FUNC_9 (int ,int,char*,char const*) ;
 int FUNC_10 (char*,int,char*,...) ;
 int FUNC_11 (char const*) ;

__attribute__((used)) static int FUNC_12(RTMPContext *VAR_1, const char *VAR_2, const char *VAR_3,
                         const char *VAR_4, const char *VAR_5)
{
    uint8_t VAR_6[16];
    char VAR_7[FUNC_1(sizeof(VAR_6))], VAR_8[10];
    struct AVMD5 *VAR_9 = FUNC_5();
    if (!VAR_9)
        return FUNC_0(VAR_0);

    FUNC_10(VAR_8, sizeof(VAR_8), "%08x", FUNC_4());

    FUNC_7(VAR_9);
    FUNC_8(VAR_9, VAR_2, FUNC_11(VAR_2));
    FUNC_8(VAR_9, VAR_3, FUNC_11(VAR_3));
    FUNC_8(VAR_9, VAR_1->password, FUNC_11(VAR_1->password));
    FUNC_6(VAR_9, VAR_6);
    FUNC_2(VAR_7, sizeof(VAR_7), VAR_6,
                     sizeof(VAR_6));
    FUNC_7(VAR_9);
    FUNC_8(VAR_9, VAR_7, FUNC_11(VAR_7));
    if (VAR_4)
        FUNC_8(VAR_9, VAR_4, FUNC_11(VAR_4));
    else if (VAR_5)
        FUNC_8(VAR_9, VAR_5, FUNC_11(VAR_5));
    FUNC_8(VAR_9, VAR_8, FUNC_11(VAR_8));
    FUNC_6(VAR_9, VAR_6);
    FUNC_2(VAR_7, sizeof(VAR_7), VAR_6,
                     sizeof(VAR_6));
    FUNC_10(VAR_1->auth_params, sizeof(VAR_1->auth_params),
             "?authmod=%s&user=%s&challenge=%s&response=%s",
             "adobe", VAR_2, VAR_8, VAR_7);
    if (VAR_4)
        FUNC_9(VAR_1->auth_params, sizeof(VAR_1->auth_params),
                    "&opaque=%s", VAR_4);

    FUNC_3(VAR_9);
    return 0;
}
