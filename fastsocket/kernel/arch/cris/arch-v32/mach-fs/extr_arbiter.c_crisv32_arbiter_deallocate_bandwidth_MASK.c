
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__** VAR_2 ;
 int FUNC_0 (int,scalar_t__) ;
 scalar_t__** VAR_3 ;

void FUNC_1(int VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;

 VAR_3[VAR_5][VAR_4] = 0;
 VAR_2[VAR_5][VAR_4] = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_7 += VAR_3[VAR_5][VAR_6];

 FUNC_0(VAR_5, VAR_1 - VAR_7);
}
