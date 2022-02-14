
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long chunksize; } ;
struct mddev {TYPE_1__ bitmap_info; scalar_t__ bitmap; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{

 int VAR_5;
 unsigned long VAR_6;
 if (VAR_2->bitmap)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_5)
  return VAR_5;
 if (VAR_6 < 512 ||
     !FUNC_0(VAR_6))
  return -VAR_1;
 VAR_2->bitmap_info.chunksize = VAR_6;
 return VAR_4;
}
