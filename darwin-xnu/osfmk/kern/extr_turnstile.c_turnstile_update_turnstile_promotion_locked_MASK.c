
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_priority; int ts_inheritor_links; int ts_inheritor_queue; } ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,int,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct turnstile*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct turnstile*) ;

__attribute__((used)) static boolean_t
FUNC_6(
 struct turnstile *VAR_5,
 struct turnstile *VAR_6)
{
 int VAR_7;
 VAR_7 = FUNC_3(&(VAR_5->ts_inheritor_queue),
     &(VAR_6->ts_inheritor_links));

 if (VAR_6->ts_priority != VAR_7) {
  FUNC_0(VAR_2,
   (FUNC_1(VAR_3, (VAR_4))) | VAR_0,
   FUNC_2(VAR_5),
   FUNC_2(VAR_6),
   VAR_6->ts_priority, VAR_7, 0);
 }

 if (!FUNC_4(
   &VAR_5->ts_inheritor_queue, &VAR_6->ts_inheritor_links,
   VAR_6->ts_priority)) {
  return VAR_1;
 }


 return FUNC_5(VAR_5);
}
