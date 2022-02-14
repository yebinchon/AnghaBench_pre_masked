
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int key2 ;
typedef int AVDictionary ;


 int FUNC_0 (int **,int *,int *,int ) ;
 int FUNC_1 (int *,int,char const*,...) ;

__attribute__((used)) static void FUNC_2(AVDictionary **VAR_0, int VAR_1, const char *VAR_2,
                     const char *VAR_3, double VAR_4)
{
    uint8_t VAR_5[128];
    uint8_t VAR_6[128];

    FUNC_1(VAR_5, sizeof(VAR_5), VAR_3, VAR_4);
    if (VAR_1)
        FUNC_1(VAR_6, sizeof(VAR_6), "lavfi.astats.%d.%s", VAR_1, VAR_2);
    else
        FUNC_1(VAR_6, sizeof(VAR_6), "lavfi.astats.%s", VAR_2);
    FUNC_0(VAR_0, VAR_6, VAR_5, 0);
}
