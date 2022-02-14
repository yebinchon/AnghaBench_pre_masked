
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_6;

 while (1) {
  int VAR_7;

  VAR_6 = FUNC_1(&VAR_4, VAR_2);
  if (VAR_6 == 0)
   return -VAR_1;

  FUNC_2(&VAR_5);
  VAR_6 = FUNC_0(&VAR_4, ((void*)0), &VAR_7);
  FUNC_3(&VAR_5);

  if (VAR_6 == 0) {
   VAR_6 = VAR_7 & VAR_3;
   break;
  } else if (VAR_6 == -VAR_0) {
   continue;
  } else {
   break;
  }
 }

 return VAR_6;
}
