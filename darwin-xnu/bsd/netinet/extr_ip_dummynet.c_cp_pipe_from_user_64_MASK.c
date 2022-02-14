
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockopt {int dummy; } ;
struct TYPE_4__ {int max_pkt_size; int avg_pkt_size; int lookup_weight; int lookup_step; int lookup_depth; int c_4; int c_3; int c_2; int c_1; int max_p; int min_th; int max_th; int w_q; int backlogged; int last_expired; int rq_elements; int rq_size; int flow_mask; int plr; int qsize; int weight; int parent_nr; int flags_fs; int fs_nr; } ;
struct dn_pipe_64 {TYPE_2__ fs; int ready; int if_name; int sched_time; int numbytes; int sum; int V; int delay; int bandwidth; int pipe_nr; } ;
struct TYPE_3__ {int max_pkt_size; int avg_pkt_size; int lookup_weight; int lookup_step; int lookup_depth; int c_4; int c_3; int c_2; int c_1; int max_p; int min_th; int max_th; int w_q; int backlogged; int last_expired; int rq_elements; int rq_size; int flow_mask; int plr; int qsize; int weight; int parent_nr; int flags_fs; int fs_nr; } ;
struct dn_pipe {TYPE_1__ fs; int ready; int if_name; int sched_time; int numbytes; int sum; int V; int delay; int bandwidth; int pipe_nr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct sockopt*,struct dn_pipe_64*,int,int) ;

int FUNC_2( struct sockopt *VAR_1, struct dn_pipe *VAR_2 )
{
 struct dn_pipe_64 VAR_3;
 int VAR_4=0;

 VAR_4 = FUNC_1(VAR_1, &VAR_3, sizeof(struct dn_pipe_64), sizeof(struct dn_pipe_64));
 if ( !VAR_4 ){
  VAR_2->pipe_nr = VAR_3;
  VAR_2->bandwidth = VAR_3;
  VAR_2->delay = VAR_3;
  VAR_2->V = VAR_3;
  VAR_2->sum = VAR_3;
  VAR_2->numbytes = VAR_3;
  VAR_2->sched_time = VAR_3;
  FUNC_0( VAR_3, VAR_2->if_name, VAR_0);
  VAR_2->ready = VAR_3;

  VAR_2->fs.fs_nr = VAR_3;
  VAR_2->fs.flags_fs = VAR_3;
  VAR_2->fs.parent_nr = VAR_3;
  VAR_2->fs.weight = VAR_3;
  VAR_2->fs.qsize = VAR_3;
  VAR_2->fs.plr = VAR_3;
  VAR_2->fs.flow_mask = VAR_3;
  VAR_2->fs.rq_size = VAR_3;
  VAR_2->fs.rq_elements = VAR_3;
  VAR_2->fs.last_expired = VAR_3;
  VAR_2->fs.backlogged = VAR_3;
  VAR_2->fs.w_q = VAR_3;
  VAR_2->fs.max_th = VAR_3;
  VAR_2->fs.min_th = VAR_3;
  VAR_2->fs.max_p = VAR_3;
  VAR_2->fs.c_1 = VAR_3;
  VAR_2->fs.c_2 = VAR_3;
  VAR_2->fs.c_3 = VAR_3;
  VAR_2->fs.c_4 = VAR_3;
  VAR_2->fs.lookup_depth = VAR_3;
  VAR_2->fs.lookup_step = VAR_3;
  VAR_2->fs.lookup_weight = VAR_3;
  VAR_2->fs.avg_pkt_size = VAR_3;
  VAR_2->fs.max_pkt_size = VAR_3;
 }
 return VAR_4;
}
