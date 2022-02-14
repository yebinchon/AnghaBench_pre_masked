
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_2__ {int rxxoff; int rxxon; } ;
struct stlport {int brdnr; TYPE_1__ stats; int pagenr; int port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,struct stlport*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned char FUNC_5 (struct stlport*,int ) ;
 int FUNC_6 (struct stlport*,int ,unsigned char) ;
 int FUNC_7 (struct stlport*) ;
 int FUNC_8 (struct tty_struct*) ;
 struct tty_struct* FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct stlport *VAR_7, int VAR_8)
{
 struct tty_struct *VAR_9;
 unsigned long VAR_10;
 unsigned char VAR_11;

 FUNC_2("stl_sc26198sendflow(portp=%p,state=%x)\n", VAR_7, VAR_8);

 if (VAR_7 == ((void*)0))
  return;
 VAR_9 = FUNC_9(&VAR_7->port);
 if (VAR_9 == ((void*)0))
  return;

 FUNC_3(&VAR_6, VAR_10);
 FUNC_1(VAR_7->brdnr, VAR_7->pagenr);
 if (VAR_8) {
  VAR_11 = FUNC_5(VAR_7, VAR_2);
  FUNC_6(VAR_7, VAR_2, (VAR_11 & ~VAR_4));
  FUNC_6(VAR_7, VAR_5, VAR_1);
  VAR_11 |= VAR_3;
  VAR_7->stats.rxxon++;
  FUNC_7(VAR_7);
  FUNC_6(VAR_7, VAR_2, VAR_11);
 } else {
  VAR_11 = FUNC_5(VAR_7, VAR_2);
  FUNC_6(VAR_7, VAR_2, (VAR_11 & ~VAR_4));
  FUNC_6(VAR_7, VAR_5, VAR_0);
  VAR_11 &= ~VAR_3;
  VAR_7->stats.rxxoff++;
  FUNC_7(VAR_7);
  FUNC_6(VAR_7, VAR_2, VAR_11);
 }
 FUNC_0(VAR_7->brdnr);
 FUNC_4(&VAR_6, VAR_10);
 FUNC_8(VAR_9);
}
