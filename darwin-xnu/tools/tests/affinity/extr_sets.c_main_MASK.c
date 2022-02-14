
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* data; } ;
typedef TYPE_2__ work_t ;
struct TYPE_6__ {int queue; int waiters; int cnd; int mtx; } ;
struct TYPE_8__ {int stagenum; char* name; int thread; TYPE_1__ bufq; TYPE_1__* output; TYPE_1__* input; int * fn; TYPE_4__* set; } ;
typedef TYPE_3__ stage_info_t ;
struct TYPE_9__ {int setnum; int isize; int* data; TYPE_3__** stage; } ;
typedef TYPE_4__ line_info_t ;
typedef int kern_return_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (int,int*,int*) ;
 int VAR_4 ;
 void* VAR_5 ;
 int * VAR_6 ;
 int FUNC_5 (int,char*,int,int) ;
 int VAR_7 ;
 int FUNC_6 (int,char**,char*) ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long long FUNC_7 () ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_11 ;
 int FUNC_9 (char*,int,...) ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (char*,int,int) ;
 int * VAR_14 ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *,int *,void*) ;
 int FUNC_13 (int ,void**) ;
 int FUNC_14 (int *,int *) ;
 int VAR_15 ;
 int FUNC_15 (int) ;
 int VAR_16 ;
 unsigned long long VAR_17 ;
 int FUNC_16 () ;
 void* VAR_18 ;

int
FUNC_17(int VAR_19, char *VAR_20[])
{
 int VAR_21;
 int VAR_22;
 int VAR_23 = 256;
 int VAR_24 = 2;
 int VAR_25 = 2;
 int VAR_26 = 2;
 int *VAR_27;
 line_info_t *VAR_28;
 line_info_t *VAR_29;
 stage_info_t *VAR_30;
 stage_info_t *VAR_31;
 kern_return_t VAR_32;
 int VAR_33;


 while ((VAR_33 = FUNC_6 (VAR_19, VAR_20, "ab:chi:p:s:twv:")) != -1) {
  switch (VAR_33) {
  case 'a':
   VAR_3 = !VAR_3;
   break;
  case 'b':
   VAR_24 = FUNC_3(VAR_12);
   break;
  case 'c':
   VAR_5 = VAR_1;
   break;
  case 'i':
   VAR_9 = FUNC_3(VAR_12);
   break;
  case 'p':
   VAR_23 = FUNC_3(VAR_12);
   break;
  case 's':
   VAR_26 = FUNC_3(VAR_12);
   if (VAR_26 >= VAR_2)
    FUNC_16();
   break;
  case 't':
   VAR_8 = VAR_1;
   break;
  case 'w':
   VAR_6 = &VAR_15;
   break;
  case 'v':
   VAR_18 = FUNC_3(VAR_12);
   break;
  case '?':
  case 'h':
  default:
   FUNC_16();
  }
 }
 VAR_19 -= VAR_13; VAR_20 += VAR_13;
 if (VAR_19 > 0)
  VAR_25 = FUNC_3(*VAR_20);

 if (VAR_5)
  FUNC_4(VAR_23, &VAR_24, &VAR_25);

 FUNC_14(&VAR_7, ((void*)0));
 FUNC_11(&VAR_4, ((void*)0));




 VAR_16 = VAR_25 * VAR_26;
 FUNC_9("Launching %d set%s of %d threads with %saffinity, "
   "consumer reads%s data\n",
  VAR_25, FUNC_15(VAR_25), VAR_26, VAR_3? "": "no ",
  (VAR_6 == &VAR_15)? " and writes" : "");
 if (VAR_23 < 256)
  FUNC_9("  %dkB bytes per buffer, ", VAR_23 * 4);
 else
  FUNC_9("  %dMB bytes per buffer, ", VAR_23 / 256);
 FUNC_9("%d buffer%s per set ",
  VAR_24, FUNC_15(VAR_24));
 if (VAR_24 * VAR_23 < 256)
  FUNC_9("(total %dkB)\n", VAR_24 * VAR_23 * 4);
 else
  FUNC_9("(total %dMB)\n", VAR_24 * VAR_23 / 256);
 FUNC_9("  processing %d buffer%s...\n",
  VAR_9, FUNC_15(VAR_9));
 VAR_28 = (line_info_t *) FUNC_8(VAR_25 * sizeof(line_info_t));
 VAR_30 = (stage_info_t *) FUNC_8(VAR_25 * VAR_26 * sizeof(stage_info_t));
 for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
  work_t *VAR_34;

  VAR_29 = &VAR_28[VAR_21];

  VAR_29->setnum = VAR_21 + 1;
  VAR_29->isize = VAR_23 * 4096 / sizeof(int);
  VAR_29->data = (int *) FUNC_8(VAR_24 * VAR_23 * 4096);


  for (VAR_22 = 0; VAR_22 < VAR_26; VAR_22++) {
   VAR_31 = &VAR_30[(VAR_21*VAR_26) + VAR_22];
   VAR_31->stagenum = VAR_22;
   VAR_31->set = VAR_29;
   VAR_29->stage[VAR_22] = VAR_31;
   FUNC_14(&VAR_31->bufq.mtx, ((void*)0));
   FUNC_11(&VAR_31->bufq.cnd, ((void*)0));
   FUNC_1(&VAR_31->bufq.queue);
   VAR_31->bufq.waiters = VAR_0;
  }





  for (VAR_22 = 0; VAR_22 < VAR_26; VAR_22++) {
   VAR_31 = VAR_29->stage[VAR_22];
   if (VAR_22 == 0) {
    VAR_31->fn = VAR_14;
    VAR_31->name = "producer";
   } else {
    VAR_31->fn = VAR_6;
    VAR_31->name = "consumer";
   }
   VAR_31->input = &VAR_29->stage[VAR_22]->bufq;
   VAR_31->output = &VAR_29->stage[(VAR_22 + 1) % VAR_26]->bufq;
  }


  VAR_34 = (work_t *) FUNC_8(VAR_24 * sizeof(work_t));
  for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++) {
   VAR_34[VAR_22].data = VAR_29->data + (VAR_29->isize * VAR_22);
   FUNC_2(&VAR_29->stage[0]->bufq.queue, &VAR_34[VAR_22], VAR_10);
   FUNC_0("  empty work item %p for set %d data %p\n",
    &VAR_34[VAR_22], VAR_21, VAR_34[VAR_22].data);
  }


  for (VAR_22 = 0; VAR_22 < VAR_26; VAR_22++) {
   if ((VAR_32 = FUNC_12(&VAR_29->stage[VAR_22]->thread, ((void*)0),
     &VAR_11,
     (void *) VAR_29->stage[VAR_22])))
   FUNC_5(1, "pthread_create %d,%d", VAR_21, VAR_22);
  }
 }




 for (VAR_21 = 0; VAR_21 < VAR_25; VAR_21++) {
  VAR_29 = &VAR_28[VAR_21];
  for (VAR_22 = 0; VAR_22 < VAR_26; VAR_22++) {
   if((VAR_32 = FUNC_13(VAR_29->stage[VAR_22]->thread, (void **)&VAR_27)))
       FUNC_5(1, "pthread_join %d,%d", VAR_21, VAR_22);
   FUNC_0("Thread %d,%d status %d\n", VAR_21, VAR_22, VAR_27);
  }
 }




 VAR_17 = FUNC_7() - VAR_17;
 VAR_17 = VAR_17 / 1000000ULL;
 FUNC_10("%d.%03d seconds elapsed.\n",
  (int) (VAR_17/1000ULL), (int) (VAR_17 % 1000ULL));

 return 0;
}
