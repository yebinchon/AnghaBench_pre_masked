
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char*,char const*,int) ;
 int FUNC_1 (unsigned char) ;

__attribute__((used)) static ssize_t FUNC_2(struct file *VAR_1, const char *VAR_2,
         size_t VAR_3, loff_t * VAR_4)
{
 unsigned char VAR_5;

 if (VAR_3 < 0)
  return -VAR_0;

 if (VAR_3 == 0)
  return 0;

 if (FUNC_0((unsigned char *)&VAR_5, VAR_2, sizeof(unsigned char)))
  return -VAR_0;

 FUNC_1(VAR_5);
 return sizeof(unsigned char);
}
