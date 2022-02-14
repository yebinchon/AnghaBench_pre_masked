
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct blk_integrity {scalar_t__ name; } ;


 int VAR_0 ;
 struct blk_integrity* FUNC_0 (struct gendisk*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

bool FUNC_2(struct gendisk *VAR_1)
{
 struct blk_integrity *VAR_2 = FUNC_0(VAR_1);

 return (VAR_2 && VAR_2->name && FUNC_1(VAR_2->name, VAR_0) != 0);
}
