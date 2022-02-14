
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terratec {int lock; scalar_t__ io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct terratec *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_1 = VAR_1 + (VAR_1 * 32);
 FUNC_0(&VAR_0->lock);
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  if (VAR_1 & (0x80 >> VAR_2))
   FUNC_2(0x80, VAR_0->io + 1);
  else
   FUNC_2(0x00, VAR_0->io + 1);
 }
 FUNC_1(&VAR_0->lock);
}
