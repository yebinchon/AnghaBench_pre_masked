
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int writewordfunc ;
typedef int writelongfunc ;
typedef int writebytefunc ;
typedef int readwordfunc ;
typedef int readlongfunc ;
typedef int readbytefunc ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void FUNC_0(unsigned short VAR_6, unsigned short VAR_7,
                           readbytefunc VAR_8, readwordfunc VAR_9,
                           readlongfunc VAR_10, writebytefunc VAR_11,
                           writewordfunc VAR_12, writelongfunc VAR_13)
{
   int VAR_14;

   for (VAR_14=VAR_6; VAR_14 < (VAR_7+1); VAR_14++)
   {
      VAR_0[VAR_14] = VAR_8;
      VAR_2[VAR_14] = VAR_9;
      VAR_1[VAR_14] = VAR_10;
      VAR_3[VAR_14] = VAR_11;
      VAR_5[VAR_14] = VAR_12;
      VAR_4[VAR_14] = VAR_13;
   }
}
