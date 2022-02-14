
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct nbio_t {int dummy; } ;
typedef int rpng_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nbio_t*) ;
 int FUNC_2 (struct nbio_t*) ;
 void* FUNC_3 (struct nbio_t*,size_t*) ;
 int FUNC_4 (struct nbio_t*) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *,void**,size_t,unsigned int*,unsigned int*) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static bool FUNC_13(const char *VAR_4, uint32_t **VAR_5,
      unsigned *VAR_6, unsigned *VAR_7)
{
   int VAR_8;
   size_t VAR_9;
   bool VAR_10 = 1;
   rpng_t *VAR_11 = ((void*)0);
   void *VAR_12 = ((void*)0);
   struct nbio_t* VAR_13 = (struct nbio_t*)FUNC_5(VAR_4, VAR_3);

   if (!VAR_13)
      goto end;

   FUNC_1(VAR_13);

   while (!FUNC_4(VAR_13));

   VAR_12 = FUNC_3(VAR_13, &VAR_9);

   if (!VAR_12)
   {
      VAR_10 = 0;
      goto end;
   }

   VAR_11 = FUNC_6();

   if (!VAR_11)
   {
      VAR_10 = 0;
      goto end;
   }

   if (!FUNC_11(VAR_11, (uint8_t*)VAR_12))
   {
      VAR_10 = 0;
      goto end;
   }

   if (!FUNC_12(VAR_11))
   {
      VAR_10 = 0;
      goto end;
   }

   while (FUNC_9(VAR_11));

   if (!FUNC_8(VAR_11))
   {
      VAR_10 = 0;
      goto end;
   }

   do
   {
      VAR_8 = FUNC_10(VAR_11,
            (void**)VAR_5, VAR_9, VAR_6, VAR_7);
   }while(VAR_8 == VAR_2);

   if (VAR_8 == VAR_0 || VAR_8 == VAR_1)
      VAR_10 = 0;

end:
   if (VAR_13)
      FUNC_2(VAR_13);
   if (VAR_11)
      FUNC_7(VAR_11);
   VAR_11 = ((void*)0);
   if (!VAR_10)
      FUNC_0(*VAR_5);
   return VAR_10;
}
