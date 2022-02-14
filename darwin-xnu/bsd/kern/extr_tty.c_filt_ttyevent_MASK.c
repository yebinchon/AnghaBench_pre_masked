
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct knote {int kn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (struct knote*,struct tty*) ;
 int FUNC_1 (struct knote*,int ) ;
 struct tty* FUNC_2 (struct knote*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_4, long VAR_5)
{
 int VAR_6;
 struct tty *VAR_7;
 bool VAR_8 = VAR_5 & VAR_3;
 VAR_5 &= ~VAR_3;

 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7) {
  FUNC_1(VAR_4, VAR_0);
  return 0;
 }

 if (!VAR_5) {
  FUNC_3(VAR_7);
 }

 if (VAR_8) {
  VAR_4->kn_flags |= VAR_1 | VAR_2;
  VAR_6 = 1;
 } else {
  VAR_6 = FUNC_0(VAR_4, VAR_7);
 }

 if (!VAR_5) {
  FUNC_4(VAR_7);
 }

 return VAR_6;
}
