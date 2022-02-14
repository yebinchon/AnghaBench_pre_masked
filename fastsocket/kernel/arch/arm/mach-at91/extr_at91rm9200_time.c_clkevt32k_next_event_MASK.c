
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct clock_event_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(unsigned long VAR_2, struct clock_event_device *VAR_3)
{
 unsigned long VAR_4;
 u32 VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_2 < 2);


 FUNC_6(VAR_4);
 FUNC_1(!FUNC_4(VAR_4));
 VAR_5 = FUNC_7();


 FUNC_3(VAR_0, VAR_5);
 (void) FUNC_2(VAR_1);


 VAR_5 += VAR_2;
 FUNC_3(VAR_0, VAR_5);

 FUNC_5(VAR_4);
 return VAR_6;
}
