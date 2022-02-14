
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18 {int dummy; } ;


 int FUNC_0 (struct cx18*,int,int) ;

__attribute__((used)) static void FUNC_1(struct cx18 *VAR_0, int VAR_1)
{

 int VAR_2 = VAR_1 >> 9;



 if (VAR_2 <= 23)
  VAR_2 = 0;
 else
  VAR_2 -= 23;


 FUNC_0(VAR_0, 0x8d4, 228 - (VAR_2 * 2));
}
