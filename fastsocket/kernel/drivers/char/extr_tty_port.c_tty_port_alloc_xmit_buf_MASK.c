
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {unsigned char* xmit_buf; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct tty_port *VAR_2)
{

 FUNC_1(&VAR_2->mutex);
 if (VAR_2->xmit_buf == ((void*)0))
  VAR_2->xmit_buf = (unsigned char *)FUNC_0(VAR_1);
 FUNC_2(&VAR_2->mutex);
 if (VAR_2->xmit_buf == ((void*)0))
  return -VAR_0;
 return 0;
}
