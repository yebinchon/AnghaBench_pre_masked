
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int group_sf ;
struct TYPE_4__ {int framenum; } ;
typedef TYPE_1__ DCALbrDecoder ;


 int FUNC_0 (TYPE_1__*,int,float*,int,int,int) ;

__attribute__((used)) static void FUNC_1(DCALbrDecoder *VAR_0, int VAR_1, float *VAR_2, int VAR_3)
{
    int VAR_4;


    for (VAR_4 = 0; VAR_4 < 5; VAR_4++) {
        int VAR_5 = (VAR_0->framenum << VAR_4) + ((VAR_3 - 22) >> (5 - VAR_4));
        int VAR_6 = ((((VAR_3 - 22) & 31) << VAR_4) & 31) + (1 << VAR_4) - 1;

        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, (VAR_5 - 1) & 31, 30 - VAR_6);
        FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, (VAR_5 ) & 31, VAR_6);
    }
}
