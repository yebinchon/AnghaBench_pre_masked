
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int frame_u; int hour; int minute; int second; } ;
typedef TYPE_1__ dvd_time_t ;



__attribute__((used)) static int FUNC_0(dvd_time_t * VAR_0)
{
    double VAR_1[4] = {-1.0, 25.00, -1.0, 29.97};
    double VAR_2 = VAR_1[(VAR_0->frame_u & 0xc0) >> 6];
    long VAR_3;
    VAR_3 = (((VAR_0->hour & 0xf0) >> 3) * 5 + (VAR_0->hour & 0x0f)) * 3600000;
    VAR_3 += (((VAR_0->minute & 0xf0) >> 3) * 5 + (VAR_0->minute & 0x0f)) * 60000;
    VAR_3 += (((VAR_0->second & 0xf0) >> 3) * 5 + (VAR_0->second & 0x0f)) * 1000;

    if( VAR_2 > 0 )
    {
        VAR_3 += (((VAR_0->frame_u & 0x30) >> 3) * 5 +
                (VAR_0->frame_u & 0x0f)) * 1000.0 / VAR_2;
    }

    return VAR_3;
}
