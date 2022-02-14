
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty3270 {int update_flags; } ;
struct raw3270_view {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty3270*,int) ;

__attribute__((used)) static int
FUNC_1(struct raw3270_view *VAR_1)
{
 struct tty3270 *VAR_2;

 VAR_2 = (struct tty3270 *) VAR_1;
 VAR_2->update_flags = VAR_0;
 FUNC_0(VAR_2, 1);
 return 0;
}
