
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,void*,int ,int) ;

bool FUNC_1(uint32_t VAR_7, void *VAR_8, uint32_t VAR_9)
{
    bool VAR_10 = 0;

    switch (VAR_7) {
        case 128:
            VAR_10 = FUNC_0(VAR_6, VAR_5, VAR_8, 0, VAR_9);
            break;
        case 131:
            VAR_10 = FUNC_0(VAR_6, VAR_3, VAR_8, 0, VAR_9);
            break;
        case 132:
        case 129:
            VAR_10 = FUNC_0(VAR_6, VAR_2, VAR_8, 0, VAR_9);
            break;
        case 130:
            VAR_10 = FUNC_0(VAR_6, VAR_4, VAR_8, 0, VAR_9);
            break;
        default:
            break;
    }

    return VAR_10;
}
