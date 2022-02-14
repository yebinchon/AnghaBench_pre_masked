
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {scalar_t__ size; TYPE_1__* priv; } ;
struct TYPE_2__ {void* start; } ;
typedef TYPE_1__ slram_priv_t ;
typedef int resource_size_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  size_t *VAR_4, void **VAR_5, resource_size_t *VAR_6)
{
 slram_priv_t *VAR_7 = VAR_1->priv;


 if (VAR_6)
  return -VAR_0;

 if (VAR_2 + VAR_3 > VAR_1->size)
  return -VAR_0;

 *VAR_5 = VAR_7->start + VAR_2;
 *VAR_4 = VAR_3;
 return(0);
}
