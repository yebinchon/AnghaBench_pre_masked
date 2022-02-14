
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbuf {struct lbuf* l_redrive_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct lbuf*) ;
 struct lbuf* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

int FUNC_10(void *VAR_5)
{
 struct lbuf *VAR_6;

 do {
  FUNC_8(&VAR_4);
  while ((VAR_6 = VAR_3)) {
   VAR_3 = VAR_6->l_redrive_next;
   VAR_6->l_redrive_next = ((void*)0);
   FUNC_9(&VAR_4);
   FUNC_4(VAR_6);
   FUNC_8(&VAR_4);
  }

  if (FUNC_1(VAR_2)) {
   FUNC_9(&VAR_4);
   FUNC_5();
  } else {
   FUNC_7(VAR_0);
   FUNC_9(&VAR_4);
   FUNC_6();
   FUNC_0(VAR_1);
  }
 } while (!FUNC_3());

 FUNC_2("jfsIOWait being killed!");
 return 0;
}
