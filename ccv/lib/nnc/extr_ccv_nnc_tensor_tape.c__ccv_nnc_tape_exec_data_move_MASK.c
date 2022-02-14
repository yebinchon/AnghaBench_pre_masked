
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const,int const) ;

__attribute__((used)) static void FUNC_2(uint64_t* const VAR_0, uint64_t* const VAR_1, const int VAR_2, const uint64_t* const VAR_3, const int VAR_4, const int* const VAR_5, const int VAR_6)
{
 int VAR_7;
 if (VAR_2 == FUNC_1(VAR_6, VAR_4) - 1)
 {
  const int VAR_8 = VAR_2 < VAR_6 ? VAR_5[VAR_2] - 1 : 0;
  const int VAR_9 = VAR_2 < VAR_4 ? VAR_3[VAR_2] : 0;
  FUNC_0(VAR_0 <= VAR_1);

  if (!VAR_0)
   for (VAR_7 = FUNC_1(VAR_8, VAR_9); VAR_7 >= 0; VAR_7--)
    VAR_1[VAR_7] = 0;
  else {
   for (VAR_7 = VAR_9; VAR_7 > VAR_8; VAR_7--)
    VAR_1[VAR_7] = 0;
   for (VAR_7 = VAR_8; VAR_7 >= 0; VAR_7--)
    VAR_1[VAR_7] = VAR_0[VAR_7];
  }
 } else {
  int VAR_10 = 1;
  for (VAR_7 = VAR_2 + 1; VAR_7 < VAR_6; VAR_7++)
   VAR_10 *= VAR_5[VAR_7];
  const int VAR_11 = FUNC_1(VAR_4, VAR_6);
  int VAR_12 = 1;
  for (VAR_7 = VAR_2 + 1; VAR_7 < VAR_11; VAR_7++)
  {
   int VAR_13 = (VAR_7 < VAR_6) ? VAR_5[VAR_7] : 1;
   int VAR_14 = (VAR_7 < VAR_4) ? (int)(VAR_3[VAR_7] + 1) : 1;
   VAR_12 *= FUNC_1(VAR_13, VAR_14);
  }
  const int VAR_15 = VAR_2 < VAR_6 ? VAR_5[VAR_2] - 1 : 0;
  const int VAR_16 = VAR_2 < VAR_4 ? VAR_3[VAR_2] : 0;
  for (VAR_7 = FUNC_1(VAR_15, VAR_16); VAR_7 >= 0; VAR_7--)
   FUNC_2((VAR_0 && VAR_2 < VAR_6 && VAR_7 < VAR_5[VAR_2]) ? VAR_0 + VAR_7 * VAR_10 : 0, VAR_1 + VAR_7 * VAR_12, VAR_2 + 1, VAR_3, VAR_4, VAR_5, VAR_6);
 }
}
