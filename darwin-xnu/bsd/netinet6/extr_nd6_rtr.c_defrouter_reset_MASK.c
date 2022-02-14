
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_defrouter {int stateflags; int nddr_lock; } ;
typedef int drany ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct nd_defrouter*) ;
 int FUNC_2 (struct nd_defrouter*) ;
 int FUNC_3 (struct nd_defrouter*) ;
 int FUNC_4 (struct nd_defrouter*) ;
 struct nd_defrouter* FUNC_5 (int *) ;
 struct nd_defrouter* FUNC_6 (struct nd_defrouter*,int ) ;
 int FUNC_7 (struct nd_defrouter*,int) ;
 int FUNC_8 (struct nd_defrouter*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_13(void)
{
 struct nd_defrouter *VAR_7, VAR_8;

 FUNC_0(VAR_5, VAR_0);

 VAR_7 = FUNC_5(&VAR_6);
 while (VAR_7) {
  FUNC_2(VAR_7);
  if (VAR_7->stateflags & VAR_1) {
   FUNC_1(VAR_7);
   FUNC_4(VAR_7);
   FUNC_12(VAR_5);
   FUNC_8(VAR_7);
   FUNC_11(VAR_5);
   FUNC_3(VAR_7);
   VAR_7 = FUNC_5(&VAR_6);
  } else {
   FUNC_4(VAR_7);
   VAR_7 = FUNC_6(VAR_7, VAR_2);
  }
 }


 FUNC_7(&VAR_8, sizeof (VAR_8));
 FUNC_10(&VAR_8.nddr_lock, VAR_4, VAR_3);
 FUNC_12(VAR_5);
 FUNC_8(&VAR_8);
 FUNC_9(&VAR_8.nddr_lock, VAR_4);
 FUNC_11(VAR_5);
}
