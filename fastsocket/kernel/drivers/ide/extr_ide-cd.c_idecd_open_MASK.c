
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_info {int devinfo; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct block_device*,int ) ;
 struct cdrom_info* FUNC_1 (int ) ;
 int FUNC_2 (struct cdrom_info*) ;

__attribute__((used)) static int FUNC_3(struct block_device *VAR_2, fmode_t VAR_3)
{
 struct cdrom_info *VAR_4 = FUNC_1(VAR_2->bd_disk);
 int VAR_5 = -VAR_0;

 if (!VAR_4)
  return -VAR_1;

 VAR_5 = FUNC_0(&VAR_4->devinfo, VAR_2, VAR_3);

 if (VAR_5 < 0)
  FUNC_2(VAR_4);

 return VAR_5;
}
