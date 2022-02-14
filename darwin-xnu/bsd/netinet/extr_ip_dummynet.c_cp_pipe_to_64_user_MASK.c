
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* rq; void* pipe; void* next; } ;
struct TYPE_4__ {void* p; } ;
struct dn_pipe_64 {int delay; TYPE_1__ fs; void* tail; void* head; void* next; int ready; void* ifp; TYPE_2__* if_name; int sched_time; int numbytes; int sum; int V; TYPE_2__ idle_heap; TYPE_2__ not_eligible_heap; TYPE_2__ scheduler_heap; int bandwidth; int pipe_nr; } ;
struct dn_pipe {int delay; int fs; int ready; void* ifp; int * if_name; int sched_time; int numbytes; int sum; int V; int idle_heap; int not_eligible_heap; int scheduler_heap; int bandwidth; int pipe_nr; } ;
struct dn_heap_64 {int dummy; } ;


 void* FUNC_0 (int ,void*) ;
 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 char* FUNC_3 (int *,char*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static
char *FUNC_4(struct dn_pipe *VAR_5, struct dn_pipe_64 *VAR_6)
{
 char *VAR_7;

 VAR_6->pipe_nr = VAR_5->pipe_nr;
 VAR_6->bandwidth = VAR_5->bandwidth;
 VAR_6->delay = VAR_5->delay;
 FUNC_1( &(VAR_5->scheduler_heap), &(VAR_6->scheduler_heap), sizeof(struct dn_heap_64));
 VAR_6->scheduler_heap.p = FUNC_0(VAR_4, VAR_6->scheduler_heap.p);
 FUNC_1( &(VAR_5->not_eligible_heap), &(VAR_6->not_eligible_heap), sizeof(struct dn_heap_64));
 VAR_6->not_eligible_heap.p = FUNC_0(VAR_4, VAR_6->not_eligible_heap.p);
 FUNC_1( &(VAR_5->idle_heap), &(VAR_6->idle_heap), sizeof(struct dn_heap_64));
 VAR_6->idle_heap.p = FUNC_0(VAR_4, VAR_6->idle_heap.p);
 VAR_6->V = VAR_5->V;
 VAR_6->sum = VAR_5->sum;
 VAR_6->numbytes = VAR_5->numbytes;
 VAR_6->sched_time = VAR_5->sched_time;
 FUNC_1( VAR_5->if_name, VAR_6->if_name, VAR_1);
 VAR_6->ifp = FUNC_0(VAR_4, VAR_5->ifp);
 VAR_6->ready = VAR_5->ready;

 FUNC_2( &(VAR_5->fs), &(VAR_6->fs));

 VAR_6->delay = (VAR_6->delay * 1000) / (VAR_3*10) ;






 VAR_6->next = FUNC_0( VAR_4, VAR_0 );

 VAR_6->head = VAR_6->tail = VAR_2 ;
 VAR_6->fs.next = VAR_2 ;
 VAR_6->fs.pipe = VAR_2 ;
 VAR_6->fs.rq = VAR_2 ;
 VAR_7 = ((char *)VAR_6) + sizeof(struct dn_pipe_64);
 return( FUNC_3( &(VAR_5->fs), VAR_7) );
}
