
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm85_data {scalar_t__ type; int vid; int vrm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct lm85_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3,
  char *VAR_4)
{
 struct lm85_data *VAR_5 = FUNC_0(VAR_2);
 int VAR_6;

 if ((VAR_5->type == VAR_0 || VAR_5->type == VAR_1) &&
     (VAR_5->vid & 0x80)) {

  VAR_6 = FUNC_2(VAR_5->vid & 0x3f, VAR_5->vrm);
 } else {

  VAR_6 = FUNC_2(VAR_5->vid & 0x1f, VAR_5->vrm);
 }

 return FUNC_1(VAR_4, "%d\n", VAR_6);
}
