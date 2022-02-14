
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int byte ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int *,int *,int) ;
 int ** VAR_2 ;

void
FUNC_3
( int VAR_3,
  int VAR_4,
  int VAR_5,
  int VAR_6,
  int VAR_7,
  byte* VAR_8 )
{
    byte* VAR_9;
    FUNC_1 (VAR_3, VAR_4, VAR_6, VAR_7);

    VAR_9 = VAR_2[VAR_5] + VAR_4*VAR_1+VAR_3;

    while (VAR_7--)
    {
 FUNC_2 (VAR_9, VAR_8, VAR_6);
 VAR_8 += VAR_6;
 VAR_9 += VAR_1;
    }
}
