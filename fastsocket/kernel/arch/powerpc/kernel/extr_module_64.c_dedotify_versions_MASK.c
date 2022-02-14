
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct modversion_info {char* name; } ;


 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct modversion_info *VAR_0,
         unsigned long VAR_1)
{
 struct modversion_info *VAR_2;

 for (VAR_2 = (void *)VAR_0 + VAR_1; VAR_0 < VAR_2; VAR_0++)
  if (VAR_0->name[0] == '.')
   FUNC_0(VAR_0->name, VAR_0->name+1, FUNC_1(VAR_0->name));
}
