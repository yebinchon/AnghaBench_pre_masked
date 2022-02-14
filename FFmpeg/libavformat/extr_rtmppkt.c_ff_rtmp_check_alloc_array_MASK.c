
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RTMPPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,int) ;

int FUNC_3(RTMPPacket **VAR_1, int *VAR_2,
                              int VAR_3)
{
    int VAR_4;
    RTMPPacket *VAR_5;
    if (VAR_3 < *VAR_2)
        return 0;

    VAR_4 = VAR_3 + 16;



    VAR_5 = FUNC_1(*VAR_1, VAR_4, sizeof(**VAR_1));
    if (!VAR_5)
        return FUNC_0(VAR_0);
    FUNC_2(VAR_5 + *VAR_2, 0, (VAR_4 - *VAR_2) * sizeof(*VAR_5));
    *VAR_1 = VAR_5;
    *VAR_2 = VAR_4;
    return 0;
}
