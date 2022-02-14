
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (void**) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (void*,int) ;
 void* FUNC_3 (int) ;

bool FUNC_4()
{
 UINT VAR_0, VAR_1, VAR_2, VAR_3;
 void **VAR_4;
 bool VAR_5 = 1;
 UINT VAR_6;

 VAR_1 = 2000;
 VAR_2 = 1000;
 VAR_4 = FUNC_3(sizeof(void *) * VAR_1);
 for (VAR_0 = 0;VAR_0 < VAR_1;VAR_0++)
 {
  VAR_4[VAR_0] = FUNC_3(VAR_2);
  FUNC_1(VAR_4[VAR_0]);
  for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
  {
   ((UCHAR *)VAR_4[VAR_0])[VAR_3] = VAR_3 % 256;
  }
 }
 VAR_6 = VAR_2;
 VAR_2 = VAR_2 * 3;
 for (VAR_0 = 0;VAR_0 < VAR_1;VAR_0++)
 {
  VAR_4[VAR_0] = FUNC_2(VAR_4[VAR_0], VAR_2);
  for (VAR_3 = VAR_6;VAR_3 < VAR_2;VAR_3++)
  {
   FUNC_1((void *)(UINT)(((UCHAR *)VAR_4[VAR_0])[VAR_3] = VAR_3 % 256));
  }
 }
 for (VAR_0 = 0;VAR_0 < VAR_1;VAR_0++)
 {
  for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
  {
   if (((UCHAR *)VAR_4[VAR_0])[VAR_3] != (VAR_3 % 256))
   {
    VAR_5 = 0;
   }
  }
  FUNC_0(VAR_4[VAR_0]);
 }
 FUNC_0(VAR_4);

 return VAR_5;
}
