
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct aggTally {int got_packets_sum; int time; int avg_got_packets; int avg_got_bytes; int got_bytes_sum; int avg_sent_packets; int sent_packets_sum; int avg_sent_bytes; int sent_bytes_sum; } ;
struct TYPE_3__ {int BA_Fail; int Hw_Tx_MPDU; } ;
struct TYPE_4__ {TYPE_1__ commTally; struct aggTally agg_tal; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

u16_t FUNC_3(zdev_t* VAR_2)
{
    struct aggTally* VAR_3;

    FUNC_2(VAR_2);



    VAR_3 = &VAR_1->agg_tal;

    if(VAR_3->got_packets_sum < 10)
    {
        FUNC_0(VAR_2);
        return 0;
    }

    VAR_3->time++;
    VAR_3->avg_got_packets = (VAR_3->avg_got_packets * (VAR_3->time - 1) +
            VAR_3->got_packets_sum) / VAR_3->time;
    VAR_3->avg_got_bytes = (VAR_3->avg_got_bytes * (VAR_3->time - 1) +
            VAR_3->got_bytes_sum) / VAR_3->time;
    VAR_3->avg_sent_packets = (VAR_3->avg_sent_packets * (VAR_3->time - 1)
            + VAR_3->sent_packets_sum) / VAR_3->time;
    VAR_3->avg_sent_bytes = (VAR_3->avg_sent_bytes * (VAR_3->time - 1) +
            VAR_3->sent_bytes_sum) / VAR_3->time;
    FUNC_1(VAR_0, "got_packets_sum =", VAR_3->got_packets_sum);
    FUNC_1(VAR_0, "  got_bytes_sum =", VAR_3->got_bytes_sum);
    FUNC_1(VAR_0, "sent_packets_sum=", VAR_3->sent_packets_sum);
    FUNC_1(VAR_0, " sent_bytes_sum =", VAR_3->sent_bytes_sum);
    VAR_3->got_packets_sum = VAR_3->got_bytes_sum =VAR_3->sent_packets_sum
                = VAR_3->sent_bytes_sum = 0;
    FUNC_1(VAR_0, "avg_got_packets =", VAR_3->avg_got_packets);
    FUNC_1(VAR_0, "  avg_got_bytes =", VAR_3->avg_got_bytes);
    FUNC_1(VAR_0, "avg_sent_packets=", VAR_3->avg_sent_packets);
    FUNC_1(VAR_0, " avg_sent_bytes =", VAR_3->avg_sent_bytes);
    if ((VAR_1->commTally.BA_Fail == 0) || (VAR_1->commTally.Hw_Tx_MPDU == 0))
    {
        FUNC_1(VAR_0, "Hardware Tx MPDU=", VAR_1->commTally.Hw_Tx_MPDU);
        FUNC_1(VAR_0, "  BA Fail number=", VAR_1->commTally.BA_Fail);
    }
    else
        FUNC_1(VAR_0, "1/(BA fail rate)=", VAR_1->commTally.Hw_Tx_MPDU/VAR_1->commTally.BA_Fail);

    return 0;
}
