
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int** VAR_3 ;
 int FUNC_0 (int,unsigned long) ;
 int FUNC_1 () ;
 unsigned long* VAR_4 ;
 int** VAR_5 ;

int FUNC_2(int VAR_6, int VAR_7,
           unsigned long VAR_8)
{
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12;

 FUNC_1();

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  VAR_10 += VAR_5[VAR_7][VAR_9];
  VAR_11 += VAR_3[VAR_7][VAR_9];
 }


 VAR_12 = VAR_8 == 0
     ? 0 : VAR_2 / (VAR_4[VAR_7] / VAR_8);
 if (VAR_10 + VAR_12 > VAR_2)
  return -VAR_0;

 VAR_3[VAR_7][VAR_6] = 1;
 VAR_5[VAR_7][VAR_6] = VAR_12;
 FUNC_0(VAR_7, VAR_2 - VAR_10);

 return 0;
}
