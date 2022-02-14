
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sha256_ctx {int * h; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct sha256_ctx *VAR_0, uint32_t *VAR_1)
{
   unsigned VAR_2;
   for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
      FUNC_0(VAR_1++, VAR_0->h[VAR_2]);
}
