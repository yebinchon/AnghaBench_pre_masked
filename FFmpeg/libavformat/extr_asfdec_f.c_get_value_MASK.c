
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(AVIOContext *VAR_1, int VAR_2, int VAR_3)
{
    switch (VAR_2) {
    case 2:
        return (VAR_3 == 32) ? FUNC_1(VAR_1) : FUNC_0(VAR_1);
    case 3:
        return FUNC_1(VAR_1);
    case 4:
        return FUNC_2(VAR_1);
    case 5:
        return FUNC_0(VAR_1);
    default:
        return VAR_0;
    }
}
