
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int external; scalar_t__ offset; scalar_t__ file; } ;
struct mddev {TYPE_1__ bitmap_info; scalar_t__ bitmap; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct mddev *VAR_2, const char *VAR_3, size_t VAR_4)
{
 if (VAR_2->bitmap ||
     VAR_2->bitmap_info.file ||
     VAR_2->bitmap_info.offset)
  return -VAR_0;
 if (FUNC_0(VAR_3, "external", 8) == 0)
  VAR_2->bitmap_info.external = 1;
 else if (FUNC_0(VAR_3, "internal", 8) == 0)
  VAR_2->bitmap_info.external = 0;
 else
  return -VAR_1;
 return VAR_4;
}
