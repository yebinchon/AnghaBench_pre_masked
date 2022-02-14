
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int setnum; int thread; TYPE_4__* stage; } ;
typedef TYPE_2__ worker_info_t ;
struct TYPE_8__ {int* data; int isize; scalar_t__ tag; } ;
typedef TYPE_3__ work_t ;
struct TYPE_6__ {int queue; scalar_t__ waiters; int cnd; int mtx; } ;
struct TYPE_9__ {int stagenum; char* name; int work_todo; TYPE_1__ bufq; TYPE_1__* output; TYPE_1__* input; int * fn; } ;
typedef TYPE_4__ stage_info_t ;
typedef int kern_return_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 (char*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_4 (int,char*,int,int) ;
 int VAR_5 ;
 int FUNC_5 (int,char**,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long long FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_9 ;
 int FUNC_8 (char*,int,...) ;
 char* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (char*,int,int) ;
 int * VAR_12 ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int *,void*) ;
 int FUNC_12 (int ,void**) ;
 int FUNC_13 (int *,int *) ;
 int VAR_13 ;
 int FUNC_14 (int) ;
 int VAR_14 ;
 unsigned long long VAR_15 ;
 int FUNC_15 () ;
 void* VAR_16 ;

int
FUNC_16(int VAR_17, char *VAR_18[])
{
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22 = 256;
 int VAR_23 = 2;
 int VAR_24 = 2;
 int VAR_25 = 2;
 int VAR_26 = 2;
 int *VAR_27;
 stage_info_t *VAR_28;
 stage_info_t *VAR_29;
 worker_info_t *VAR_30;
 worker_info_t *VAR_31;
 kern_return_t VAR_32;
 int VAR_33;


 while ((VAR_33 = FUNC_5 (VAR_17, VAR_18, "ab:i:p:s:twv:")) != -1) {
  switch (VAR_33) {
  case 'a':
   VAR_2 = !VAR_2;
   break;
  case 'b':
   VAR_23 = FUNC_3(VAR_10);
   break;
  case 'i':
   VAR_7 = FUNC_3(VAR_10);
   break;
  case 'p':
   VAR_22 = FUNC_3(VAR_10);
   break;
  case 's':
   VAR_26 = FUNC_3(VAR_10);
   if (VAR_26 >= VAR_1)
    FUNC_15();
   break;
  case 't':
   VAR_6 = VAR_0;
   break;
  case 'w':
   VAR_4 = &VAR_13;
   break;
  case 'v':
   VAR_16 = FUNC_3(VAR_10);
   break;
  case 'h':
  case '?':
  default:
   FUNC_15();
  }
 }
 VAR_17 -= VAR_11; VAR_18 += VAR_11;
 if (VAR_17 > 0)
  VAR_24 = FUNC_3(*VAR_18);
 VAR_17--; VAR_18++;
 if (VAR_17 > 0)
  VAR_25 = FUNC_3(*VAR_18);

 FUNC_13(&VAR_5, ((void*)0));
 FUNC_10(&VAR_3, ((void*)0));




 VAR_14 = VAR_25 * (VAR_26 - 1) + VAR_24;
 FUNC_8("Launching %d producer%s with %d stage%s of %d consumer%s\n"
  "  with %saffinity, consumer reads%s data\n",
  VAR_24, FUNC_14(VAR_24),
  VAR_26 - 1, FUNC_14(VAR_26 - 1),
  VAR_25, FUNC_14(VAR_25),
  VAR_2? "": "no ",
  (VAR_4 == &VAR_13)? " and writes" : "");
 if (VAR_22 < 256)
  FUNC_8("  %dkB bytes per buffer, ", VAR_22 * 4);
 else
  FUNC_8("  %dMB bytes per buffer, ", VAR_22 / 256);
 FUNC_8("%d buffer%s per producer ",
  VAR_23, FUNC_14(VAR_23));
 if (VAR_23 * VAR_22 < 256)
  FUNC_8("(total %dkB)\n", VAR_23 * VAR_22 * 4);
 else
  FUNC_8("(total %dMB)\n", VAR_23 * VAR_22 / 256);
 FUNC_8("  processing %d buffer%s...\n",
  VAR_7, FUNC_14(VAR_7));

 VAR_28 = (stage_info_t *) FUNC_7(VAR_26 * sizeof(stage_info_t));
 VAR_30 = (worker_info_t *) FUNC_7(VAR_14 * sizeof(worker_info_t));


 for (VAR_19 = 0; VAR_19 < VAR_26; VAR_19++) {
  VAR_29 = &VAR_28[VAR_19];
  VAR_29->stagenum = VAR_19;
  FUNC_13(&VAR_29->bufq.mtx, ((void*)0));
  FUNC_10(&VAR_29->bufq.cnd, ((void*)0));
  FUNC_1(&VAR_29->bufq.queue);
  VAR_29->bufq.waiters = 0;
  if (VAR_19 == 0) {
   VAR_29->fn = VAR_12;
   VAR_29->name = "producer";
  } else {
   VAR_29->fn = VAR_4;
   VAR_29->name = "consumer";
  }
  VAR_29->input = &VAR_29->bufq;
  VAR_29->output = &VAR_28[(VAR_19 + 1) % VAR_26].bufq;
  VAR_28[VAR_19].work_todo = VAR_7;
 }


 for (VAR_19 = 0; VAR_19 < VAR_24; VAR_19++) {
  work_t *VAR_34;
  int *VAR_35;
  int VAR_36;

  VAR_36 = VAR_22 * 4096 / sizeof(int);
  VAR_35 = (int *) FUNC_7(VAR_23 * VAR_22 * 4096);


  VAR_34 = (work_t *) FUNC_7(VAR_23 * sizeof(work_t));
  for (VAR_20 = 0; VAR_20 < VAR_23; VAR_20++) {
   VAR_34[VAR_20].data = VAR_35 + (VAR_36 * VAR_20);
   VAR_34[VAR_20].isize = VAR_36;
   VAR_34[VAR_20].tag = 0;
   FUNC_2(&VAR_28[0].bufq.queue, &VAR_34[VAR_20], VAR_8);
   FUNC_0("  empty work item %p for data %p\n",
    &VAR_34[VAR_20], VAR_34[VAR_20].data);
  }
  VAR_31 = &VAR_30[VAR_19];
  VAR_31->setnum = VAR_19 + 1;
  VAR_31->stage = &VAR_28[0];
  if ((VAR_32 = FUNC_11(&VAR_31->thread,
      ((void*)0),
      &VAR_9,
      (void *) VAR_31)))
   FUNC_4(1, "pthread_create %d,%d", 0, VAR_19);
 }


 for (VAR_19 = 1; VAR_19 < VAR_26; VAR_19++) {
  for (VAR_20 = 0; VAR_20 < VAR_25; VAR_20++) {
   VAR_31 = &VAR_30[VAR_24 + (VAR_25*(VAR_19-1)) + VAR_20];
   VAR_31->setnum = VAR_20 + 1;
   VAR_31->stage = &VAR_28[VAR_19];
   if ((VAR_32 = FUNC_11(&VAR_31->thread,
      ((void*)0),
      &VAR_9,
      (void *) VAR_31)))
    FUNC_4(1, "pthread_create %d,%d", VAR_19, VAR_20);
  }
 }




 for (VAR_21 = 0; VAR_21 < VAR_14; VAR_21++) {
  int VAR_37;
  int VAR_38;

  VAR_31 = &VAR_30[VAR_21];
  if (VAR_21 < VAR_24) {
   VAR_37 = 0;
   VAR_38 = VAR_21;
  } else {
   VAR_37 = (VAR_21 - VAR_24) / VAR_25;
   VAR_38 = (VAR_21 - VAR_24) % VAR_25;
  }
  if((VAR_32 = FUNC_12(VAR_31->thread, (void **)&VAR_27)))
      FUNC_4(1, "pthread_join %d,%d", VAR_37, VAR_38);
  FUNC_0("Thread %d,%d status %d\n", VAR_37, VAR_38, VAR_27);
 }




 VAR_15 = FUNC_6() - VAR_15;
 VAR_15 = VAR_15 / 1000000ULL;
 FUNC_9("%d.%03d seconds elapsed.\n",
  (int) (VAR_15/1000ULL), (int) (VAR_15 % 1000ULL));

 return 0;
}
