
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (char*,size_t,char*,char const*,int,int,int) ;

__attribute__((used)) static void FUNC_2(char *VAR_1, size_t VAR_2)
{
    uint8_t VAR_3[6];
    const char *VAR_4 = "PROV_";
    FUNC_0(VAR_0, VAR_3);
    FUNC_1(VAR_1, VAR_2, "%s%02X%02X%02X",
             VAR_4, VAR_3[3], VAR_3[4], VAR_3[5]);
}
