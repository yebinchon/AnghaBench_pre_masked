
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc_ops {int dummy; } ;
struct tty_ldisc {int users; struct tty_ldisc_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tty_ldisc* FUNC_0 (struct tty_ldisc_ops*) ;
 struct tty_ldisc* FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct tty_ldisc_ops*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 struct tty_ldisc_ops* FUNC_4 (int) ;
 struct tty_ldisc* FUNC_5 (int,int ) ;
 int FUNC_6 (struct tty_ldisc_ops*) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static struct tty_ldisc *FUNC_8(int VAR_5)
{
 struct tty_ldisc *VAR_6;
 struct tty_ldisc_ops *VAR_7;

 if (VAR_5 < VAR_4 || VAR_5 >= VAR_3)
  return FUNC_1(-VAR_0);





 VAR_7 = FUNC_4(VAR_5);
 if (FUNC_2(VAR_7)) {
  FUNC_7("tty-ldisc-%d", VAR_5);
  VAR_7 = FUNC_4(VAR_5);
  if (FUNC_2(VAR_7))
   return FUNC_0(VAR_7);
 }

 VAR_6 = FUNC_5(sizeof(struct tty_ldisc), VAR_2);
 if (VAR_6 == ((void*)0)) {
  FUNC_6(VAR_7);
  return FUNC_1(-VAR_1);
 }

 VAR_6->ops = VAR_7;
 FUNC_3(&VAR_6->users, 1);
 return VAR_6;
}
