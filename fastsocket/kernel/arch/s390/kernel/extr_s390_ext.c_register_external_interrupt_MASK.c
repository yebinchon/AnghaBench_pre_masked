
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
 int VAR_1 ;
 int FUNC_0 (int ) ;
 TYPE_1__** VAR_2 ;
 TYPE_1__* FUNC_1 (int,int ) ;

int FUNC_2(__u16 VAR_3, ext_int_handler_t VAR_4)
{
        ext_int_info_t *VAR_5;
        int VAR_6;

 VAR_5 = FUNC_1(sizeof(ext_int_info_t), VAR_1);
        if (VAR_5 == ((void*)0))
                return -VAR_0;
        VAR_5->code = VAR_3;
        VAR_5->handler = VAR_4;
 VAR_6 = FUNC_0(VAR_3);
        VAR_5->next = VAR_2[VAR_6];
        VAR_2[VAR_6] = VAR_5;
        return 0;
}
