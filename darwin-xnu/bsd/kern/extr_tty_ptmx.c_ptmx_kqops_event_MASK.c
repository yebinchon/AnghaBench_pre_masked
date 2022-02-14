
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct ptmx_ioctl {int dummy; } ;
struct knote {int kn_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 struct ptmx_ioctl* FUNC_0 (struct knote*) ;
 struct tty* FUNC_1 (struct knote*) ;
 int FUNC_2 (struct knote*,struct ptmx_ioctl*,struct tty*) ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;

__attribute__((used)) static int
FUNC_5(struct knote *VAR_3, long VAR_4)
{
 struct ptmx_ioctl *VAR_5 = FUNC_0(VAR_3);
 struct tty *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;
 bool VAR_8 = VAR_4 & VAR_2;
 VAR_4 &= ~VAR_2;

 if (!VAR_4) {
  FUNC_3(VAR_6);
 }

 if (VAR_8) {
  VAR_3->kn_flags |= VAR_0 | VAR_1;
  VAR_7 = 1;
 } else {
  VAR_7 = FUNC_2(VAR_3, VAR_5, VAR_6);
 }

 if (!VAR_4) {
  FUNC_4(VAR_6);
 }

 return VAR_7;
}
