
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int ,int ,int *) ;
 int FUNC_1 (int *,int,int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(uint8_t *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    if (VAR_4)
        VAR_6 = FUNC_1(VAR_3, 772, 728, 776);
    else
        VAR_6 = FUNC_1(VAR_3, 8, 728, 12);

    VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_6,
                              VAR_2, VAR_0,
                              VAR_3 + VAR_6);
    if (VAR_5 < 0)
        return VAR_5;

    return VAR_6;
}
