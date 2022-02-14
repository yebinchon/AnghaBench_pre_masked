
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust {unsigned long curfreq; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct trust*,int,int ,unsigned long,unsigned long,int,int ) ;

__attribute__((used)) static void FUNC_3(struct trust *VAR_1, unsigned long VAR_2)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->curfreq = VAR_2;
 VAR_2 /= 160;
 VAR_2 += 1070;
 FUNC_2(VAR_1, 5, VAR_0, (VAR_2 << 1) | 1, VAR_2 >> 7, 0x60 | ((VAR_2 >> 15) & 1), 0);
 FUNC_1(&VAR_1->lock);
}
