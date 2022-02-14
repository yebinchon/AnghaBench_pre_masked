
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_part {scalar_t__ offset; TYPE_1__* master; } ;
struct mtd_info {scalar_t__ size; } ;
typedef int resource_size_t ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* point ) (TYPE_1__*,scalar_t__,size_t,size_t*,void**,int *) ;} ;


 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,size_t,size_t*,void**,int *) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_0, loff_t VAR_1, size_t VAR_2,
  size_t *VAR_3, void **VAR_4, resource_size_t *VAR_5)
{
 struct mtd_part *VAR_6 = FUNC_0(VAR_0);
 if (VAR_1 >= VAR_0->size)
  VAR_2 = 0;
 else if (VAR_1 + VAR_2 > VAR_0->size)
  VAR_2 = VAR_0->size - VAR_1;
 return VAR_6->master->point (VAR_6->master, VAR_1 + VAR_6->offset,
        VAR_2, VAR_3, VAR_4, VAR_5);
}
