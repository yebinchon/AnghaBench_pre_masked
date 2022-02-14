
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long max_write_behind; } ;
struct mddev {TYPE_1__ bitmap_info; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 int VAR_6 = FUNC_0(VAR_3, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_5 > VAR_0)
  return -VAR_1;
 VAR_2->bitmap_info.max_write_behind = VAR_5;
 return VAR_4;
}
