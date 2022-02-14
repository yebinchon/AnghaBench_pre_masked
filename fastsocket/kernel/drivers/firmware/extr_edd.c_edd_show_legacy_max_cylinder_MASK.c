
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edd_info {int legacy_max_cylinder; } ;
struct edd_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct edd_info* FUNC_0 (struct edd_device*) ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct edd_device *VAR_2, char *VAR_3)
{
 struct edd_info *VAR_4;
 char *VAR_5 = VAR_3;
 if (!VAR_2)
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4 || !VAR_3)
  return -VAR_0;

 VAR_5 += FUNC_1(VAR_5, VAR_1, "%u\n", VAR_4->legacy_max_cylinder);
 return (VAR_5 - VAR_3);
}
