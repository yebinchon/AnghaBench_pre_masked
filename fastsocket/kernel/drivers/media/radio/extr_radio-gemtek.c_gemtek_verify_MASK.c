
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gemtek {int verified; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gemtek *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_2->verified == VAR_3)
  return 1;

 FUNC_1(&VAR_2->lock);

 VAR_5 = FUNC_0(VAR_3);


 for (VAR_4 = 0; VAR_4 < 3; ++VAR_4) {
  FUNC_3(1 << VAR_4, VAR_3);
  FUNC_4(VAR_1);

  if ((FUNC_0(VAR_3) & (~VAR_0)) != (0x17 | (1 << (VAR_4 + 5)))) {
   FUNC_2(&VAR_2->lock);
   return 0;
  }
 }
 FUNC_3(VAR_5 >> 5, VAR_3);
 FUNC_4(VAR_1);

 FUNC_2(&VAR_2->lock);
 VAR_2->verified = VAR_3;

 return 1;
}
