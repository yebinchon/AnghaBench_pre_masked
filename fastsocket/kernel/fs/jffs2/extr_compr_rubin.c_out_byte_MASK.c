
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {scalar_t__* bits; scalar_t__ bit_divider; } ;


 int FUNC_0 (struct rubin_state*,scalar_t__,scalar_t__,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct rubin_state *VAR_0, unsigned char VAR_1)
{
 int VAR_2, VAR_3;
 struct rubin_state VAR_4;
 VAR_4 = *VAR_0;

 for (VAR_2=0; VAR_2<8; VAR_2++) {
  VAR_3 = FUNC_0(VAR_0, VAR_0->bit_divider-VAR_0->bits[VAR_2],
        VAR_0->bits[VAR_2], VAR_1 & 1);
  if (VAR_3) {

   *VAR_0 = VAR_4;
   return VAR_3;
  }
  VAR_1 >>= 1 ;
 }
 return 0;
}
