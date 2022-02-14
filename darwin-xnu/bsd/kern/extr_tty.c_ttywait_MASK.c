
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ c_cc; } ;
struct tty {int t_state; TYPE_1__ t_outq; int t_timeout; int (* t_oproc ) (struct tty*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tty*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct tty*) ;
 int FUNC_4 (struct tty*) ;
 int FUNC_5 (struct tty*,int ,int,char*,int ) ;

int
FUNC_6(struct tty *VAR_7)
{
 int VAR_8;

 FUNC_3(VAR_7);

 VAR_8 = 0;
 while ((VAR_7->t_outq.c_cc || FUNC_0(VAR_7->t_state, VAR_3)) &&
        FUNC_0(VAR_7->t_state, VAR_4) && VAR_7->t_oproc) {
  (*VAR_7->t_oproc)(VAR_7);
  if ((VAR_7->t_outq.c_cc || FUNC_0(VAR_7->t_state, VAR_3)) &&
      FUNC_0(VAR_7->t_state, VAR_4)) {
   FUNC_1(VAR_7->t_state, VAR_5);
   VAR_8 = FUNC_5(VAR_7, FUNC_2(VAR_7),
      VAR_6 | VAR_2, "ttywai",
      VAR_7->t_timeout);
   if (VAR_8) {
    if (VAR_8 == VAR_1)
     VAR_8 = VAR_0;
    break;
   }
  } else
   break;
 }
 if (!VAR_8 && (VAR_7->t_outq.c_cc || FUNC_0(VAR_7->t_state, VAR_3)))
  VAR_8 = VAR_0;
 return (VAR_8);
}
