
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
struct cpuidle_state {int dummy; } ;
struct cpuidle_device {struct cpuidle_state* states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct cpuidle_device *VAR_2,
          struct cpuidle_state *VAR_3)
{
 struct timeval VAR_4, VAR_5;
 int VAR_6;

 FUNC_2();
 FUNC_1(&VAR_4);
 if (VAR_3 == &VAR_2->states[0])

  FUNC_0();
 else if (VAR_3 == &VAR_2->states[1]) {







  FUNC_4(0x7, VAR_0);
  FUNC_0();
 }
 FUNC_1(&VAR_5);
 FUNC_3();
 VAR_6 = (VAR_5.tv_sec - VAR_4.tv_sec) * VAR_1 +
   (VAR_5.tv_usec - VAR_4.tv_usec);
 return VAR_6;
}
