
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_mem {char* name; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static ssize_t FUNC_2(struct uio_mem *VAR_0, char *VAR_1)
{
 if (FUNC_1(!VAR_0->name))
  VAR_0->name = "";

 return FUNC_0(VAR_1, "%s\n", VAR_0->name);
}
