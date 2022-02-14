
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_waitq; scalar_t__ ts_inheritor; int ts_priority; int ts_inheritor_links; int ts_inheritor_queue; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int VAR_9 ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (struct turnstile*) ;
 int FUNC_6 (int,int,struct turnstile*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static boolean_t
FUNC_9(
 struct turnstile *VAR_10,
 struct turnstile *VAR_11)
{
 boolean_t VAR_12 = VAR_1;


 FUNC_7(&VAR_10->ts_waitq);

 FUNC_0(VAR_2,
  (FUNC_1(VAR_9, (VAR_8))) | VAR_0,
  FUNC_2(VAR_10),
  FUNC_2(VAR_11),
  VAR_11->ts_priority, 0, 0);

 FUNC_3(&(VAR_11->ts_inheritor_links));
 if (FUNC_4(&VAR_10->ts_inheritor_queue,
   &VAR_11->ts_inheritor_links, VAR_11->ts_priority,
   VAR_3)) {

  VAR_12 = FUNC_5(VAR_10);
 }


 if (!VAR_12) {
  FUNC_6(1,
   (VAR_10->ts_inheritor ? VAR_6 : VAR_5) |
   VAR_7 | VAR_4, VAR_11);
 }

 FUNC_8(&VAR_10->ts_waitq);
 return VAR_12;
}
