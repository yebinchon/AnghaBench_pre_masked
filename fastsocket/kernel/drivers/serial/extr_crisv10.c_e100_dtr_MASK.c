
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e100_serial {size_t line; } ;
struct TYPE_2__ {unsigned char dtr_mask; int* dtr_shadow; unsigned char* dtr_port; } ;


 unsigned char FUNC_0 (struct e100_serial*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,size_t,int,unsigned char) ;

__attribute__((used)) static inline void
FUNC_4(struct e100_serial *VAR_1, int VAR_2)
{

 unsigned char VAR_3 = VAR_0[VAR_1->line].dtr_mask;
 {
  unsigned long VAR_4;

  FUNC_2(VAR_4);
  *VAR_0[VAR_1->line].dtr_shadow &= ~VAR_3;
  *VAR_0[VAR_1->line].dtr_shadow |= (VAR_2 ? 0 : VAR_3);
  *VAR_0[VAR_1->line].dtr_port = *VAR_0[VAR_1->line].dtr_shadow;
  FUNC_1(VAR_4);
 }







}
