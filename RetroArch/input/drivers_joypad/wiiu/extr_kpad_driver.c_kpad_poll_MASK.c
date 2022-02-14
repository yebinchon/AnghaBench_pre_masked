
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kpad ;
typedef scalar_t__ int32_t ;
typedef int KPADData ;


 scalar_t__ FUNC_0 (unsigned int,int *,int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int *,int ,int) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_4(void)
{
   unsigned VAR_2;
   KPADData VAR_3;
   int32_t VAR_4 = 0;

   for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   {
      FUNC_3(&VAR_3, 0, sizeof(VAR_3));

      VAR_4 = FUNC_0(VAR_2, &VAR_3, 1);



      if (VAR_4 == 0)
      {
         VAR_1[VAR_2]++;
         if(VAR_1[VAR_2] > 5)
            FUNC_1(VAR_2);
         continue;
      }
      VAR_1[VAR_2] = 0;

      FUNC_2(VAR_2, &VAR_3);
   }
}
