
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int hw_stopped; int stopped; scalar_t__ driver_data; } ;
struct TYPE_2__ {int head; int tail; scalar_t__ buf; } ;
struct async_struct {TYPE_1__ xmit; } ;


 scalar_t__ FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (scalar_t__,unsigned char const*,int) ;
 int VAR_1 ;
 int FUNC_5 (struct async_struct*,int *) ;

__attribute__((used)) static int FUNC_6(struct tty_struct * VAR_2,
      const unsigned char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct async_struct *VAR_7 = (struct async_struct *)VAR_2->driver_data;
 unsigned long VAR_8;

 if (!VAR_2 || !VAR_7->xmit.buf || !VAR_1) return 0;

 FUNC_3(VAR_8);
 while (1) {
  VAR_5 = FUNC_1(VAR_7->xmit.head, VAR_7->xmit.tail, VAR_0);
  if (VAR_4 < VAR_5)
   VAR_5 = VAR_4;
  if (VAR_5 <= 0) {
   break;
  }
  FUNC_4(VAR_7->xmit.buf + VAR_7->xmit.head, VAR_3, VAR_5);
  VAR_7->xmit.head = ((VAR_7->xmit.head + VAR_5) &
       (VAR_0-1));
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
  VAR_6 += VAR_5;
 }
 FUNC_2(VAR_8);



 if (FUNC_0(VAR_7->xmit.head, VAR_7->xmit.tail, VAR_0)
     && !VAR_2->stopped && !VAR_2->hw_stopped) {
  FUNC_5(VAR_7, ((void*)0));
 }
 return VAR_6;
}
