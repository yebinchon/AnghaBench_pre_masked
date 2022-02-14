
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {int updated; scalar_t__ noise; scalar_t__ level; scalar_t__ qual; } ;
struct TYPE_5__ {int fragment; int retries; scalar_t__ misc; int code; } ;
struct iw_statistics {TYPE_3__ qual; TYPE_1__ discard; scalar_t__ status; } ;
struct hostap_interface {scalar_t__ type; TYPE_4__* local; } ;
struct TYPE_6__ {int rx_message_in_bad_msg_fragments; int tx_retry_limit_exceeded; scalar_t__ tx_discards_wrong_sa; scalar_t__ rx_discards_no_buffer; scalar_t__ rx_fcs_errors; int rx_discards_wep_undecryptable; } ;
struct TYPE_8__ {scalar_t__ iw_mode; scalar_t__ avg_noise; scalar_t__ avg_signal; scalar_t__ comms_qual; TYPE_2__ comm_tallies; struct iw_statistics wstats; } ;
typedef TYPE_4__ local_info_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 () ;
 struct hostap_interface* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;

__attribute__((used)) static struct iw_statistics *FUNC_3(struct net_device *VAR_6)
{
 struct hostap_interface *VAR_7;
 local_info_t *VAR_8;
 struct iw_statistics *VAR_9;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = VAR_7->local;


 if (VAR_7->type != VAR_0)
  return ((void*)0);

 VAR_9 = &VAR_8->wstats;

 VAR_9->status = 0;
 VAR_9->discard.code =
  VAR_8->comm_tallies.rx_discards_wep_undecryptable;
 VAR_9->discard.misc =
  VAR_8->comm_tallies.rx_fcs_errors +
  VAR_8->comm_tallies.rx_discards_no_buffer +
  VAR_8->comm_tallies.tx_discards_wrong_sa;

 VAR_9->discard.retries =
  VAR_8->comm_tallies.tx_retry_limit_exceeded;
 VAR_9->discard.fragment =
  VAR_8->comm_tallies.rx_message_in_bad_msg_fragments;

 if (VAR_8->iw_mode != VAR_1 &&
     VAR_8->iw_mode != VAR_2) {
  int VAR_10 = 1;
  if (VAR_10 && FUNC_2(VAR_6) == 0)
   VAR_9->qual.updated = VAR_4 |
    VAR_5;

  VAR_9->qual.qual = VAR_8->comms_qual;
  VAR_9->qual.level = VAR_8->avg_signal;
  VAR_9->qual.noise = VAR_8->avg_noise;
 } else {
  VAR_9->qual.qual = 0;
  VAR_9->qual.level = 0;
  VAR_9->qual.noise = 0;
  VAR_9->qual.updated = VAR_3;
 }

 return VAR_9;
}
