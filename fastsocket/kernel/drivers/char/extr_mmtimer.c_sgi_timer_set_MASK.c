
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct rb_node {int dummy; } ;
struct mmtimer {int cpu; struct k_itimer* timer; } ;
struct TYPE_4__ {size_t node; unsigned long incr; unsigned long expires; int clock; } ;
struct TYPE_5__ {TYPE_1__ mmtimer; } ;
struct k_itimer {TYPE_2__ it; } ;
struct itimerspec {struct timespec it_interval; struct timespec it_value; } ;
typedef size_t cnodeid_t ;
struct TYPE_6__ {int lock; struct rb_node* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct timespec*) ;
 struct mmtimer* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mmtimer*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 unsigned long FUNC_9 () ;
 unsigned long VAR_5 ;
 int FUNC_10 (struct k_itimer*) ;
 int FUNC_11 (struct k_itimer*,struct itimerspec*) ;
 int FUNC_12 () ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 TYPE_3__* VAR_6 ;
 unsigned long FUNC_15 (struct timespec*) ;

__attribute__((used)) static int FUNC_16(struct k_itimer *VAR_7, int VAR_8,
 struct itimerspec * VAR_9,
 struct itimerspec * VAR_10)
{
 unsigned long VAR_11, VAR_12, VAR_13;
 int VAR_14 = 0;
 cnodeid_t VAR_15;
 struct mmtimer *VAR_16;
 struct rb_node *VAR_17;

 if (VAR_10)
  FUNC_11(VAR_7, VAR_10);

 FUNC_10(VAR_7);
 VAR_11 = FUNC_15(&VAR_9->it_value);
 VAR_12 = FUNC_15(&VAR_9->it_interval);

 if (VAR_11 == 0)

  return 0;

 VAR_16 = FUNC_3(sizeof(struct mmtimer), VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;

 if (VAR_8 & VAR_3) {
  struct timespec VAR_18;
  unsigned long VAR_19;

  FUNC_2(&VAR_18);
  VAR_19 = FUNC_15(&VAR_18);
  if (VAR_11 > VAR_19)
   VAR_11 -= VAR_19;
  else

   VAR_11 = 0;
 }






 VAR_11 = (VAR_11 + VAR_5 - 1) / VAR_5 + FUNC_9();
 VAR_12 = (VAR_12 + VAR_5 - 1) / VAR_5;






 FUNC_7();

 VAR_15 = FUNC_1(FUNC_12());


 FUNC_13(&VAR_6[VAR_15].lock, VAR_13);

 VAR_16->timer = VAR_7;
 VAR_16->cpu = FUNC_12();

 VAR_7->it.mmtimer.clock = VAR_4;
 VAR_7->it.mmtimer.node = VAR_15;
 VAR_7->it.mmtimer.incr = VAR_12;
 VAR_7->it.mmtimer.expires = VAR_11;

 VAR_17 = VAR_6[VAR_15].next;


 FUNC_4(VAR_16);

 if (VAR_6[VAR_15].next == VAR_17) {

  FUNC_14(&VAR_6[VAR_15].lock, VAR_13);
  FUNC_8();
  return VAR_14;
 }


 if (VAR_17)
  FUNC_5(FUNC_0(VAR_15), VAR_0);

 FUNC_6(VAR_15);


 FUNC_14(&VAR_6[VAR_15].lock, VAR_13);

 FUNC_8();

 return VAR_14;
}
