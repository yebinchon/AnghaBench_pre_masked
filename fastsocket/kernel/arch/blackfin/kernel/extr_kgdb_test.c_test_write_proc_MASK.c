
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;


 scalar_t__* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__*,char const*,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, const char *VAR_3,
     unsigned long VAR_4, void *VAR_5)
{
 if (VAR_4 >= 256)
  VAR_1 = 255;
 else
  VAR_1 = VAR_4;

 FUNC_0(VAR_0, VAR_3, VAR_4);
 VAR_0[VAR_1] = 0;

 return VAR_1;
}
