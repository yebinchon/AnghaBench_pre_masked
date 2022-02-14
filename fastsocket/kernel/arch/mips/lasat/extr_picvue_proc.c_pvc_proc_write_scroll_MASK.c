
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const*,int *,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_4, const char *VAR_5,
      unsigned long VAR_6, void *VAR_7)
{
 int VAR_8 = VAR_6;
 int VAR_9 = FUNC_4(VAR_5, ((void*)0), 10);

 FUNC_2(&VAR_0);
 if (VAR_2 != 0)
  FUNC_1(&VAR_3);

 if (VAR_9 == 0) {
  VAR_1 = 0;
  VAR_2 = 0;
 } else {
  if (VAR_9 < 0) {
   VAR_1 = -1;
   VAR_2 = -VAR_9;
  } else {
   VAR_1 = 1;
   VAR_2 = VAR_9;
  }
  FUNC_0(&VAR_3);
 }
 FUNC_3(&VAR_0);

 return VAR_8;
}
