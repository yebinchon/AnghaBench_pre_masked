
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned char const*,int) ;
 unsigned int FUNC_1 (unsigned char const*,int,unsigned char const*) ;
 size_t FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (unsigned char*,unsigned char,unsigned int) ;

size_t FUNC_5(const unsigned char *VAR_0, void *VAR_1, size_t VAR_2, size_t VAR_3, unsigned char *VAR_4, const unsigned char *VAR_5[])
{
 const unsigned char *VAR_6 = (const unsigned char*)VAR_0;
 unsigned char *VAR_7 = (unsigned char*)VAR_1;
 const unsigned char *VAR_8 = VAR_6;
 unsigned char *VAR_9 = VAR_7;
 const unsigned char* VAR_10 = VAR_7 + VAR_2;
 unsigned int VAR_11 = 1;
 const unsigned int VAR_12[16] = {4, 0, 1, 0, 2, 0, 1, 0, 3, 0, 1, 0, 2, 0, 1, 0};
 const unsigned char *VAR_13 = VAR_10 - 4;
 unsigned char *VAR_14 = VAR_7 + 3;

 VAR_4 = VAR_4;
 VAR_14 = VAR_14;
 VAR_5 = VAR_5;


 if (VAR_9 >= VAR_13)
 {
  VAR_8 += 4;
  while(VAR_9 < VAR_10)
  {
   *VAR_9 = *VAR_8;
   VAR_9++;
   VAR_8++;
  }

  return (unsigned int)(VAR_9 - VAR_7);
 }


 for(;;)
 {
  unsigned int VAR_15;

  if (VAR_11 == 1)
  {

   VAR_11 = FUNC_1(VAR_8, 4, VAR_6 + VAR_3) | (1U << 31);
   VAR_8 += 4;
  }

  VAR_15 = FUNC_1(VAR_8, 4, VAR_6 + VAR_3);


  if ((VAR_11 & 1) == 1)
  {
   unsigned int VAR_16;


   unsigned int VAR_17;
   const unsigned char *VAR_18;

   VAR_11 = VAR_11 >> 1;

   if((VAR_15 & 0xf) != 15)
   {
    VAR_17 = (VAR_15 >> 4) & 0xfff;
    VAR_18 = VAR_5[VAR_17];

    if((VAR_15 & 0xf) != 0)
    {
     VAR_16 = (VAR_15 & 0xf);
     VAR_8 += 2;
    }
    else if((VAR_15 & 0x00ff0000) != 0)
    {
     VAR_16 = *(VAR_8 + 2);
     VAR_8 += 3;
    }
    else
    {
     VAR_16 = FUNC_0(VAR_8 + 3, 4);
     VAR_8 += 7;
    }
    FUNC_3(VAR_9, VAR_18, VAR_16);
    while(VAR_14 < VAR_9)
    {
     VAR_14++;
     VAR_5[FUNC_2(FUNC_0(VAR_14, 4))] = VAR_14;
    }
    VAR_9 += VAR_16;
    VAR_14 = VAR_9 - 1;
   }
   else
   {

    unsigned char VAR_19;
    VAR_19 = (unsigned char)(VAR_15 >> 16);
    VAR_16 = ((VAR_15 >> 4) & 0xfff);

    if(VAR_16 != 0)
     VAR_8 += 3;
    else
    {
     VAR_16 = FUNC_1(VAR_8 + 3, 4, VAR_6 + VAR_3);
     VAR_8 += 7;
    }





    FUNC_4(VAR_9, VAR_19, VAR_16);


    while(VAR_14 < VAR_9 - 1)
    {
     VAR_14++;
     VAR_5[FUNC_2(FUNC_0(VAR_14, 4))] = VAR_14;
    }
    VAR_14 = VAR_9 - 1 + VAR_16;

    VAR_9 += VAR_16;
   }
  }
  else
  {





   FUNC_3(VAR_9, VAR_8, 4);

   VAR_9 += VAR_12[VAR_11 & 0xf];
   VAR_8 += VAR_12[VAR_11 & 0xf];
   VAR_11 = VAR_11 >> (VAR_12[VAR_11 & 0xf]);


   while(VAR_14 < VAR_9 - 3)
   {
    VAR_14++;
    VAR_5[FUNC_2(FUNC_0(VAR_14, 4))] = VAR_14;
   }

   if (VAR_9 >= VAR_13)
   {

    while(VAR_9 < VAR_10)
    {
     if (VAR_11 == 1)
     {
      VAR_8 += 4;
      VAR_11 = 1U << 31;
     }
     if (1 > VAR_7 + VAR_2 - VAR_9)
      return 0;

     *VAR_9 = *VAR_8;
     VAR_9++;
     VAR_8++;
     VAR_11 = VAR_11 >> 1;
    }


    while(VAR_14 < VAR_10 - 4)
    {
     VAR_14++;
     VAR_5[FUNC_2(FUNC_0(VAR_14, 4))] = VAR_14;
    }

    if((VAR_8 - 1) - VAR_6 > 8)
     return 0;
    else if(VAR_9 - VAR_7 - VAR_2 == 0)
     return VAR_2;
    else
     return 0;
   }
  }
 }
}
