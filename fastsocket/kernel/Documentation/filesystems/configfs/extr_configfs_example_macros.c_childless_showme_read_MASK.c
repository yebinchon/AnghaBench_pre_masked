
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct childless {int showme; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct childless *VAR_0,
         char *VAR_1)
{
 ssize_t VAR_2;

 VAR_2 = FUNC_0(VAR_1, "%d\n", VAR_0->showme);
 VAR_0->showme++;

 return VAR_2;
}
