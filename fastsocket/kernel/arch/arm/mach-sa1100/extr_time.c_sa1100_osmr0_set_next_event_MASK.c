
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int
FUNC_2(unsigned long VAR_6, struct clock_event_device *VAR_7)
{
 unsigned long VAR_8, VAR_9, VAR_10;

 FUNC_1(VAR_8);
 VAR_2 |= VAR_3;
 VAR_9 = VAR_4 + VAR_6;
 VAR_5 = VAR_9;
 VAR_10 = VAR_4;
 FUNC_0(VAR_8);

 return (signed)(VAR_9 - VAR_10) <= VAR_1 ? -VAR_0 : 0;
}
