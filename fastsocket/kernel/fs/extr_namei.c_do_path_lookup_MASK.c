
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameidata {int dummy; } ;
struct filename {char const* name; } ;


 int FUNC_0 (int,struct filename*,unsigned int,struct nameidata*) ;

__attribute__((used)) static int FUNC_1(int VAR_0, const char *VAR_1,
    unsigned int VAR_2, struct nameidata *VAR_3)
{
 struct filename VAR_4 = { .name = VAR_1 };

 return FUNC_0(VAR_0, &VAR_4, VAR_2, VAR_3);
}
