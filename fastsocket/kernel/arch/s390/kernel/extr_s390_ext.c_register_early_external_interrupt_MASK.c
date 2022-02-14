
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; int handler; int code; } ;
typedef TYPE_1__ ext_int_info_t ;
typedef int ext_int_handler_t ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__** VAR_1 ;

int FUNC_1(__u16 VAR_2, ext_int_handler_t VAR_3,
          ext_int_info_t *VAR_4)
{
        int VAR_5;

        if (VAR_4 == ((void*)0))
                return -VAR_0;
        VAR_4->code = VAR_2;
        VAR_4->handler = VAR_3;
 VAR_5 = FUNC_0(VAR_2);
        VAR_4->next = VAR_1[VAR_5];
        VAR_1[VAR_5] = VAR_4;
        return 0;
}
