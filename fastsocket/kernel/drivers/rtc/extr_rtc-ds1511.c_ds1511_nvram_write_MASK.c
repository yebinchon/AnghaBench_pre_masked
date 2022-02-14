
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct file *VAR_5, struct kobject *VAR_6,
     struct bin_attribute *VAR_7,
     char *VAR_8, loff_t VAR_9, size_t VAR_10)
{
 ssize_t VAR_11;





 if (VAR_10 > 1) {
  FUNC_1((FUNC_0(VAR_4) | VAR_0), VAR_4);
 }
 if (VAR_9 > VAR_3) {
  VAR_9 = VAR_3;
 }
 if (VAR_10 + VAR_9 > VAR_3 + 1) {
  VAR_10 = VAR_3 - VAR_9 + 1;
 }
 FUNC_1(VAR_9, VAR_1);
 for (VAR_11 = 0; VAR_10 > 0; VAR_11++, VAR_10--) {
  FUNC_1(*VAR_8++, VAR_2);
 }
 if (VAR_11 > 1) {
  FUNC_1((FUNC_0(VAR_4) & ~VAR_0), VAR_4);
 }
 return VAR_11;
}
