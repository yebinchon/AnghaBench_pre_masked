
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_desc {int status; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int,struct irq_desc*) ;
 int FUNC_6 (int) ;
 struct irq_desc* VAR_2 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;

void FUNC_9(int VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_7(FUNC_0(VAR_3)) & FUNC_7(FUNC_4(VAR_3));
 VAR_4 |= FUNC_7(FUNC_1(VAR_3)) & FUNC_7(FUNC_2(VAR_3));

 for (VAR_5 = VAR_3; VAR_5 < VAR_3 + 8; VAR_5++) {
  int VAR_6 = FUNC_6(VAR_5);
  struct irq_desc *VAR_7 = VAR_2 + VAR_6;

  if (!(VAR_4 & (1 << (VAR_5 & 31))))
   continue;

  if ((VAR_7->status & VAR_1) == VAR_0) {

   u32 VAR_8;

   VAR_8 = FUNC_7(FUNC_3(VAR_5));
   VAR_8 ^= 1 << (VAR_5 & 31);
   FUNC_8(VAR_8, FUNC_3(VAR_5));
  }
  FUNC_5(VAR_6, VAR_7);
 }
}
