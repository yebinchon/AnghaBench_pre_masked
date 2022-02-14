
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ghes {int estatus; int generic; } ;


 int FUNC_0 (struct ghes*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct ghes*,int ) ;

__attribute__((used)) static int FUNC_6(struct ghes *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_5(VAR_0, 0);
 if (VAR_1)
  goto out;
 if (!FUNC_3(VAR_0->estatus)) {
  if (FUNC_4(((void*)0), VAR_0->generic, VAR_0->estatus))
   FUNC_2(VAR_0->generic, VAR_0->estatus);
 }
 FUNC_1(VAR_0->estatus);
out:
 FUNC_0(VAR_0);
 return 0;
}
