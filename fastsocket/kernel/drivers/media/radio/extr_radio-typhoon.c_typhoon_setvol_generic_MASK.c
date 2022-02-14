
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int lock; scalar_t__ io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct typhoon *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_1 >>= 14;
 VAR_1 &= 3;
 FUNC_2(VAR_1 / 2, VAR_0->io);
 FUNC_2(VAR_1 % 2, VAR_0->io + 2);
 FUNC_1(&VAR_0->lock);
}
