
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e100_serial {size_t line; } ;
struct TYPE_2__ {unsigned char cd_mask; unsigned char* cd_shadow; unsigned char* cd_port; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static inline void
FUNC_2(struct e100_serial *VAR_1, int VAR_2)
{


 {
  unsigned char VAR_3 = VAR_0[VAR_1->line].cd_mask;
  unsigned long VAR_4;

  FUNC_1(VAR_4);
  *VAR_0[VAR_1->line].cd_shadow &= ~VAR_3;
  *VAR_0[VAR_1->line].cd_shadow |= (VAR_2 ? 0 : VAR_3);
  *VAR_0[VAR_1->line].cd_port = *VAR_0[VAR_1->line].cd_shadow;
  FUNC_0(VAR_4);
 }

}
