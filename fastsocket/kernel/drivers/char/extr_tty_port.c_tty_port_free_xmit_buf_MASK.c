
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int mutex; int * xmit_buf; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct tty_port *VAR_0)
{
 FUNC_1(&VAR_0->mutex);
 if (VAR_0->xmit_buf != ((void*)0)) {
  FUNC_0((unsigned long)VAR_0->xmit_buf);
  VAR_0->xmit_buf = ((void*)0);
 }
 FUNC_2(&VAR_0->mutex);
}
