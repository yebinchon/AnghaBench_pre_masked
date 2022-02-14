
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpcore_wdt {int expect_close; } ;
struct file {struct mpcore_wdt* private_data; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char,char const*) ;
 int FUNC_1 (struct mpcore_wdt*) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_2, const char *VAR_3,
      size_t VAR_4, loff_t *VAR_5)
{
 struct mpcore_wdt *VAR_6 = VAR_2->private_data;




 if (VAR_4) {
  if (!VAR_1) {
   size_t VAR_7;


   VAR_6->expect_close = 0;

   for (VAR_7 = 0; VAR_7 != VAR_4; VAR_7++) {
    char VAR_8;

    if (FUNC_0(VAR_8, VAR_3 + VAR_7))
     return -VAR_0;
    if (VAR_8 == 'V')
     VAR_6->expect_close = 42;
   }
  }
  FUNC_1(VAR_6);
 }
 return VAR_4;
}
