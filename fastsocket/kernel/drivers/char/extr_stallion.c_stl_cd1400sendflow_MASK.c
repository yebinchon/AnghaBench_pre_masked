
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int rxxoff; int rxxon; } ;
struct stlport {int portnr; int brdnr; TYPE_1__ stats; int pagenr; int port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*,struct stlport*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct stlport*) ;
 int FUNC_6 (struct stlport*,int ,int) ;
 int FUNC_7 (struct tty_struct*) ;
 struct tty_struct* FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct stlport *VAR_5, int VAR_6)
{
 struct tty_struct *VAR_7;
 unsigned long VAR_8;

 FUNC_2("stl_cd1400sendflow(portp=%p,state=%x)\n", VAR_5, VAR_6);

 if (VAR_5 == ((void*)0))
  return;
 VAR_7 = FUNC_8(&VAR_5->port);
 if (VAR_7 == ((void*)0))
  return;

 FUNC_3(&VAR_4, VAR_8);
 FUNC_1(VAR_5->brdnr, VAR_5->pagenr);
 FUNC_6(VAR_5, VAR_0, (VAR_5->portnr & 0x03));
 if (VAR_6) {
  FUNC_5(VAR_5);
  FUNC_6(VAR_5, VAR_1, VAR_2);
  VAR_5->stats.rxxon++;
  FUNC_5(VAR_5);
 } else {
  FUNC_5(VAR_5);
  FUNC_6(VAR_5, VAR_1, VAR_3);
  VAR_5->stats.rxxoff++;
  FUNC_5(VAR_5);
 }
 FUNC_0(VAR_5->brdnr);
 FUNC_4(&VAR_4, VAR_8);
 FUNC_7(VAR_7);
}
