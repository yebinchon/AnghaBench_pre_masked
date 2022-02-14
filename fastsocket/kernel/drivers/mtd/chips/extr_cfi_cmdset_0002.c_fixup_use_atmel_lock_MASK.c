
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {int flags; int unlock; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct mtd_info *VAR_3, void *VAR_4)
{
 VAR_3->lock = VAR_1;
 VAR_3->unlock = VAR_2;
 VAR_3->flags |= VAR_0;
}
