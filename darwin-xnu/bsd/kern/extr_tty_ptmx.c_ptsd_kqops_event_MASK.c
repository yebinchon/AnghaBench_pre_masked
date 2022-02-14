
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct knote {int kn_flags; struct tty* kn_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (struct knote*,struct tty*) ;
 int FUNC_1 (struct tty*) ;
 int FUNC_2 (struct tty*) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_3, long VAR_4)
{
 struct tty *VAR_5 = VAR_3->kn_hook;
 int VAR_6;
 bool VAR_7 = VAR_4 & VAR_2;
 VAR_4 &= ~VAR_2;

 if (!VAR_4) {
  FUNC_1(VAR_5);
 }

 if (VAR_7) {
  VAR_3->kn_flags |= VAR_0 | VAR_1;
  VAR_6 = 1;
 } else {
  VAR_6 = FUNC_0(VAR_3, VAR_5);
 }

 if (!VAR_4) {
  FUNC_2(VAR_5);
 }

 return VAR_6;
}
