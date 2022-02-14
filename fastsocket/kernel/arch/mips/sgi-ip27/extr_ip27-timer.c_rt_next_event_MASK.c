
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_4, struct clock_event_device *VAR_5)
{
 unsigned int VAR_6 = FUNC_3();
 int VAR_7 = FUNC_2(VAR_6);
 unsigned long VAR_8;

 VAR_8 = FUNC_0(VAR_3);
 VAR_8 += VAR_4;
 FUNC_1(VAR_2 + VAR_1 * VAR_7, VAR_8);

 return FUNC_0(VAR_3) >= VAR_8 ? -VAR_0 : 0;
}
