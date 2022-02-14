
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct zram {int disksize; int init_lock; int disk; scalar_t__ init_done; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct zram* FUNC_1 (struct device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (char const*,int,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 int VAR_6;
 u64 VAR_7;
 struct zram *VAR_8 = FUNC_1(VAR_2);

 VAR_6 = FUNC_5(VAR_4, 10, &VAR_7);
 if (VAR_6)
  return VAR_6;

 FUNC_2(&VAR_8->init_lock);
 if (VAR_8->init_done) {
  FUNC_6(&VAR_8->init_lock);
  FUNC_3("Cannot change disksize for initialized device\n");
  return -VAR_0;
 }

 VAR_8->disksize = FUNC_0(VAR_7);
 FUNC_4(VAR_8->disk, VAR_8->disksize >> VAR_1);
 FUNC_6(&VAR_8->init_lock);

 return VAR_5;
}
