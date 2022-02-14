
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ IntMotionVector ;


 double VAR_0 ;
 double FUNC_0 (int,int) ;

__attribute__((used)) static double FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4, IntMotionVector *VAR_5)
{
    double VAR_6, VAR_7, VAR_8;

    VAR_6 = FUNC_0(VAR_2 - VAR_4, VAR_1 - VAR_3);
    VAR_7 = FUNC_0(VAR_2 - VAR_4 + VAR_5->y, VAR_1 - VAR_3 + VAR_5->x);

    VAR_8 = VAR_7 - VAR_6;

    return (VAR_8 > VAR_0) ? VAR_8 - 2 * VAR_0 :
           (VAR_8 < -VAR_0) ? VAR_8 + 2 * VAR_0 :
           VAR_8;
}
