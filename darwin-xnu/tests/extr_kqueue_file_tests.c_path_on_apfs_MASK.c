
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int * f_fstypename; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (char const*,struct statfs*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static bool
FUNC_4(const char *VAR_1)
{
 struct statfs VAR_2 = {};
 VAR_0; FUNC_0(FUNC_2(VAR_1, &VAR_2), ((void*)0));
 return (FUNC_1(&VAR_2.f_fstypename[0], "apfs", FUNC_3("apfs")) == 0);
}
