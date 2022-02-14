
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
struct turnstile {int ts_priority; int ts_inheritor_links; } ;
typedef int boolean_t ;
struct TYPE_8__ {int inheritor_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int,int,struct turnstile*) ;

__attribute__((used)) static boolean_t
FUNC_11(
 thread_t VAR_8,
 struct turnstile *VAR_9)
{
 boolean_t VAR_10 = VAR_1;


 FUNC_6(VAR_8);

 FUNC_0(VAR_2,
  (FUNC_1(VAR_7, (VAR_6))) | VAR_0,
  FUNC_8(VAR_8),
  FUNC_2(VAR_9),
  VAR_9->ts_priority, 0, 0);

 FUNC_3(&(VAR_9->ts_inheritor_links));
 if (FUNC_4(&VAR_8->inheritor_queue,
   &VAR_9->ts_inheritor_links, VAR_9->ts_priority,
   VAR_3)) {

  VAR_10 = FUNC_7(VAR_8);
 }


 if (!VAR_10) {
  FUNC_10(1,
   FUNC_5(VAR_8) |
   VAR_5 | VAR_4,
   VAR_9);
 }

 FUNC_9(VAR_8);
 return VAR_10;
}
