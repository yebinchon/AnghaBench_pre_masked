
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ AudioChannelLabel ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_1(AudioChannelLabel VAR_12)
{
    if (VAR_12 == 0)
        return -1;
    else if (VAR_12 <= VAR_4)
        return VAR_12 - 1;
    else if (VAR_12 <= VAR_8)
        return VAR_12 + 4;
    else if (VAR_12 <= VAR_2)
        return VAR_12 + 1;
    else if (VAR_12 <= VAR_9)
        return VAR_12 + 23;
    else if (VAR_12 <= VAR_11)
        return VAR_12 - 1;
    else if (VAR_12 < VAR_6)
        return -1;
    else if (VAR_12 <= VAR_7)
        return VAR_12 - 29;
    else if (VAR_12 <= VAR_10)
        return VAR_12 - 4;
    else if (VAR_12 == VAR_3)
        return FUNC_0(VAR_1);
    else if (VAR_12 == VAR_5)
        return FUNC_0(VAR_0);
    else
        return -1;
}
