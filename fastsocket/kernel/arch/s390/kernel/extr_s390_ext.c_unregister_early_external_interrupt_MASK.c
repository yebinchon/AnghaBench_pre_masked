
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
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__** VAR_2 ;

int FUNC_1(__u16 VAR_3, ext_int_handler_t VAR_4,
     ext_int_info_t *VAR_5)
{
 ext_int_info_t *VAR_6;
 int VAR_7;

 if (VAR_5 == ((void*)0) || VAR_5->code != VAR_3 || VAR_5->handler != VAR_4)
  return -VAR_0;
 VAR_7 = FUNC_0(VAR_3);
 VAR_6 = VAR_2[VAR_7];
 if (VAR_5 != VAR_6) {
  while (VAR_6 != ((void*)0)) {
   if (VAR_6->next == VAR_5)
    break;
   VAR_6 = VAR_6->next;
  }
  if (VAR_6 == ((void*)0))
   return -VAR_1;
  VAR_6->next = VAR_5->next;
 } else
  VAR_2[VAR_7] = VAR_5->next;
 return 0;
}
