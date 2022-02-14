
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {unsigned int fps; int flags; scalar_t__ start; } ;
typedef TYPE_1__ AVTimecode ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned int) ;

uint32_t FUNC_1(const AVTimecode *VAR_1, int VAR_2)
{
    unsigned VAR_3 = VAR_1->fps;
    int VAR_4 = !!(VAR_1->flags & VAR_0);
    int VAR_5, VAR_6, VAR_7, VAR_8;

    VAR_2 += VAR_1->start;
    if (VAR_4)
        VAR_2 = FUNC_0(VAR_2, VAR_1->fps);
    VAR_8 = VAR_2 % VAR_3;
    VAR_7 = VAR_2 / VAR_3 % 60;
    VAR_6 = VAR_2 / (VAR_3*60) % 60;
    VAR_5 = VAR_2 / (VAR_3*3600) % 24;
    return 0 << 31 |
           VAR_4 << 30 |
           (VAR_8 / 10) << 28 |
           (VAR_8 % 10) << 24 |
           0 << 23 |
           (VAR_7 / 10) << 20 |
           (VAR_7 % 10) << 16 |
           0 << 15 |
           (VAR_6 / 10) << 12 |
           (VAR_6 % 10) << 8 |
           0 << 7 |
           0 << 6 |
           (VAR_5 / 10) << 4 |
           (VAR_5 % 10);
}
