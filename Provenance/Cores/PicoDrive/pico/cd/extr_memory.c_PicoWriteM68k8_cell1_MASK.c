
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int** word_ram1M; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_1, u32 VAR_2)
{
  VAR_1 = (VAR_1&3) | (FUNC_0(VAR_1 >> 2) << 2);
  VAR_0->word_ram1M[1][VAR_1 ^ 1] = VAR_2;
}
