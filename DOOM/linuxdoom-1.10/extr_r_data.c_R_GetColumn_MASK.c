
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int** VAR_1 ;
 int** VAR_2 ;
 int ** VAR_3 ;
 int* VAR_4 ;

byte*
FUNC_2
( int VAR_5,
  int VAR_6 )
{
    int VAR_7;
    int VAR_8;

    VAR_6 &= VAR_4[VAR_5];
    VAR_7 = VAR_1[VAR_5][VAR_6];
    VAR_8 = VAR_2[VAR_5][VAR_6];

    if (VAR_7 > 0)
 return (byte *)FUNC_1(VAR_7,VAR_0)+VAR_8;

    if (!VAR_3[VAR_5])
 FUNC_0 (VAR_5);

    return VAR_3[VAR_5] + VAR_8;
}
