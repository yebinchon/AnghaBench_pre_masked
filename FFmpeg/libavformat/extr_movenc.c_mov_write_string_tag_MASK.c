
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,int,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(AVIOContext *VAR_0, const char *VAR_1,
                                const char *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = 0;
    if (VAR_2 && VAR_2[0]) {
        int64_t VAR_6 = FUNC_0(VAR_0);
        FUNC_1(VAR_0, 0);
        FUNC_2(VAR_0, VAR_1);
        FUNC_3(VAR_0, VAR_2, VAR_3, VAR_4);
        VAR_5 = FUNC_4(VAR_0, VAR_6);
    }
    return VAR_5;
}
