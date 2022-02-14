
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_initialize {int cdev; } ;


 int FUNC_0 (struct qdio_initialize*) ;
 int FUNC_1 (struct qdio_initialize*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct qdio_initialize *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  FUNC_2(VAR_0->cdev);
 return VAR_1;
}
