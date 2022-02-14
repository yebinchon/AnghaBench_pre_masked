
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {TYPE_1__* bitmap; } ;
typedef int ssize_t ;
struct TYPE_2__ {int behind_writes_used; } ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t
FUNC_1(struct mddev *VAR_0, char *VAR_1)
{
 if (VAR_0->bitmap == ((void*)0))
  return FUNC_0(VAR_1, "0\n");
 return FUNC_0(VAR_1, "%lu\n",
         VAR_0->bitmap->behind_writes_used);
}
