
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_chan_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ioat_chan_common*) ;
 scalar_t__ FUNC_2 (struct ioat_chan_common*) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(struct ioat_chan_common *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_1 + VAR_3;
 int VAR_5 = 0;

 FUNC_1(VAR_2);
 while (FUNC_2(VAR_2)) {
  if (VAR_4 && FUNC_3(VAR_1, VAR_4)) {
   VAR_5 = -VAR_0;
   break;
  }
  FUNC_0();
 }

 return VAR_5;
}
