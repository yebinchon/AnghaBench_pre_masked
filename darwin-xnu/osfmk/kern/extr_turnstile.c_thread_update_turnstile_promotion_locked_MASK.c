
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct turnstile {int ts_priority; int ts_inheritor_links; } ;
typedef int boolean_t ;
struct TYPE_5__ {int inheritor_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int *,int) ;

__attribute__((used)) static boolean_t
FUNC_7(
 thread_t VAR_5,
 struct turnstile *VAR_6)
{
 int VAR_7 = FUNC_3(&(VAR_5->inheritor_queue),
     &(VAR_6->ts_inheritor_links));

 if (VAR_6->ts_priority != VAR_7) {
  FUNC_0(VAR_2,
   (FUNC_1(VAR_3, (VAR_4))) | VAR_0,
   FUNC_5(VAR_5),
   FUNC_2(VAR_6),
   VAR_6->ts_priority,
   VAR_7, 0);
 }

 if (!FUNC_6(&VAR_5->inheritor_queue,
   &VAR_6->ts_inheritor_links, VAR_6->ts_priority)) {
  return VAR_1;
 }


 return FUNC_4(VAR_5);
}
