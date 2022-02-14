
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct specialix_board {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct specialix_board*,int) ;
 int FUNC_3 (struct specialix_board*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct specialix_board *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_1->lock, VAR_6);
 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_3(VAR_1, VAR_0, VAR_4);
  if (FUNC_2(VAR_1, VAR_2) & VAR_3)
   VAR_5 |= 1 << VAR_4;
 }
 FUNC_1(&VAR_1->lock, VAR_6);

 return VAR_5;
}
