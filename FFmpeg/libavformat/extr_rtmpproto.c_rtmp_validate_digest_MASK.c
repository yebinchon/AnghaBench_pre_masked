
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int ,int ,int *) ;
 int FUNC_1 (int *,int,int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_3, int VAR_4)
{
    uint8_t VAR_5[32];
    int VAR_6, VAR_7;

    VAR_7 = FUNC_1(VAR_3, VAR_4, 728, VAR_4 + 4);

    VAR_6 = FUNC_0(VAR_3, VAR_0, VAR_7,
                              VAR_2, VAR_1,
                              VAR_5);
    if (VAR_6 < 0)
        return VAR_6;

    if (!FUNC_2(VAR_5, VAR_3 + VAR_7, 32))
        return VAR_7;
    return 0;
}
