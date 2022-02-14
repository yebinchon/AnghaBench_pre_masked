
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_ioctl {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dm_ioctl*) ;
 int FUNC_1 (struct dm_ioctl*,int ,size_t) ;
 int FUNC_2 (struct dm_ioctl*) ;

__attribute__((used)) static void FUNC_3(struct dm_ioctl *VAR_3, size_t VAR_4, int VAR_5)
{
 if (VAR_5 & VAR_2)
  FUNC_1(VAR_3, 0, VAR_4);

 if (VAR_5 & VAR_0)
  FUNC_0(VAR_3);
 if (VAR_5 & VAR_1)
  FUNC_2(VAR_3);
}
