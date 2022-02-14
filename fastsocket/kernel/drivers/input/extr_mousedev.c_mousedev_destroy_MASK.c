
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev {scalar_t__ minor; int dev; int handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mousedev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mousedev *VAR_1)
{
 FUNC_0(&VAR_1->dev);
 FUNC_2(VAR_1);
 if (VAR_1->minor != VAR_0)
  FUNC_1(&VAR_1->handle);
 FUNC_3(&VAR_1->dev);
}
