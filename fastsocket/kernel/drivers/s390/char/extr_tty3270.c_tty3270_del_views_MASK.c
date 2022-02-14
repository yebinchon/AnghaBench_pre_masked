
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {int view; } ;


 int FUNC_0 (struct tty3270*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct tty3270 *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = (struct tty3270 *)
   FUNC_2(&VAR_1, VAR_4 + VAR_0);
  if (!FUNC_0(VAR_3))
   FUNC_1(&VAR_3->view);
 }
}
