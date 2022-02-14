
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ code; scalar_t__ handler; struct TYPE_4__* next; } ;
typedef TYPE_1__ ext_int_info_t ;
typedef scalar_t__ ext_int_handler_t ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__** VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(__u16 VAR_2, ext_int_handler_t VAR_3)
{
        ext_int_info_t *VAR_4, *VAR_5;
        int VAR_6;

 VAR_6 = FUNC_0(VAR_2);
        VAR_5 = ((void*)0);
        VAR_4 = VAR_1[VAR_6];
        while (VAR_4 != ((void*)0)) {
                if (VAR_4->code == VAR_2 && VAR_4->handler == VAR_3)
                        break;
                VAR_5 = VAR_4;
                VAR_4 = VAR_4->next;
        }
        if (VAR_4 == ((void*)0))
                return -VAR_0;
        if (VAR_5 != ((void*)0))
                VAR_5->next = VAR_4->next;
        else
                VAR_1[VAR_6] = VAR_4->next;
 FUNC_1(VAR_4);
        return 0;
}
