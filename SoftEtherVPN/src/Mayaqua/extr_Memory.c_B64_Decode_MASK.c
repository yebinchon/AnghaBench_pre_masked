
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;
 scalar_t__ VAR_0 ;

int FUNC_1(char *VAR_1, char *VAR_2, int VAR_3)
{
 int VAR_4,VAR_5;
 char VAR_6,VAR_7,VAR_8,VAR_9;
 char *VAR_10;
 int VAR_11,VAR_12,VAR_13,VAR_14;
 VAR_10 = VAR_2;
 VAR_4 = 0;
 VAR_5 = 0;
 while (VAR_0)
 {
  VAR_11 = VAR_12 = VAR_13 = VAR_14 = 0;
  if (VAR_4 >= VAR_3)
  {
   break;
  }
  VAR_11 = 1;
  VAR_6 = FUNC_0(VAR_10[VAR_4]);
  if (VAR_6 == -1)
  {
   VAR_11 = 0;
  }
  if (VAR_4 >= VAR_3 + 1)
  {
   VAR_7 = 0;
  }
  else
  {
   VAR_7 = FUNC_0(VAR_10[VAR_4 + 1]);
   VAR_12 = 1;
   if (VAR_7 == -1)
   {
    VAR_12 = 0;
   }
  }
  if (VAR_4 >= VAR_3 + 2)
  {
   VAR_8 = 0;
  }
  else
  {
   VAR_8 = FUNC_0(VAR_10[VAR_4 + 2]);
   VAR_13 = 1;
   if (VAR_8 == -1)
   {
    VAR_13 = 0;
   }
  }
  if (VAR_4 >= VAR_3 + 3)
  {
   VAR_9 = 0;
  }
  else
  {
   VAR_9 = FUNC_0(VAR_10[VAR_4 + 3]);
   VAR_14 = 1;
   if (VAR_9 == -1)
   {
    VAR_14 = 0;
   }
  }
  if (VAR_11 && VAR_12)
  {
   if (VAR_1)
   {
    VAR_1[VAR_5] = (VAR_6 << 2) + (VAR_7 >> 4);
   }
   VAR_5++;
  }
  if (VAR_12 && VAR_13)
  {
   if (VAR_1)
   {
    VAR_1[VAR_5] = (VAR_7 << 4) + (VAR_8 >> 2);
   }
   VAR_5++;
  }
  if (VAR_13 && VAR_14)
  {
   if (VAR_1)
   {
    VAR_1[VAR_5] = (VAR_8 << 6) + VAR_9;
   }
   VAR_5++;
  }
  VAR_4 += 4;
 }
 return VAR_5;
}
