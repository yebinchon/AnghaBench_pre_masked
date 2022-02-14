
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct async_struct {char x_char; } ;


 int FUNC_0 (struct async_struct*,int *) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0, char VAR_1)
{
 struct async_struct *VAR_2 = (struct async_struct *)VAR_0->driver_data;

 VAR_2->x_char = VAR_1;
 if (VAR_1) {




  FUNC_0(VAR_2, ((void*)0));
 }
}
