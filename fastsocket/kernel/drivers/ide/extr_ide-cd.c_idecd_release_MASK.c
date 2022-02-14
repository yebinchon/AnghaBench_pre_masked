
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {int dummy; } ;
struct cdrom_info {int devinfo; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct cdrom_info*) ;
 struct cdrom_info* FUNC_2 (struct gendisk*,int ) ;

__attribute__((used)) static int FUNC_3(struct gendisk *VAR_1, fmode_t VAR_2)
{
 struct cdrom_info *VAR_3 = FUNC_2(VAR_1, VAR_0);

 FUNC_0(&VAR_3->devinfo, VAR_2);

 FUNC_1(VAR_3);

 return 0;
}
