
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct dm_table {int dummy; } ;
struct dm_ioctl {int flags; } ;


 int VAR_0 ;
 struct dm_table* FUNC_0 (struct mapped_device*) ;
 struct dm_table* FUNC_1 (struct mapped_device*) ;

__attribute__((used)) static struct dm_table *FUNC_2(struct mapped_device *VAR_1,
            struct dm_ioctl *VAR_2)
{
 return (VAR_2->flags & VAR_0) ?
  FUNC_0(VAR_1) : FUNC_1(VAR_1);
}
