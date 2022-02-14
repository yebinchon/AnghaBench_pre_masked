
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; int timestamp; } ;
struct iio_detected_event_list {TYPE_1__ ev; } ;
typedef int s64 ;



void FUNC_0(struct iio_detected_event_list *VAR_0,
   int VAR_1,
   s64 VAR_2)
{
 VAR_0->ev.id = VAR_1;
 VAR_0->ev.timestamp = VAR_2;
}
