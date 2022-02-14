
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcssblk_dev_info {unsigned long end; unsigned long start; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int sector_t ;
struct TYPE_2__ {struct dcssblk_dev_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (void*) ;

__attribute__((used)) static int
FUNC_1 (struct block_device *VAR_5, sector_t VAR_6,
   void **VAR_7, unsigned long *VAR_8)
{
 struct dcssblk_dev_info *VAR_9;
 unsigned long VAR_10;

 VAR_9 = VAR_5->bd_disk->private_data;
 if (!VAR_9)
  return -VAR_1;
 if (VAR_6 % (VAR_4/512))
  return -VAR_0;
 VAR_10 = VAR_6 / (VAR_4 / 512);
 if ((VAR_10+1)*VAR_4-1 > VAR_9->end - VAR_9->start)
  return -VAR_2;
 *VAR_7 = (void *) (VAR_9->start+VAR_10*VAR_4);
 *VAR_8 = FUNC_0(*VAR_7) >> VAR_3;

 return 0;
}
