
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;
 int FUNC_0 (unsigned int*,unsigned int*,size_t*,size_t*,size_t*,unsigned int,unsigned int,unsigned int) ;
 unsigned char FUNC_1 (size_t*,unsigned char const*) ;
 int FUNC_2 (size_t*,unsigned char*,unsigned char) ;

__attribute__((used)) static void FUNC_3(unsigned char* VAR_4, const unsigned char* VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
  unsigned VAR_9[7], VAR_10[7];
  size_t VAR_11[8], VAR_12[8], VAR_13[8];
  unsigned VAR_14;

  FUNC_0(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_6, VAR_7, VAR_8);

  if(VAR_8 >= 8)
  {
    for(VAR_14 = 0; VAR_14 < 7; VAR_14++)
    {
      unsigned VAR_15, VAR_16, VAR_17;
      size_t VAR_18 = VAR_8 / 8;
      for(VAR_16 = 0; VAR_16 < VAR_10[VAR_14]; VAR_16++)
      for(VAR_15 = 0; VAR_15 < VAR_9[VAR_14]; VAR_15++)
      {
        size_t VAR_19 = ((VAR_3[VAR_14] + VAR_16 * VAR_1[VAR_14]) * VAR_6 + VAR_2[VAR_14] + VAR_15 * VAR_0[VAR_14]) * VAR_18;
        size_t VAR_20 = VAR_13[VAR_14] + (VAR_16 * VAR_9[VAR_14] + VAR_15) * VAR_18;
        for(VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
        {
          VAR_4[VAR_20 + VAR_17] = VAR_5[VAR_19 + VAR_17];
        }
      }
    }
  }
  else
  {
    for(VAR_14 = 0; VAR_14 < 7; VAR_14++)
    {
      unsigned VAR_21, VAR_22, VAR_23;
      unsigned VAR_24 = VAR_8 * VAR_9[VAR_14];
      unsigned VAR_25 = VAR_8 * VAR_6;
      size_t VAR_26, VAR_27;
      for(VAR_22 = 0; VAR_22 < VAR_10[VAR_14]; VAR_22++)
      for(VAR_21 = 0; VAR_21 < VAR_9[VAR_14]; VAR_21++)
      {
        VAR_27 = (VAR_3[VAR_14] + VAR_22 * VAR_1[VAR_14]) * VAR_25 + (VAR_2[VAR_14] + VAR_21 * VAR_0[VAR_14]) * VAR_8;
        VAR_26 = (8 * VAR_13[VAR_14]) + (VAR_22 * VAR_24 + VAR_21 * VAR_8);
        for(VAR_23 = 0; VAR_23 < VAR_8; VAR_23++)
        {
          unsigned char VAR_28 = FUNC_1(&VAR_27, VAR_5);
          FUNC_2(&VAR_26, VAR_4, VAR_28);
        }
      }
    }
  }
}
