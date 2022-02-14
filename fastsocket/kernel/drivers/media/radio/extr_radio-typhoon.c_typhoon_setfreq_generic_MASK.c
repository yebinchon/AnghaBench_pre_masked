
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typhoon {int lock; scalar_t__ io; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct typhoon *VAR_0,
       unsigned long VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;
 FUNC_0(&VAR_0->lock);
 VAR_3 = VAR_1 / 160;
 VAR_2 = (VAR_3 * VAR_3 + 2500) / 5000;
 VAR_2 = (VAR_2 * VAR_3 + 5000) / 10000;
 VAR_2 -= (10 * VAR_3 * VAR_3 + 10433) / 20866;
 VAR_2 += 4 * VAR_3 - 11505;

 FUNC_2((VAR_2 >> 8) & 0x01, VAR_0->io + 4);
 FUNC_2(VAR_2 >> 9, VAR_0->io + 6);
 FUNC_2(VAR_2 & 0xff, VAR_0->io + 8);
 FUNC_1(&VAR_0->lock);

 return 0;
}
