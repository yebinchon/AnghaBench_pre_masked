
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LayerPadModeParam ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(int VAR_2, int VAR_3, LayerPadModeParam VAR_4)
{
    if (VAR_4 == VAR_1) {
        return (2 * VAR_3 - 1 - VAR_2);
    } else if (VAR_4 == VAR_0) {
        return (2 * VAR_3 - VAR_2);
    } else {
        FUNC_0(!"should not reach here");
        return 0;
    }
}
