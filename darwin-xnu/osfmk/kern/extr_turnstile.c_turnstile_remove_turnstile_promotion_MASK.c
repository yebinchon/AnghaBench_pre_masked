
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct turnstile {int ts_waitq; scalar_t__ ts_inheritor; int ts_inheritor_links; int ts_inheritor_queue; } ;
typedef int boolean_t ;


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
 int VAR_8 ;
 int FUNC_2 (struct turnstile*) ;
 scalar_t__ FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (struct turnstile*) ;
 int FUNC_5 (int,int,struct turnstile*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static boolean_t
FUNC_8(
 struct turnstile *VAR_9,
 struct turnstile *VAR_10)
{
 boolean_t VAR_11 = VAR_1;


 FUNC_6(&VAR_9->ts_waitq);

 FUNC_0(VAR_2,
  (FUNC_1(VAR_7, (VAR_8))) | VAR_0,
  FUNC_2(VAR_9),
  FUNC_2(VAR_10),
  0, 0, 0);

 if (FUNC_3(&VAR_9->ts_inheritor_queue,
   &VAR_10->ts_inheritor_links,
   VAR_3)) {

  VAR_11 = FUNC_4(VAR_9);
 }


 if (!VAR_11) {
  FUNC_5(1,
   (VAR_9->ts_inheritor ? VAR_5 : VAR_4) |
   VAR_6, VAR_10);
 }

 FUNC_7(&VAR_9->ts_waitq);
 return VAR_11;
}
