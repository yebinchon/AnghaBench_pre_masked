
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_value {char* val; scalar_t__ val_len; scalar_t__ locked; } ;


 int FUNC_0 (char*,int) ;
 struct table_value* VAR_0 ;

char *FUNC_1(int VAR_1, int *VAR_2)
{
    struct table_value *VAR_3 = &VAR_0[VAR_1];
    if (VAR_2 != ((void*)0))
        *VAR_2 = (int)VAR_3->val_len;
    return VAR_3->val;
}
