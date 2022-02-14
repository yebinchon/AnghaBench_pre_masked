
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {scalar_t__ scroll; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct atkbd *VAR_0, char *VAR_1)
{
 return FUNC_0(VAR_1, "%d\n", VAR_0->scroll ? 1 : 0);
}
