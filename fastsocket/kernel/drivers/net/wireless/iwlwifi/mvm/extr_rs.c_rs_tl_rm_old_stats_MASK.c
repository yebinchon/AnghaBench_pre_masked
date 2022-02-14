
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_traffic_load {scalar_t__ time_stamp; size_t head; scalar_t__ queue_count; scalar_t__* packet_count; int total; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void FUNC_0(struct iwl_traffic_load *VAR_3, u32 VAR_4)
{

 u32 VAR_5 = VAR_4 - VAR_0;

 while (VAR_3->queue_count &&
        (VAR_3->time_stamp < VAR_5)) {
  VAR_3->total -= VAR_3->packet_count[VAR_3->head];
  VAR_3->packet_count[VAR_3->head] = 0;
  VAR_3->time_stamp += VAR_1;
  VAR_3->queue_count--;
  VAR_3->head++;
  if (VAR_3->head >= VAR_2)
   VAR_3->head = 0;
 }
}
