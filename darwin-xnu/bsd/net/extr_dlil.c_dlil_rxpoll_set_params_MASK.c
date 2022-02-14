
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct ifnet_poll_params {scalar_t__ packets_lowat; scalar_t__ packets_hiwat; scalar_t__ bytes_lowat; scalar_t__ bytes_hiwat; scalar_t__ interval_time; scalar_t__ packets_limit; } ;
struct ifnet {int if_eflags; scalar_t__ if_poll_update; struct dlil_threading_info* if_inp; } ;
struct dlil_threading_info {int rxpoll_wlowat; int rxpoll_plowat; int rxpoll_blowat; int rxpoll_whiwat; int rxpoll_phiwat; int rxpoll_bhiwat; int rxpoll_plim; int rxpoll_ival; int input_lck; int sample_holdtime; int mode_holdtime; } ;
typedef int errno_t ;
typedef int boolean_t ;
struct TYPE_2__ {scalar_t__ speed; scalar_t__ plowat; scalar_t__ phiwat; scalar_t__ blowat; scalar_t__ bhiwat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 char* FUNC_2 (struct ifnet*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__*,int *) ;
 int FUNC_7 (char*,char*,scalar_t__,scalar_t__,int,int,int,int,int,int,int,int) ;
 TYPE_1__* VAR_12 ;

errno_t
FUNC_8(struct ifnet *VAR_13, struct ifnet_poll_params *VAR_14,
    boolean_t VAR_15)
{
 struct dlil_threading_info *VAR_16;
 u_int64_t VAR_17, VAR_18;

 FUNC_1(VAR_13 != ((void*)0));
 if (!(VAR_13->if_eflags & VAR_2) || (VAR_16 = VAR_13->if_inp) == ((void*)0))
  return (VAR_1);

 if (VAR_14 != ((void*)0)) {
  if ((VAR_14->packets_lowat == 0 && VAR_14->packets_hiwat != 0) ||
      (VAR_14->packets_lowat != 0 && VAR_14->packets_hiwat == 0))
   return (VAR_0);
  if (VAR_14->packets_lowat != 0 &&
      VAR_14->packets_lowat >= VAR_14->packets_hiwat)
   return (VAR_0);
  if ((VAR_14->bytes_lowat == 0 && VAR_14->bytes_hiwat != 0) ||
      (VAR_14->bytes_lowat != 0 && VAR_14->bytes_hiwat == 0))
   return (VAR_0);
  if (VAR_14->bytes_lowat != 0 &&
      VAR_14->bytes_lowat >= VAR_14->bytes_hiwat)
   return (VAR_0);
  if (VAR_14->interval_time != 0 &&
      VAR_14->interval_time < VAR_3)
   VAR_14->interval_time = VAR_3;
 }

 if (!VAR_15)
  FUNC_4(&VAR_16->input_lck);

 FUNC_0(&VAR_16->input_lck, VAR_4);
 if (VAR_14 != ((void*)0) && !VAR_15 && VAR_13->if_poll_update != 0)
  VAR_13->if_poll_update = 0;

 if ((VAR_18 = FUNC_3(VAR_13)) == 0 && VAR_14 == ((void*)0)) {
  VAR_17 = 0;
  VAR_16->rxpoll_wlowat = VAR_16->rxpoll_plowat =
      VAR_16->rxpoll_blowat = 0;
  VAR_16->rxpoll_whiwat = VAR_16->rxpoll_phiwat =
      VAR_16->rxpoll_bhiwat = (u_int32_t)-1;
  VAR_16->rxpoll_plim = 0;
  VAR_16->rxpoll_ival = VAR_3;
 } else {
  u_int32_t VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
  u_int64_t VAR_24;
  unsigned int VAR_25, VAR_26;

  for (VAR_25 = 0, VAR_26 = 0; VAR_12[VAR_26].speed != 0; VAR_26++) {
   if (VAR_18 < VAR_12[VAR_26].speed)
    break;
   VAR_25 = VAR_26;
  }

  VAR_19 = ((VAR_14 == ((void*)0) || VAR_14->packets_lowat == 0) ?
      VAR_12[VAR_25].plowat : VAR_14->packets_lowat);
  VAR_20 = ((VAR_14 == ((void*)0) || VAR_14->packets_hiwat == 0) ?
      VAR_12[VAR_25].phiwat : VAR_14->packets_hiwat);
  VAR_21 = ((VAR_14 == ((void*)0) || VAR_14->bytes_lowat == 0) ?
      VAR_12[VAR_25].blowat : VAR_14->bytes_lowat);
  VAR_22 = ((VAR_14 == ((void*)0) || VAR_14->bytes_hiwat == 0) ?
      VAR_12[VAR_25].bhiwat : VAR_14->bytes_hiwat);
  VAR_23 = ((VAR_14 == ((void*)0) || VAR_14->packets_limit == 0) ?
      VAR_7 : VAR_14->packets_limit);
  VAR_24 = ((VAR_14 == ((void*)0) || VAR_14->interval_time == 0) ?
      VAR_6 : VAR_14->interval_time);

  FUNC_1(VAR_19 != 0 && VAR_20 != 0);
  FUNC_1(VAR_21 != 0 && VAR_22 != 0);
  FUNC_1(VAR_24 >= VAR_3);

  VAR_17 = VAR_9;
  VAR_16->rxpoll_wlowat = VAR_11;
  VAR_16->rxpoll_whiwat = VAR_10;
  VAR_16->rxpoll_plowat = VAR_19;
  VAR_16->rxpoll_phiwat = VAR_20;
  VAR_16->rxpoll_blowat = VAR_21;
  VAR_16->rxpoll_bhiwat = VAR_22;
  VAR_16->rxpoll_plim = VAR_23;
  VAR_16->rxpoll_ival = VAR_24;
 }

 FUNC_6(&VAR_8, &VAR_16->mode_holdtime);
 FUNC_6(&VAR_17, &VAR_16->sample_holdtime);

 if (VAR_5) {
  FUNC_7("%s: speed %llu bps, sample per %llu nsec, "
      "poll interval %llu nsec, pkts per poll %u, "
      "pkt limits [%u/%u], wreq limits [%u/%u], "
      "bytes limits [%u/%u]\n", FUNC_2(VAR_13),
      VAR_18, VAR_17, VAR_16->rxpoll_ival, VAR_16->rxpoll_plim,
      VAR_16->rxpoll_plowat, VAR_16->rxpoll_phiwat, VAR_16->rxpoll_wlowat,
      VAR_16->rxpoll_whiwat, VAR_16->rxpoll_blowat, VAR_16->rxpoll_bhiwat);
 }

 if (!VAR_15)
  FUNC_5(&VAR_16->input_lck);

 return (0);
}
