
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdcspath_entry {int dummy; } ;
struct pdcspath_attribute {int (* store ) (struct pdcspath_entry*,char const*,size_t) ;} ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pdcspath_entry*,char const*,size_t) ;
 struct pdcspath_attribute* FUNC_2 (struct attribute*) ;
 struct pdcspath_entry* FUNC_3 (struct kobject*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct kobject *VAR_2, struct attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct pdcspath_entry *VAR_6 = FUNC_3(VAR_2);
 struct pdcspath_attribute *VAR_7 = FUNC_2(VAR_3);
 ssize_t VAR_8 = 0;

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (VAR_7->store)
  VAR_8 = VAR_7->store(VAR_6, VAR_4, VAR_5);

 return VAR_8;
}
