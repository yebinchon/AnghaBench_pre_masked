
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char const*) ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char*) ;

int FUNC_12(void *VAR_2, const char *VAR_3, const char *VAR_4)
{
    char *VAR_5, *VAR_6;
    FUNC_2(VAR_1);

    VAR_5 = FUNC_3(VAR_4 ? VAR_4 : "");
    if (!VAR_5)
        return FUNC_0(VAR_0);
    VAR_6 = FUNC_10(VAR_5, '=');
    if (VAR_6)
        *VAR_6++ = 0;

    if (!*VAR_5) {
        FUNC_6(VAR_5, VAR_6);
    } else if (!FUNC_11(VAR_5, "decoder")) {
        FUNC_5(VAR_6, 0);
    } else if (!FUNC_11(VAR_5, "encoder")) {
        FUNC_5(VAR_6, 1);
    } else if (!FUNC_11(VAR_5, "demuxer")) {
        FUNC_7(VAR_6);
    } else if (!FUNC_11(VAR_5, "muxer")) {
        FUNC_9(VAR_6);




    } else if (!FUNC_11(VAR_5, "bsf")) {
        FUNC_4(VAR_6);
    } else {
        FUNC_6(VAR_5, VAR_6);
    }

    FUNC_1(&VAR_5);
    return 0;
}
