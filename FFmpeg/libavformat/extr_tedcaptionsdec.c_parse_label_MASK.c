
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;
typedef int AVBPrint ;


 int FUNC_0 (int *,int*,char) ;
 int FUNC_1 (int *,int*,int *,int ) ;

__attribute__((used)) static int FUNC_2(AVIOContext *VAR_0, int *VAR_1, AVBPrint *VAR_2)
{
    int VAR_3;

    VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, 0);
    if (VAR_3 < 0)
        return VAR_3;
    VAR_3 = FUNC_0(VAR_0, VAR_1, ':');
    if (VAR_3 < 0)
        return VAR_3;
    return 0;
}
