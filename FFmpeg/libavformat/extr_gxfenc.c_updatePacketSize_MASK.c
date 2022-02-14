
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static int64_t FUNC_4(AVIOContext *VAR_1, int64_t VAR_2)
{
    int64_t VAR_3;
    int VAR_4;

    VAR_4 = FUNC_1(VAR_1) - VAR_2;
    if (VAR_4 % 4) {
        FUNC_3(VAR_1, 4 - VAR_4 % 4);
        VAR_4 = FUNC_1(VAR_1) - VAR_2;
    }
    VAR_3 = FUNC_1(VAR_1);
    FUNC_0(VAR_1, VAR_2 + 6, VAR_0);
    FUNC_2(VAR_1, VAR_4);
    FUNC_0(VAR_1, VAR_3, VAR_0);
    return VAR_3 - VAR_2;
}
