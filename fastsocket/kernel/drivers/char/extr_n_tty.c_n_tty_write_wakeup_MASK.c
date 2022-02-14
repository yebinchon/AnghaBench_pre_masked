
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ fasync; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_3)
{
 if (VAR_3->fasync && FUNC_1(VAR_2, &VAR_3->flags))
  FUNC_0(&VAR_3->fasync, VAR_1, VAR_0);
}
