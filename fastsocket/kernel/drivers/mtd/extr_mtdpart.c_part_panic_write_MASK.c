
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct mtd_part {scalar_t__ offset; TYPE_1__* master; } ;
struct mtd_info {int flags; scalar_t__ size; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* panic_write ) (TYPE_1__*,scalar_t__,size_t,size_t*,int const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct mtd_part* FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,size_t,size_t*,int const*) ;

__attribute__((used)) static int FUNC_2(struct mtd_info *VAR_2, loff_t VAR_3, size_t VAR_4,
  size_t *VAR_5, const u_char *VAR_6)
{
 struct mtd_part *VAR_7 = FUNC_0(VAR_2);
 if (!(VAR_2->flags & VAR_1))
  return -VAR_0;
 if (VAR_3 >= VAR_2->size)
  VAR_4 = 0;
 else if (VAR_3 + VAR_4 > VAR_2->size)
  VAR_4 = VAR_2->size - VAR_3;
 return VAR_7->master->panic_write(VAR_7->master, VAR_3 + VAR_7->offset,
        VAR_4, VAR_5, VAR_6);
}
