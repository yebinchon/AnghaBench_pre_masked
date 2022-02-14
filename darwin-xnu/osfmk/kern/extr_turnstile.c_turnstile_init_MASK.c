
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int * ts_prev_thread; int ts_thread; int ts_inheritor_queue; scalar_t__ ts_port_ref; int ts_inheritor_flags; int ts_priority; int ts_proprietor; int ts_refcount; scalar_t__ ts_type_gencount; int ts_free_turnstiles; int ts_inheritor; int ts_waitq; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_11 ;
 int FUNC_5 (struct turnstile*,int ) ;
 int FUNC_6 (struct turnstile*,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;

__attribute__((used)) static void
FUNC_8(struct turnstile *VAR_12)
{
 kern_return_t VAR_13;


 VAR_13 = FUNC_7(&VAR_12->ts_waitq, VAR_3 | VAR_4 |
  VAR_5);
 FUNC_1(VAR_13 == VAR_0);

 VAR_12->ts_inheritor = VAR_6;
 FUNC_0(&VAR_12->ts_free_turnstiles);
 VAR_12->ts_type_gencount = 0;
 FUNC_5(VAR_12, VAR_7);
 FUNC_6(VAR_12, VAR_9);
 FUNC_3(&VAR_12->ts_refcount, &VAR_11, 1);
 VAR_12->ts_proprietor = VAR_8;
 VAR_12->ts_priority = VAR_1;
 VAR_12->ts_inheritor_flags = VAR_10;
 VAR_12->ts_port_ref = 0;
 FUNC_4(&VAR_12->ts_inheritor_queue,
   VAR_2);





}
