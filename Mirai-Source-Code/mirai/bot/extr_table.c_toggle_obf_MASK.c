
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
struct table_value {int val_len; size_t* val; int locked; } ;


 struct table_value* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(uint8_t VAR_2)
{
    int VAR_3;
    struct table_value *VAR_4 = &VAR_0[VAR_2];
    uint8_t VAR_5 = VAR_1 & 0xff,
            VAR_6 = (VAR_1 >> 8) & 0xff,
            VAR_7 = (VAR_1 >> 16) & 0xff,
            VAR_8 = (VAR_1 >> 24) & 0xff;

    for (VAR_3 = 0; VAR_3 < VAR_4->val_len; VAR_3++)
    {
        VAR_4->val[VAR_3] ^= VAR_5;
        VAR_4->val[VAR_3] ^= VAR_6;
        VAR_4->val[VAR_3] ^= VAR_7;
        VAR_4->val[VAR_3] ^= VAR_8;
    }




}
