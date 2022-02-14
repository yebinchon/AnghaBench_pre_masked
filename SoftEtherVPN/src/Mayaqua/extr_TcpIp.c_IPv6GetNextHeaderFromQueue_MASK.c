
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
typedef int QUEUE ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;

UCHAR FUNC_2(QUEUE *VAR_1)
{
 UINT *VAR_2;
 UCHAR VAR_3 = 0;

 if (VAR_1 == ((void*)0))
 {
  return VAR_0;
 }

 VAR_2 = (UINT *)FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0))
 {
  VAR_3 = (UCHAR)(*VAR_2);
  FUNC_0(VAR_2);
 }

 return VAR_3;
}
