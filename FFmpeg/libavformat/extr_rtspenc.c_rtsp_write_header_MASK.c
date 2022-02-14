
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVFormatContext *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2)
        return VAR_2;

    if (FUNC_3(VAR_1) < 0) {
        FUNC_1(VAR_1);
        FUNC_0(VAR_1);
        return VAR_0;
    }
    return 0;
}
