
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; scalar_t__ file; } ;
struct mddev {TYPE_1__ bitmap_info; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_0, char *VAR_1)
{
 ssize_t VAR_2;
 if (VAR_0->bitmap_info.file)
  VAR_2 = FUNC_0(VAR_1, "file");
 else if (VAR_0->bitmap_info.offset)
  VAR_2 = FUNC_0(VAR_1, "%+lld", (long long)VAR_0->bitmap_info.offset);
 else
  VAR_2 = FUNC_0(VAR_1, "none");
 VAR_2 += FUNC_0(VAR_1+VAR_2, "\n");
 return VAR_2;
}
