
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_ioctl {int flags; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline fmode_t FUNC_0(struct dm_ioctl *VAR_3)
{
 fmode_t VAR_4 = VAR_1 | VAR_2;

 if (VAR_3->flags & VAR_0)
  VAR_4 = VAR_1;

 return VAR_4;
}
