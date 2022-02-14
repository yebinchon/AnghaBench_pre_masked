
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int
FUNC_4(unsigned long VAR_9, struct clock_event_device *VAR_10)
{
 unsigned long VAR_11;
 u32 VAR_12;

 if (VAR_9 == 0)
  return -VAR_4;

 FUNC_1(VAR_11);




 FUNC_3(VAR_2, VAR_0);

 VAR_12 = FUNC_2(VAR_3);
 VAR_12 |= VAR_1;
 FUNC_3(VAR_12, VAR_3);




 FUNC_3(VAR_9, VAR_7);




 VAR_12 = FUNC_2(VAR_8);
 VAR_12 = (VAR_12 & ~VAR_6) | VAR_5;
 FUNC_3(VAR_12, VAR_8);

 FUNC_0(VAR_11);

 return 0;
}
