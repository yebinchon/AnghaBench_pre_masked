
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,char*,char const*,int ) ;
 int FUNC_2 (int **,char const*,int ,int *,int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, const char *VAR_5, const char *VAR_6)
{
    AVIOContext *VAR_7 = ((void*)0);
    int VAR_8;

    if (!FUNC_3(VAR_6, "-"))
        VAR_6 = "pipe:";
    VAR_8 = FUNC_2(&VAR_7, VAR_6, VAR_0, &VAR_2, ((void*)0));
    if (VAR_8 < 0) {
        FUNC_1(((void*)0), VAR_1, "Failed to open progress URL \"%s\": %s\n",
               VAR_6, FUNC_0(VAR_8));
        return VAR_8;
    }
    VAR_3 = VAR_7;
    return 0;
}
