
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev {scalar_t__ minor; int mutex; int handle; int open; scalar_t__ exist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mousedev *VAR_1)
{
 FUNC_2(&VAR_1->mutex);

 if (VAR_1->minor == VAR_0)
  FUNC_1();
 else if (VAR_1->exist && !--VAR_1->open)
  FUNC_0(&VAR_1->handle);

 FUNC_3(&VAR_1->mutex);
}
