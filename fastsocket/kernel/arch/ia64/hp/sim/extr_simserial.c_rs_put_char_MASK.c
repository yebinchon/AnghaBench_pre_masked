
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ driver_data; } ;
struct TYPE_2__ {unsigned char* buf; size_t head; int tail; } ;
struct async_struct {TYPE_1__ xmit; } ;


 scalar_t__ FUNC_0 (size_t,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_1, unsigned char VAR_2)
{
 struct async_struct *VAR_3 = (struct async_struct *)VAR_1->driver_data;
 unsigned long VAR_4;

 if (!VAR_1 || !VAR_3->xmit.buf)
  return 0;

 FUNC_2(VAR_4);
 if (FUNC_0(VAR_3->xmit.head, VAR_3->xmit.tail, VAR_0) == 0) {
  FUNC_1(VAR_4);
  return 0;
 }
 VAR_3->xmit.buf[VAR_3->xmit.head] = VAR_2;
 VAR_3->xmit.head = (VAR_3->xmit.head + 1) & (VAR_0-1);
 FUNC_1(VAR_4);
 return 1;
}
