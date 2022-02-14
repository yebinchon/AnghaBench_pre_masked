
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cadet {int lock; scalar_t__ io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cadet *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->lock);
 FUNC_2(7, VAR_0->io);
 if (VAR_1 > 0)
  FUNC_2(0x20, VAR_0->io + 1);
 else
  FUNC_2(0x00, VAR_0->io + 1);
 FUNC_1(&VAR_0->lock);
}
