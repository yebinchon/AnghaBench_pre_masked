
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zram {int init_lock; scalar_t__ init_done; int disk; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct block_device {scalar_t__ bd_holders; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct zram*) ;
 struct block_device* FUNC_1 (int ,int ) ;
 struct zram* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct block_device*) ;
 int FUNC_5 (char const*,int,unsigned long*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;
 struct zram *VAR_8;
 struct block_device *VAR_9;

 VAR_8 = FUNC_2(VAR_2);
 VAR_9 = FUNC_1(VAR_8->disk, 0);


 if (VAR_9->bd_holders)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_4, 10, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (!VAR_7)
  return -VAR_1;


 if (VAR_9)
  FUNC_4(VAR_9);

 FUNC_3(&VAR_8->init_lock);
 if (VAR_8->init_done)
  FUNC_0(VAR_8);
 FUNC_6(&VAR_8->init_lock);

 return VAR_5;
}
