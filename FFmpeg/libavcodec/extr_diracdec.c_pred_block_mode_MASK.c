
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ref; } ;
typedef TYPE_1__ DiracBlock ;



__attribute__((used)) static inline int FUNC_0(DiracBlock *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;

    if (!(VAR_2|VAR_3))
        return 0;
    else if (!VAR_3)
        return VAR_0[-1].ref & VAR_4;
    else if (!VAR_2)
        return VAR_0[-VAR_1].ref & VAR_4;


    VAR_5 = (VAR_0[-1].ref & VAR_4) + (VAR_0[-VAR_1].ref & VAR_4) + (VAR_0[-VAR_1-1].ref & VAR_4);
    return (VAR_5 >> 1) & VAR_4;
}
