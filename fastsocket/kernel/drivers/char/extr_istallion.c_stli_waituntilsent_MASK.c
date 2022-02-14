
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct stliport* driver_data; } ;
struct stliport {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_4, int VAR_5)
{
 struct stliport *VAR_6;
 unsigned long VAR_7;

 VAR_6 = VAR_4->driver_data;
 if (VAR_6 == ((void*)0))
  return;

 if (VAR_5 == 0)
  VAR_5 = VAR_0;
 VAR_7 = VAR_3 + VAR_5;

 while (FUNC_2(VAR_1, &VAR_6->state)) {
  if (FUNC_1(VAR_2))
   break;
  FUNC_0(20);
  if (FUNC_3(VAR_3, VAR_7))
   break;
 }
}
