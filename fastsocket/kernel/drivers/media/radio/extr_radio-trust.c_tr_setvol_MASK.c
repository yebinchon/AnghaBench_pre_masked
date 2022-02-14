
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trust {int curvol; int lock; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct trust*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct trust *VAR_1, __u16 VAR_2)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->curvol = VAR_2 / 2048;
 FUNC_2(VAR_1, 2, VAR_0, VAR_1->curvol ^ 0x1f);
 FUNC_1(&VAR_1->lock);
}
