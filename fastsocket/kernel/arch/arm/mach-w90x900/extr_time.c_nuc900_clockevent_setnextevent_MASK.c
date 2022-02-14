
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_5,
  struct clock_event_device *VAR_6)
{
 unsigned int VAR_7;

 FUNC_1(VAR_5, VAR_4);

 VAR_7 = FUNC_0(VAR_3);
 VAR_7 |= (VAR_0 | VAR_1 | VAR_2);
 FUNC_1(VAR_7, VAR_3);

 return 0;
}
