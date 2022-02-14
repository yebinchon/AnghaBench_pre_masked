
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef int ArrayType ;


 int* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

int32
FUNC_7(ArrayType *VAR_2)
{
 int32 VAR_3 = FUNC_1(VAR_2);
 int32 *VAR_4 = FUNC_0(VAR_2);
 int32 VAR_5 = 0;

 if (VAR_3 == 0)
 {
  return 0;
 }


 FUNC_3(VAR_3 == 1);

 VAR_5 = FUNC_2(VAR_3, VAR_4);
 if (VAR_5 <= 0)
 {
  FUNC_4(VAR_1, (FUNC_5(VAR_0),
      FUNC_6("worker array object cannot be empty")));
 }

 return VAR_5;
}
