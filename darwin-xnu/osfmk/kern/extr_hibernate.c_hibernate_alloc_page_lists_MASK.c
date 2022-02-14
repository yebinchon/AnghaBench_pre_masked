
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_7__ {int list_size; } ;
typedef TYPE_1__ hibernate_page_list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

kern_return_t
FUNC_2(
  hibernate_page_list_t ** VAR_4,
  hibernate_page_list_t ** VAR_5,
  hibernate_page_list_t ** VAR_6)
{
    kern_return_t VAR_7 = VAR_2;

    hibernate_page_list_t * VAR_8 = ((void*)0);
    hibernate_page_list_t * VAR_9 = ((void*)0);
    hibernate_page_list_t * VAR_10 = ((void*)0);

    VAR_8 = FUNC_0(VAR_3);
    if (!VAR_8) {

     VAR_7 = VAR_1;
     goto done;
    }
    VAR_9 = FUNC_0(VAR_0);
    if (!VAR_9)
    {
     FUNC_1(VAR_8, VAR_8->list_size);

     VAR_7 = VAR_1;
     goto done;
    }
    VAR_10 = FUNC_0(VAR_0);
    if (!VAR_10)
    {
     FUNC_1(VAR_8, VAR_8->list_size);
     FUNC_1(VAR_9, VAR_9->list_size);

     VAR_7 = VAR_1;
     goto done;
    }
    *VAR_4 = VAR_8;
    *VAR_5 = VAR_9;
    *VAR_6 = VAR_10;

done:
    return (VAR_7);

}
