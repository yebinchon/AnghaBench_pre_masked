
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int resync_mismatches; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,unsigned long long) ;

__attribute__((used)) static ssize_t
FUNC_2(struct mddev *VAR_0, char *VAR_1)
{
 return FUNC_1(VAR_1, "%llu\n",
         (unsigned long long)
         FUNC_0(&VAR_0->resync_mismatches));
}
