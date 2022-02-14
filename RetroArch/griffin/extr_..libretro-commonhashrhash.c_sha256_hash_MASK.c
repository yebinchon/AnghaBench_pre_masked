
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct sha256_ctx {int dummy; } ;


 int FUNC_0 (struct sha256_ctx*,scalar_t__ const*,unsigned int) ;
 int FUNC_1 (struct sha256_ctx*) ;
 int FUNC_2 (struct sha256_ctx*) ;
 int FUNC_3 (struct sha256_ctx*,int *) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;

void FUNC_5(char *VAR_0, const uint8_t *VAR_1, size_t VAR_2)
{
   unsigned VAR_3;
   struct sha256_ctx VAR_4;

   union
   {
      uint32_t u32[8];
      uint8_t u8[32];
   } VAR_5;

   FUNC_2(&VAR_4);
   FUNC_0(&VAR_4, VAR_1, (unsigned)VAR_2);
   FUNC_1(&VAR_4);
   FUNC_3(&VAR_4, VAR_5.u32);

   for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
      FUNC_4(VAR_0 + 2 * VAR_3, 3, "%02x", (unsigned)VAR_5.u8[VAR_3]);
}
