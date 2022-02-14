
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev {scalar_t__ minor; int mutex; int open; int handle; int exist; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct mousedev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_2->mutex);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->minor == VAR_1)
  FUNC_1();
 else if (!VAR_2->exist)
  VAR_3 = -VAR_0;
 else if (!VAR_2->open++) {
  VAR_3 = FUNC_0(&VAR_2->handle);
  if (VAR_3)
   VAR_2->open--;
 }

 FUNC_3(&VAR_2->mutex);
 return VAR_3;
}
