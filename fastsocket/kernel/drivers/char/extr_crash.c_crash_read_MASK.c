
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct page {int dummy; } ;
struct file {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (char*,void*,size_t) ;
 void* FUNC_1 (size_t,struct page**) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct file *VAR_3, char *VAR_4, size_t VAR_5, loff_t *VAR_6)
{
 void *VAR_7;
 struct page *VAR_8;
 u64 VAR_9;
 ssize_t VAR_10;

 VAR_9 = *VAR_6;
 if (VAR_9 >> VAR_2 != (VAR_9+VAR_5-1) >> VAR_2)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_9, &VAR_8);
 if (!VAR_7)
  return -VAR_0;

 if (FUNC_0(VAR_4, VAR_7, VAR_5)) {
  FUNC_2(VAR_8);
  return -VAR_0;
 }
 FUNC_2(VAR_8);

 VAR_10 = VAR_5;
 *VAR_6 += VAR_10;
 return VAR_10;
}
