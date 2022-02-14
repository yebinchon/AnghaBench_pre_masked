
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mtd_info {scalar_t__ size; TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ start; } ;
typedef TYPE_1__ slram_priv_t ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,size_t) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_1, loff_t VAR_2, size_t VAR_3,
  size_t *VAR_4, const u_char *VAR_5)
{
 slram_priv_t *VAR_6 = VAR_1->priv;

 if (VAR_2 + VAR_3 > VAR_1->size)
  return -VAR_0;

 FUNC_0(VAR_6->start + VAR_2, VAR_5, VAR_3);

 *VAR_4 = VAR_3;
 return(0);
}
