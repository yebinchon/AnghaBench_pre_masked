
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,unsigned char*,unsigned int) ;
 int VAR_7 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static __inline__ unsigned int FUNC_5(int VAR_9, unsigned char *VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12 = VAR_11;
 unsigned long VAR_13 = 0;
 unsigned int VAR_14;
 unsigned long VAR_15;
 int VAR_16 = VAR_4;


 FUNC_2(&VAR_8, VAR_13);
 while(VAR_11 && VAR_16)
 {
  VAR_14 = FUNC_0(VAR_9 + VAR_2);
  if(VAR_6 && VAR_14 > 3)
  {
   FUNC_1(VAR_9 + VAR_1, VAR_10, VAR_14 >> 2);
   VAR_10 += VAR_14 & 0xFC;
   VAR_11 -= VAR_14 & 0xFC;
  }
  else if(VAR_14 > 0)
  {
   VAR_11 -= VAR_14;
   for(; VAR_14 > 0; VAR_14--)
    *(VAR_10++) = FUNC_0(VAR_9 + VAR_1);
  }
  else
  {
   VAR_15 = VAR_7 + VAR_16;
   FUNC_3(&VAR_8, VAR_13);
   while(FUNC_4(VAR_7, VAR_15) && (FUNC_0(VAR_9 + VAR_3) & VAR_0) && VAR_16)
    if(FUNC_0(VAR_9 + VAR_3) & VAR_5)
     VAR_16 = 0;
   FUNC_2(&VAR_8, VAR_13);
   if(FUNC_0(VAR_9 + VAR_3) & VAR_0)
    VAR_16 = 0;
  }
 }
 FUNC_3(&VAR_8, VAR_13);
 return VAR_12 - VAR_11;
}
