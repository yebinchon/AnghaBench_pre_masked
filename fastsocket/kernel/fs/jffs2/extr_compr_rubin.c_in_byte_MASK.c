
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rubin_state {int bit_divider; scalar_t__* bits; } ;


 int FUNC_0 (struct rubin_state*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct rubin_state *VAR_0)
{
 int VAR_1, VAR_2 = 0, VAR_3 = VAR_0->bit_divider;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1++)
  VAR_2 |= FUNC_0(VAR_0, VAR_3 - VAR_0->bits[VAR_1],
     VAR_0->bits[VAR_1]) << VAR_1;

 return VAR_2;
}
