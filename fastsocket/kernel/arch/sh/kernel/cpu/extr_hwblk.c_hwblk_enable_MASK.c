
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwblk_info {struct hwblk* hwblks; } ;
struct hwblk {int bit; int mstp; } ;


 int VAR_0 ;
 int FUNC_0 (struct hwblk_info*,int,int ,int,int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct hwblk_info *VAR_2, int VAR_3)
{
 struct hwblk *VAR_4 = VAR_2->hwblks + VAR_3;
 unsigned long VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_3(&VAR_1, VAR_6);

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_0, 1, 1);
 if (VAR_7 == 1) {
  VAR_5 = FUNC_1(VAR_4->mstp);
  VAR_5 &= ~(1 << VAR_4->bit);
  FUNC_2(VAR_5, VAR_4->mstp);
 }

 FUNC_4(&VAR_1, VAR_6);
}
