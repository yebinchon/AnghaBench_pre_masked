
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_mac {int lock; int chip; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct zd_mac*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

void FUNC_5(struct zd_mac *VAR_1)
{
 FUNC_2(VAR_0);
 FUNC_4(&VAR_1->chip);
 FUNC_0(!FUNC_3(&VAR_1->lock));
 FUNC_1(VAR_1, sizeof(struct zd_mac));
}
