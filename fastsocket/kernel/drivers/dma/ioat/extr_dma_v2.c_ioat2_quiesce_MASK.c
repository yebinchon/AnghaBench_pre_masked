
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ioat_chan_common {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ioat_chan_common*) ;
 int FUNC_2 (struct ioat_chan_common*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

int FUNC_6(struct ioat_chan_common *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4 = VAR_1 + VAR_3;
 int VAR_5 = 0;
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 if (FUNC_3(VAR_6) || FUNC_4(VAR_6))
  FUNC_2(VAR_2);
 while (FUNC_3(VAR_6) || FUNC_4(VAR_6)) {
  if (VAR_3 && FUNC_5(VAR_1, VAR_4)) {
   VAR_5 = -VAR_0;
   break;
  }
  VAR_6 = FUNC_1(VAR_2);
  FUNC_0();
 }

 return VAR_5;
}
