
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdrom_info {int devinfo; int drive; } ;
struct block_device {int bd_disk; } ;
typedef int fmode_t ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct block_device*,int ,unsigned int,unsigned long) ;
 int FUNC_1 (int ,struct block_device*,unsigned int,unsigned long) ;
 struct cdrom_info* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct block_device *VAR_2, fmode_t VAR_3,
   unsigned int VAR_4, unsigned long VAR_5)
{
 struct cdrom_info *VAR_6 = FUNC_2(VAR_2->bd_disk, VAR_1);
 int VAR_7;

 switch (VAR_4) {
 case 128:
  return FUNC_4(&VAR_6->devinfo, VAR_5);
 case 129:
  return FUNC_3(&VAR_6->devinfo, VAR_5);
 default:
  break;
 }

 VAR_7 = FUNC_1(VAR_6->drive, VAR_2, VAR_4, VAR_5);
 if (VAR_7 == -VAR_0)
  VAR_7 = FUNC_0(&VAR_6->devinfo, VAR_2, VAR_3, VAR_4, VAR_5);

 return VAR_7;
}
