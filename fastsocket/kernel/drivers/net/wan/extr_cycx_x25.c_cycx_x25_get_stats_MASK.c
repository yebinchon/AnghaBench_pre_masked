
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tx_errors; scalar_t__ collisions; scalar_t__ tx_dropped; int tx_aborted_errors; int tx_packets; scalar_t__ rx_errors; scalar_t__ rx_dropped; int rx_missed_errors; scalar_t__ rx_frame_errors; scalar_t__ rx_length_errors; int rx_crc_errors; int rx_over_errors; int rx_packets; } ;
struct TYPE_10__ {TYPE_4__ stats; } ;
struct TYPE_6__ {int tx_aborts; int n2_tx_frames; int rx_aborts; int rx_crc_errors; int rx_over_errors; int n2_rx_frames; } ;
struct TYPE_7__ {TYPE_1__ stats; } ;
struct TYPE_8__ {TYPE_2__ x; } ;
struct cycx_device {TYPE_5__ wandev; TYPE_3__ u; int wait_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct cycx_device*,int ,int ,int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct cycx_device *VAR_3)
{


 int VAR_4 = FUNC_3(VAR_3, VAR_1, 0, ((void*)0), 20, ((void*)0), 0);

 if (VAR_4)
  return VAR_4;

 FUNC_1(&VAR_3->wait_stats);

 if (FUNC_2(VAR_2))
  return -VAR_0;

 VAR_3->wandev.stats.rx_packets = VAR_3->u.x.stats.n2_rx_frames;
 VAR_3->wandev.stats.rx_over_errors = VAR_3->u.x.stats.rx_over_errors;
 VAR_3->wandev.stats.rx_crc_errors = VAR_3->u.x.stats.rx_crc_errors;
 VAR_3->wandev.stats.rx_length_errors = 0;
 VAR_3->wandev.stats.rx_frame_errors = 0;
 VAR_3->wandev.stats.rx_missed_errors = VAR_3->u.x.stats.rx_aborts;
 VAR_3->wandev.stats.rx_dropped = 0;
 VAR_3->wandev.stats.rx_errors = 0;
 VAR_3->wandev.stats.tx_packets = VAR_3->u.x.stats.n2_tx_frames;
 VAR_3->wandev.stats.tx_aborted_errors = VAR_3->u.x.stats.tx_aborts;
 VAR_3->wandev.stats.tx_dropped = 0;
 VAR_3->wandev.stats.collisions = 0;
 VAR_3->wandev.stats.tx_errors = 0;

 FUNC_0(&VAR_3->wandev);

 return 0;
}
