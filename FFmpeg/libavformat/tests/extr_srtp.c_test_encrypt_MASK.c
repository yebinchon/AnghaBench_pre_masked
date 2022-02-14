
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct SRTPContext {int member_0; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct SRTPContext*,char*,int*) ;
 int FUNC_1 (struct SRTPContext*,int const*,int,char*,int) ;
 int FUNC_2 (struct SRTPContext*) ;
 int FUNC_3 (struct SRTPContext*,char const*,char const*) ;
 int FUNC_4 (char*,int const*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(const uint8_t *VAR_1, int VAR_2, const char *VAR_3,
                         const char *VAR_4)
{
    struct SRTPContext VAR_5 = { 0 }, VAR_6 = { 0 };
    int VAR_7;
    char VAR_8[VAR_0];
    FUNC_3(&VAR_5, VAR_3, VAR_4);
    FUNC_3(&VAR_6, VAR_3, VAR_4);
    VAR_7 = FUNC_1(&VAR_5, VAR_1, VAR_2, VAR_8, sizeof(VAR_8));
    if (!FUNC_0(&VAR_6, VAR_8, &VAR_7)) {
        if (VAR_7 == VAR_2 && !FUNC_4(VAR_8, VAR_1, VAR_7))
            FUNC_5("Decrypted content matches input\n");
        else
            FUNC_5("Decrypted content doesn't match input\n");
    } else {
        FUNC_5("Decryption failed\n");
    }
    FUNC_2(&VAR_5);
    FUNC_2(&VAR_6);
}
