
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int ZIP_PACKER ;
typedef int FIFO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int *) ;

bool FUNC_4(ZIP_PACKER *VAR_0, wchar_t *VAR_1)
{
 FIFO *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_3(VAR_0);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 return FUNC_2(VAR_1, FUNC_0(VAR_2), FUNC_1(VAR_2));
}
