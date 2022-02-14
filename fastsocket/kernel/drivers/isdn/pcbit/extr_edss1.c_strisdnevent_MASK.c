
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ushort ;
struct isdn_event_desc {scalar_t__ ev; char* desc; } ;


 struct isdn_event_desc* VAR_0 ;

char * FUNC_0(ushort VAR_1)
{
  struct isdn_event_desc * VAR_2;

  for (VAR_2 = VAR_0; VAR_2->ev; VAR_2++)
    if (VAR_2->ev == VAR_1)
      break;

  return VAR_2->desc;
}
