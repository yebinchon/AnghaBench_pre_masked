
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ccv_dense_matrix_t ;
typedef int FILE ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int *,int *,void*) ;
 int FUNC_1 (int *,int *,void*) ;
 int FUNC_2 (int *,int *,void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;

int FUNC_6(ccv_dense_matrix_t* VAR_3, char* VAR_4, int* VAR_5, int VAR_6, void* VAR_7)
{
 FILE* VAR_8 = 0;
 if (VAR_6 & VAR_0)
 {
  VAR_8 = FUNC_5(VAR_4, "wb");
  if (!VAR_8)
   return VAR_1;
 }
 switch (VAR_6)
 {
  case 129:





   FUNC_3(0 && "ccv_write requires libjpeg support for JPEG format");

   break;
  case 128:





   FUNC_3(0 && "ccv_write requires libpng support for PNG format");

   break;
  case 130:
   FUNC_0(VAR_3, VAR_8, VAR_7);
   if (VAR_5 != 0)
    *VAR_5 = 0;
   break;
 }
 if (VAR_6 & VAR_0)
  FUNC_4(VAR_8);
 return VAR_2;
}
