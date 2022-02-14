
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int connection; } ;
struct TYPE_4__ {TYPE_1__ mir; } ;
typedef scalar_t__ MirPixelFormat ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__*,unsigned int,unsigned int*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static MirPixelFormat FUNC_1(void)
{
    unsigned int VAR_7, VAR_8, VAR_9 = 32;
    MirPixelFormat VAR_10[VAR_6];

    FUNC_0(VAR_0.mir.connection, VAR_10,
                                                 VAR_9, &VAR_8);

    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
    {
        if (VAR_10[VAR_7] == VAR_1 ||
            VAR_10[VAR_7] == VAR_4 ||
            VAR_10[VAR_7] == VAR_2 ||
            VAR_10[VAR_7] == VAR_5)
        {
            return VAR_10[VAR_7];
        }
    }

    return VAR_3;
}
