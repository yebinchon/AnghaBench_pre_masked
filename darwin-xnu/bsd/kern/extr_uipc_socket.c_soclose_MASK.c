
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ so_retaincnt; int so_usecount; } ;


 int FUNC_0 (char*,struct socket*,int) ;
 int FUNC_1 (struct socket*,int) ;
 int FUNC_2 (struct socket*,int) ;
 int FUNC_3 (struct socket*) ;

int
FUNC_4(struct socket *VAR_0)
{
 int VAR_1 = 0;
 FUNC_1(VAR_0, 1);

 if (VAR_0->so_retaincnt == 0) {
  VAR_1 = FUNC_3(VAR_0);
 } else {




  VAR_0->so_usecount--;
  if (VAR_0->so_usecount < 2)
   FUNC_0("soclose: retaincnt non null and so=%p "
       "usecount=%d\n", VAR_0, VAR_0->so_usecount);
 }
 FUNC_2(VAR_0, 1);
 return (VAR_1);
}
