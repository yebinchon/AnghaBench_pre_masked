
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lun {int unit_attention_data; scalar_t__ prevent_medium_removal; } ;
struct fsg_dev {int filesem; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct lun*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct lun*) ;
 int FUNC_2 (struct lun*) ;
 struct fsg_dev* FUNC_3 (struct device*) ;
 struct lun* FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct lun*,char const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
  const char *VAR_5, size_t VAR_6)
{
 struct lun *VAR_7 = FUNC_4(VAR_3);
 struct fsg_dev *VAR_8 = FUNC_3(VAR_3);
 int VAR_9 = 0;

 if (VAR_7->prevent_medium_removal && FUNC_1(VAR_7)) {
  FUNC_0(VAR_7, "eject attempt prevented\n");
  return -VAR_0;
 }


 if (VAR_6 > 0 && VAR_5[VAR_6-1] == '\n')
  ((char *) VAR_5)[VAR_6-1] = 0;


 FUNC_5(&VAR_8->filesem);
 if (FUNC_1(VAR_7)) {
  FUNC_2(VAR_7);
  VAR_7->unit_attention_data = VAR_1;
 }


 if (VAR_6 > 0 && VAR_5[0]) {
  VAR_9 = FUNC_6(VAR_7, VAR_5);
  if (VAR_9 == 0)
   VAR_7->unit_attention_data =
     VAR_2;
 }
 FUNC_7(&VAR_8->filesem);
 return (VAR_9 < 0 ? VAR_9 : VAR_6);
}
