
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PyObject ;


 scalar_t__ FUNC_0 (int *,char*,int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * VAR_2 ;

__attribute__((used)) static PyObject *FUNC_6(PyObject *VAR_3, PyObject *VAR_4)
{
   PyObject *VAR_5 = ((void*)0);
   PyObject *VAR_6;

   if (FUNC_0(VAR_4, "O:set_callback", &VAR_6))
   {
      if (!FUNC_1(VAR_6))
      {
         FUNC_2(VAR_0, "parameter must be callable");
         return ((void*)0);
      }
      FUNC_5(VAR_6);
      FUNC_4(VAR_2);
      VAR_2 = VAR_6;

      FUNC_3(VAR_1);
      VAR_5 = VAR_1;
   }
   return VAR_5;
}
