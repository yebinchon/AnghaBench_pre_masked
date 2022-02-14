
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx18 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (struct cx18*,int) ;

int FUNC_2(struct cx18 *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4 = 0;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 && VAR_4 == 0)
   VAR_4 = VAR_3;
 }

 if (VAR_4 == 0)
  return 0;


 FUNC_1(VAR_1, 1);
 return VAR_4;
}
