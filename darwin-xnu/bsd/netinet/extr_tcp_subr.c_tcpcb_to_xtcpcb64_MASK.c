
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct xtcpcb64 {int t_force; scalar_t__ t_badrxtwin; int snd_ssthresh_prev; int snd_cwnd_prev; int snd_recover; scalar_t__ cc_recv; scalar_t__ cc_send; int last_ack_sent; int ts_recent_age; int ts_recent; int requested_s_scale; int request_r_scale; int rcv_scale; int snd_scale; int t_iobc; int t_oobflags; int t_softerror; int max_sndwnd; int t_rttupdated; int t_rttmin; int t_rxtshift; int t_rttvar; int t_srtt; int t_maxseg; int t_rxtcur; int t_rtseq; int t_rtttime; int t_starttime; int t_rcvtime; int t_maxopd; int snd_ssthresh; int snd_cwnd; int snd_wnd; int rcv_up; int rcv_wnd; int rcv_adv; int rcv_nxt; int irs; int iss; int snd_wl2; int snd_wl1; int snd_up; int snd_nxt; int snd_max; int snd_una; int t_flags; int t_state; int * t_timer; int t_dupacks; scalar_t__ t_segq; } ;
struct TYPE_2__ {int lh_first; } ;
struct tcpcb {int t_flagsext; int snd_ssthresh_prev; int snd_cwnd_prev; int snd_recover; int last_ack_sent; int ts_recent_age; int ts_recent; int requested_s_scale; int request_r_scale; int rcv_scale; int snd_scale; int t_iobc; int t_oobflags; int t_softerror; int max_sndwnd; int t_rttupdated; int t_rttmin; int t_rxtshift; int t_rttvar; int t_srtt; int t_maxseg; int t_rxtcur; int t_rtseq; int t_rtttime; int t_starttime; int t_rcvtime; int t_maxopd; int snd_ssthresh; int snd_cwnd; int snd_wnd; int rcv_up; int rcv_wnd; int rcv_adv; int rcv_nxt; int irs; int iss; int snd_wl2; int snd_wl1; int snd_up; int snd_nxt; int snd_max; int snd_una; int t_flags; int t_state; int * t_timer; int t_dupacks; TYPE_1__ t_segq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct tcpcb *VAR_9, struct xtcpcb64 *VAR_10)
{
 VAR_10->t_segq = (uint32_t)FUNC_0(VAR_9->t_segq.lh_first);
 VAR_10->t_dupacks = VAR_9->t_dupacks;
 VAR_10->t_timer[VAR_7] = VAR_9->t_timer[VAR_6];
 VAR_10->t_timer[VAR_5] = VAR_9->t_timer[VAR_4];
 VAR_10->t_timer[VAR_3] = VAR_9->t_timer[VAR_2];
 VAR_10->t_timer[VAR_1] = VAR_9->t_timer[VAR_0];
 VAR_10->t_state = VAR_9->t_state;
 VAR_10->t_flags = VAR_9->t_flags;
 VAR_10->t_force = (VAR_9->t_flagsext & VAR_8) ? 1 : 0;
 VAR_10->snd_una = VAR_9->snd_una;
 VAR_10->snd_max = VAR_9->snd_max;
 VAR_10->snd_nxt = VAR_9->snd_nxt;
 VAR_10->snd_up = VAR_9->snd_up;
 VAR_10->snd_wl1 = VAR_9->snd_wl1;
 VAR_10->snd_wl2 = VAR_9->snd_wl2;
 VAR_10->iss = VAR_9->iss;
 VAR_10->irs = VAR_9->irs;
 VAR_10->rcv_nxt = VAR_9->rcv_nxt;
 VAR_10->rcv_adv = VAR_9->rcv_adv;
 VAR_10->rcv_wnd = VAR_9->rcv_wnd;
 VAR_10->rcv_up = VAR_9->rcv_up;
 VAR_10->snd_wnd = VAR_9->snd_wnd;
 VAR_10->snd_cwnd = VAR_9->snd_cwnd;
 VAR_10->snd_ssthresh = VAR_9->snd_ssthresh;
 VAR_10->t_maxopd = VAR_9->t_maxopd;
 VAR_10->t_rcvtime = VAR_9->t_rcvtime;
 VAR_10->t_starttime = VAR_9->t_starttime;
 VAR_10->t_rtttime = VAR_9->t_rtttime;
 VAR_10->t_rtseq = VAR_9->t_rtseq;
 VAR_10->t_rxtcur = VAR_9->t_rxtcur;
 VAR_10->t_maxseg = VAR_9->t_maxseg;
 VAR_10->t_srtt = VAR_9->t_srtt;
 VAR_10->t_rttvar = VAR_9->t_rttvar;
 VAR_10->t_rxtshift = VAR_9->t_rxtshift;
 VAR_10->t_rttmin = VAR_9->t_rttmin;
 VAR_10->t_rttupdated = VAR_9->t_rttupdated;
 VAR_10->max_sndwnd = VAR_9->max_sndwnd;
 VAR_10->t_softerror = VAR_9->t_softerror;
 VAR_10->t_oobflags = VAR_9->t_oobflags;
 VAR_10->t_iobc = VAR_9->t_iobc;
 VAR_10->snd_scale = VAR_9->snd_scale;
 VAR_10->rcv_scale = VAR_9->rcv_scale;
 VAR_10->request_r_scale = VAR_9->request_r_scale;
 VAR_10->requested_s_scale = VAR_9->requested_s_scale;
 VAR_10->ts_recent = VAR_9->ts_recent;
 VAR_10->ts_recent_age = VAR_9->ts_recent_age;
 VAR_10->last_ack_sent = VAR_9->last_ack_sent;
 VAR_10->cc_send = 0;
 VAR_10->cc_recv = 0;
 VAR_10->snd_recover = VAR_9->snd_recover;
 VAR_10->snd_cwnd_prev = VAR_9->snd_cwnd_prev;
 VAR_10->snd_ssthresh_prev = VAR_9->snd_ssthresh_prev;
 VAR_10->t_badrxtwin = 0;
}
