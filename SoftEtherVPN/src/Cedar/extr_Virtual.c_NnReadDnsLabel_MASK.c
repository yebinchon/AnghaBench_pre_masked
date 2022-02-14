
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UCHAR ;
typedef int BUF ;


 int FUNC_0 (int *,int*,int) ;

bool FUNC_1(BUF *VAR_0)
{
 UCHAR VAR_1;
 UCHAR VAR_2[256];

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

LABEL_START:

 if (FUNC_0(VAR_0, &VAR_1, 1) != 1)
 {
  return 0;
 }

 if (VAR_1 == 0)
 {
  return 1;
 }

 if (VAR_1 & 0xC0)
 {

  if (FUNC_0(VAR_0, &VAR_1, 1) != 1)
  {
   return 0;
  }
  else
  {
   return 1;
  }
 }
 else
 {

  if (FUNC_0(VAR_0, VAR_2, VAR_1) != VAR_1)
  {
   return 0;
  }
  else
  {
   goto LABEL_START;
  }
 }

}
