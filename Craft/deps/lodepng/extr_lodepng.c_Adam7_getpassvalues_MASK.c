
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 unsigned int* VAR_1 ;
 unsigned int* VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static void FUNC_0(unsigned VAR_4[7], unsigned VAR_5[7], size_t VAR_6[8],
                                size_t VAR_7[8], size_t VAR_8[8], unsigned VAR_9, unsigned VAR_10, unsigned VAR_11)
{

  unsigned VAR_12;


  for(VAR_12 = 0; VAR_12 < 7; VAR_12++)
  {
    VAR_4[VAR_12] = (VAR_9 + VAR_0[VAR_12] - VAR_2[VAR_12] - 1) / VAR_0[VAR_12];
    VAR_5[VAR_12] = (VAR_10 + VAR_1[VAR_12] - VAR_3[VAR_12] - 1) / VAR_1[VAR_12];
    if(VAR_4[VAR_12] == 0) VAR_5[VAR_12] = 0;
    if(VAR_5[VAR_12] == 0) VAR_4[VAR_12] = 0;
  }

  VAR_6[0] = VAR_7[0] = VAR_8[0] = 0;
  for(VAR_12 = 0; VAR_12 < 7; VAR_12++)
  {

    VAR_6[VAR_12 + 1] = VAR_6[VAR_12]
                            + ((VAR_4[VAR_12] && VAR_5[VAR_12]) ? VAR_5[VAR_12] * (1 + (VAR_4[VAR_12] * VAR_11 + 7) / 8) : 0);

    VAR_7[VAR_12 + 1] = VAR_7[VAR_12] + VAR_5[VAR_12] * ((VAR_4[VAR_12] * VAR_11 + 7) / 8);

    VAR_8[VAR_12 + 1] = VAR_8[VAR_12] + (VAR_5[VAR_12] * VAR_4[VAR_12] * VAR_11 + 7) / 8;
  }
}
