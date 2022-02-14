
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int URLContext ;
typedef int RTMPPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int,int **,int*,int ) ;

int FUNC_3(URLContext *VAR_2, RTMPPacket *VAR_3, int VAR_4,
                                 RTMPPacket **VAR_5, int *VAR_6,
                                 uint8_t VAR_7)
{
    while (1) {
        int VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5,
                                             VAR_6, VAR_7);
        if (VAR_8 > 0 || VAR_8 != FUNC_0(VAR_0))
            return VAR_8;

        if (FUNC_1(VAR_2, &VAR_7, 1) != 1)
            return FUNC_0(VAR_1);
    }
}
