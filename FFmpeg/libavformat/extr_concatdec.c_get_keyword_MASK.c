
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static char *FUNC_2(uint8_t **VAR_1)
{
    char *VAR_2 = *VAR_1 += FUNC_1(*VAR_1, VAR_0);
    *VAR_1 += FUNC_0(*VAR_1, VAR_0);
    if (**VAR_1) {
        *((*VAR_1)++) = 0;
        *VAR_1 += FUNC_1(*VAR_1, VAR_0);
    }
    return VAR_2;
}
