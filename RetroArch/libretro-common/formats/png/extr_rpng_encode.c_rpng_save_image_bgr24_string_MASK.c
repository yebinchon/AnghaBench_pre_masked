
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
typedef int intfstream_t ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int const*,int *,unsigned int,unsigned int,int,int) ;

uint8_t* FUNC_8(const uint8_t *VAR_4,
      unsigned VAR_5, unsigned VAR_6, signed VAR_7, uint64_t* VAR_8)
{
   bool VAR_9 = 0;
   uint8_t* VAR_10 = ((void*)0);
   uint8_t* VAR_11 = ((void*)0);
   int VAR_12 = 0;
   intfstream_t* VAR_13 = ((void*)0);

   VAR_12 = (int)(VAR_5*VAR_6*3*VAR_0)+VAR_1;
   VAR_10 = (uint8_t*)FUNC_6(VAR_12*sizeof(uint8_t));
   if (!VAR_10)
      FUNC_0();

   VAR_13 = FUNC_3(VAR_10,
         VAR_3,
         VAR_2,
         VAR_12);

   VAR_9 = FUNC_7((const uint8_t*)VAR_4,
            VAR_13, VAR_5, VAR_6, VAR_7, 3);

   *VAR_8 = FUNC_2(VAR_13);
   FUNC_5(VAR_13);
   VAR_11 = (uint8_t*)FUNC_6((*VAR_8)*sizeof(uint8_t));
   if (!VAR_11)
      FUNC_0();
   FUNC_4(VAR_13, VAR_11, *VAR_8);

end:
   if (VAR_10)
      FUNC_1(VAR_10);
   if (VAR_13)
      FUNC_1(VAR_13);
   if (VAR_9 == 0)
   {
      if (VAR_11)
         FUNC_1(VAR_11);
      return ((void*)0);
   }
   return VAR_11;
}
