
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_integrity {char* name; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_1(struct blk_integrity *VAR_0, char *VAR_1)
{
 if (VAR_0 != ((void*)0) && VAR_0->name != ((void*)0))
  return FUNC_0(VAR_1, "%s\n", VAR_0->name);
 else
  return FUNC_0(VAR_1, "none\n");
}
