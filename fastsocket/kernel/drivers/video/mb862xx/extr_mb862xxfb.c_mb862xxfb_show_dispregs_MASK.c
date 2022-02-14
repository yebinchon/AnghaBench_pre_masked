
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb862xxfb_par {int dummy; } ;
struct fb_info {struct mb862xxfb_par* par; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct fb_info* FUNC_0 (struct device*) ;
 int VAR_6 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (char*,char*,unsigned int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_7,
           struct device_attribute *VAR_8, char *VAR_9)
{
 struct fb_info *VAR_10 = FUNC_0(VAR_7);
 struct mb862xxfb_par *VAR_11 = VAR_10->par;
 char *VAR_12 = VAR_9;
 unsigned int VAR_13;

 for (VAR_13 = VAR_2; VAR_13 <= VAR_4; VAR_13 += 4)
  VAR_12 += FUNC_2(VAR_12, "%08x = %08x\n",
          VAR_13, FUNC_1(VAR_6, VAR_13));

 for (VAR_13 = VAR_0; VAR_13 <= VAR_1; VAR_13 += 4)
  VAR_12 += FUNC_2(VAR_12, "%08x = %08x\n",
          VAR_13, FUNC_1(VAR_6, VAR_13));

 for (VAR_13 = VAR_3; VAR_13 <= VAR_5; VAR_13 += 4)
  VAR_12 += FUNC_2(VAR_12, "%08x = %08x\n",
          VAR_13, FUNC_1(VAR_6, VAR_13));

 return VAR_12 - VAR_9;
}
