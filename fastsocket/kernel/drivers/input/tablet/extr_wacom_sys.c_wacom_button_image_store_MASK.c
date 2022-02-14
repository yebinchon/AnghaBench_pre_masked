
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom {int lock; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct wacom* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wacom*,int,char const*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, int VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct wacom *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 if (VAR_4 != 1024)
  return -VAR_0;

 FUNC_1(&VAR_5->lock);

 VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);

 FUNC_2(&VAR_5->lock);

 return VAR_6 < 0 ? VAR_6 : VAR_4;
}
