
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int slice_buffer ;
typedef int DWTCompose ;




 int FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int *,int *,int,int) ;

void FUNC_2(DWTCompose *VAR_0, slice_buffer *VAR_1, int VAR_2,
                                   int VAR_3, int VAR_4, int VAR_5,
                                   int VAR_6)
{
    int VAR_7;
    for (VAR_7 = VAR_6 - 1; VAR_7 >= 0; VAR_7--) {
        switch (VAR_5) {
        case 128:
            FUNC_1(VAR_0 + VAR_7, VAR_1, VAR_3 >> VAR_7,
                                             VAR_4 << VAR_7);
            break;
        case 129:
            FUNC_0(VAR_0 + VAR_7, VAR_1, VAR_3 >> VAR_7,
                                             VAR_4 << VAR_7);
            break;
        }
    }
}
