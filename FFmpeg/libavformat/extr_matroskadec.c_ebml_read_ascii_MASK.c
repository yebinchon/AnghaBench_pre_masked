
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_2, int VAR_3, char **VAR_4)
{
    char *VAR_5;
    int VAR_6;



    if (!(VAR_5 = FUNC_2(VAR_3 + 1)))
        return FUNC_0(VAR_0);
    if ((VAR_6 = FUNC_3(VAR_2, (uint8_t *) VAR_5, VAR_3)) != VAR_3) {
        FUNC_1(VAR_5);
        return VAR_6 < 0 ? VAR_6 : VAR_1;
    }
    (VAR_5)[VAR_3] = '\0';
    FUNC_1(*VAR_4);
    *VAR_4 = VAR_5;

    return 0;
}
