
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct storage_dio_context {int queue; } ;


 int FUNC_0 (int *) ;
 struct storage_dio_context* VAR_0 ;
 int VAR_1 ;

void FUNC_1()
{
 struct storage_dio_context *VAR_2;
 struct storage_dio_context *VAR_3;

 VAR_3 = VAR_0 + VAR_1;
 for (VAR_2=VAR_0; VAR_2<VAR_3; VAR_2++)
 {
  FUNC_0(&(VAR_2->queue));
 }
}
