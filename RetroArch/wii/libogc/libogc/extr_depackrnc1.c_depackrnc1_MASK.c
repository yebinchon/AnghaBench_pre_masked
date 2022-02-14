
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long s32 ;
typedef int huf_table ;
typedef int bit_stream ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 long VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (int *,int,unsigned char**) ;
 unsigned long FUNC_1 (int *,int,int,unsigned char**) ;
 int FUNC_2 (int *,unsigned char**) ;
 int FUNC_3 (int *,unsigned char**) ;
 long FUNC_4 (unsigned char*) ;
 unsigned int FUNC_5 (unsigned char*) ;
 long FUNC_6 (int *,int *,unsigned char**) ;
 int FUNC_7 (int *,int *,unsigned char**) ;
 unsigned int FUNC_8 (unsigned char*,unsigned long) ;

s32 FUNC_9(void *VAR_6,void *VAR_7)
{
    unsigned char *VAR_8 = VAR_6;
    unsigned char *VAR_9 = VAR_7;
    unsigned char *VAR_10, *VAR_11;
    bit_stream VAR_12;
    huf_table VAR_13, VAR_14, VAR_15;
    unsigned long VAR_16;
    unsigned long VAR_17;
    unsigned VAR_18;

    if (FUNC_4(VAR_8) != VAR_4)
 return VAR_0;
    VAR_17 = FUNC_4 (VAR_8+4);
    VAR_11 = VAR_9 + VAR_17;
    VAR_10 = VAR_8 + 18 + FUNC_4(VAR_8+8);

    VAR_8 += 18;





    if (FUNC_8(VAR_8, VAR_10-VAR_8) != FUNC_5(VAR_8-4))
 return VAR_3;
    VAR_18 = FUNC_5(VAR_8-6);

    FUNC_3 (&VAR_12, &VAR_8);
    FUNC_0 (&VAR_12, 2, &VAR_8);




    while (VAR_9 < VAR_11) {
  FUNC_7 (&VAR_13, &VAR_12, &VAR_8);
  FUNC_7 (&VAR_14, &VAR_12, &VAR_8);
  FUNC_7 (&VAR_15, &VAR_12, &VAR_8);
  VAR_16 = FUNC_1 (&VAR_12, 0xFFFF, 16, &VAR_8);

  while (1) {
   long VAR_19, VAR_20;

   VAR_19 = FUNC_6 (&VAR_13, &VAR_12, &VAR_8);
   if (VAR_19 == -1)
   return VAR_2;
   if (VAR_19) {
   while (VAR_19--)
    *VAR_9++ = *VAR_8++;
   FUNC_2 (&VAR_12, &VAR_8);
   }
   if (--VAR_16 <= 0)
   break;

   VAR_20 = FUNC_6 (&VAR_14, &VAR_12, &VAR_8);
   if (VAR_20 == -1)
   return VAR_2;
   VAR_19 = FUNC_6 (&VAR_15, &VAR_12, &VAR_8);
   if (VAR_19 == -1)
   return VAR_2;
   VAR_20 += 1;
   VAR_19 += 2;
   while (VAR_19--) {
   *VAR_9 = VAR_9[-VAR_20];
   VAR_9++;
   }
  }
    }
    if (VAR_11 != VAR_9)
 return VAR_1;

    if (FUNC_8(VAR_11-VAR_17, VAR_17) != VAR_18)
 return VAR_5;

    return VAR_17;
}
