
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct putchar_args {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,void*) ;

__attribute__((used)) static void
FUNC_2(int VAR_2, void *VAR_3)
{
 struct putchar_args *VAR_4 = VAR_3;

 if ((VAR_4->flags & VAR_0) && VAR_2 != '\0' && VAR_2 != '\r' && VAR_2 != 0177)
  FUNC_0(VAR_1, VAR_2);
 FUNC_1(VAR_2, VAR_3);
}
