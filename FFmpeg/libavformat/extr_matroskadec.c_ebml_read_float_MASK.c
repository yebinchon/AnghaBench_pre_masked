
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (int ) ;
 double FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVIOContext *VAR_2, int VAR_3, double *VAR_4)
{
    if (VAR_3 == 0)
        *VAR_4 = 0;
    else if (VAR_3 == 4)
        *VAR_4 = FUNC_1(FUNC_2(VAR_2));
    else if (VAR_3 == 8)
        *VAR_4 = FUNC_0(FUNC_3(VAR_2));
    else
        return VAR_0;

    return VAR_1;
}
