
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {double tv_sec; double tv_usec; } ;
struct TYPE_3__ {double tv_sec; double tv_usec; } ;


 int FUNC_0 (int ,char*,float,float,float) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_1(void)
{
    float VAR_4 = VAR_3.tv_sec + VAR_3.tv_usec / 1000000.0;
    float VAR_5 = VAR_2.tv_sec + VAR_2.tv_usec / 1000000.0;
    float VAR_6 = VAR_5 - VAR_4;
    float VAR_7 = VAR_1 * 8 / VAR_6 / 1000.0;
    FUNC_0(VAR_0, "speed(%fs ~ %fs): %f kbit/s" , VAR_4, VAR_5, VAR_7);
    VAR_1 = 0;
    VAR_3.tv_sec = VAR_2.tv_sec;
    VAR_3.tv_usec = VAR_2.tv_usec;
}
