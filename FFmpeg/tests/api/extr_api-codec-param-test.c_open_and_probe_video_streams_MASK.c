
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,char const*) ;
 int FUNC_1 (int **,char const*,int *,int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVFormatContext **VAR_1, const char *VAR_2, int VAR_3)
{
    int VAR_4 = 0;

    VAR_4 = FUNC_1(VAR_1, VAR_2, ((void*)0), ((void*)0));
    if (VAR_4 < 0) {
        FUNC_0(((void*)0), VAR_0, "Failed to open input '%s'", VAR_2);
        goto end;
    }

    VAR_4 = FUNC_3(*VAR_1, VAR_3);
    if (VAR_4 < 0) {
        goto end;
    }

    FUNC_2(*VAR_1, VAR_3);

end:
    return VAR_4;
}
