
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct aggTally {scalar_t__ time; scalar_t__ avg_sent_bytes; scalar_t__ avg_sent_packets; scalar_t__ avg_got_bytes; scalar_t__ avg_got_packets; scalar_t__ sent_packets_sum; scalar_t__ sent_bytes_sum; scalar_t__ got_bytes_sum; scalar_t__ got_packets_sum; } ;
struct TYPE_2__ {struct aggTally agg_tal; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_1)
{
    struct aggTally* VAR_2;

    FUNC_0(VAR_1);



    VAR_2 = &VAR_0->agg_tal;
    VAR_2->got_packets_sum = 0;
    VAR_2->got_bytes_sum = 0;
    VAR_2->sent_bytes_sum = 0;
    VAR_2->sent_packets_sum = 0;
    VAR_2->avg_got_packets = 0;
    VAR_2->avg_got_bytes = 0;
    VAR_2->avg_sent_packets = 0;
    VAR_2->avg_sent_bytes = 0;
    VAR_2->time = 0;
    return 0;
}
