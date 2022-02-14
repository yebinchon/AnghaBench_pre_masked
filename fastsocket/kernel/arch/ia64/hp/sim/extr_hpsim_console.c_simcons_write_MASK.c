
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct console {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_1 (struct console *VAR_1, const char *VAR_2, unsigned VAR_3)
{
 unsigned long VAR_4;

 while (VAR_3-- > 0) {
  VAR_4 = *VAR_2++;
  FUNC_0(VAR_4, 0, 0, 0, VAR_0);
  if (VAR_4 == '\n')
    FUNC_0('\r', 0, 0, 0, VAR_0);
 }
}
