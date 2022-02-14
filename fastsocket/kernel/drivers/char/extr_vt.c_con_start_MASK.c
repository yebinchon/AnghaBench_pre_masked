
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_2)
{
 int VAR_3;
 if (!VAR_2)
  return;
 VAR_3 = VAR_2->index;
 if (!FUNC_2(VAR_3))
  return;
 FUNC_0(VAR_1 + VAR_3, VAR_0);
 FUNC_1();
}
