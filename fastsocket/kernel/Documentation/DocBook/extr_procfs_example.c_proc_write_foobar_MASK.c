
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct fb_data_t {char* value; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (char*,char const*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2,
        const char *VAR_3,
        unsigned long VAR_4,
        void *VAR_5)
{
 int VAR_6;
 struct fb_data_t *VAR_7 = (struct fb_data_t *)VAR_5;

 if(VAR_4 > VAR_1)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_4;

 if(FUNC_0(VAR_7->value, VAR_3, VAR_6))
  return -VAR_0;

 VAR_7->value[VAR_6] = '\0';

 return VAR_6;
}
