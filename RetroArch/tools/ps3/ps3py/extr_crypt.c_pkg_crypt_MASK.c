
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int PyObject ;


 int FUNC_0 (int *,char*,int**,int*) ;
 int FUNC_1 (int *,char*,int**,int*,int**,int*,int*) ;
 int * FUNC_2 (int ,int *) ;
 int * FUNC_3 (char*,int*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int) ;
 int FUNC_7 (int*) ;
 int VAR_0 ;

__attribute__((used)) static PyObject* FUNC_8(PyObject *VAR_1, PyObject *VAR_2)
{
   uint8_t *VAR_3, *VAR_4, *VAR_5;
   int VAR_6, VAR_7, VAR_8;
   int VAR_9, VAR_10, VAR_11=0;

   PyObject *VAR_12;
   PyObject *VAR_13;

   if (!FUNC_1(VAR_2, "s#s#i", &VAR_3, &VAR_6, &VAR_4, &VAR_7, &VAR_8))
      return ((void*)0);
   VAR_5 = FUNC_6(VAR_8);
   VAR_9 = VAR_8;

   while (VAR_9 > 0)
   {
      int VAR_14;
      uint8_t *VAR_15;
      int VAR_16 = VAR_9;
      if (VAR_16 > 0x10)
         VAR_16 = 0x10;

      VAR_12 = FUNC_3("(s#)", VAR_3, 0x40);
      VAR_13 = FUNC_2(VAR_0, VAR_12);
      FUNC_4(VAR_12);
      if (!VAR_13)
         return ((void*)0);
      if (!FUNC_0(VAR_13, "s#", &VAR_15, &VAR_14))
         return ((void*)0);

      for(VAR_10 = 0; VAR_10 < VAR_16; VAR_10++)
      {
         VAR_5[VAR_11] = VAR_15[VAR_10] ^ VAR_4[VAR_11];
         VAR_11++;
      }
      FUNC_4(VAR_13);
      FUNC_7(VAR_3);
      VAR_9 -= VAR_16;
   }


   PyObject *VAR_17 = FUNC_3("s#", VAR_5, VAR_8);
   FUNC_5(VAR_5);
   return VAR_17;
}
