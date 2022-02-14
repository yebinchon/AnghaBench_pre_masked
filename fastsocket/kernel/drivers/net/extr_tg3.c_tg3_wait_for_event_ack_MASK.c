
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ last_event_jiffies; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned int) ;

__attribute__((used)) static void FUNC_4(struct tg3 *VAR_4)
{
 int VAR_5;
 unsigned int VAR_6;
 long VAR_7;


 VAR_7 = (long)(VAR_4->last_event_jiffies + 1 +
        FUNC_3(VAR_2)) -
        (long)VAR_3;
 if (VAR_7 < 0)
  return;


 VAR_6 = FUNC_0(VAR_7);
 if (VAR_6 > VAR_2)
  VAR_6 = VAR_2;
 VAR_6 = (VAR_6 >> 3) + 1;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  if (!(FUNC_1(VAR_1) & VAR_0))
   break;
  FUNC_2(8);
 }
}
