
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockbuf {int sb_flags; int sb_sel; int * sb_upcallarg; int * sb_upcall; } ;
struct socket {struct sockbuf so_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sockbuf*,int) ;
 int FUNC_2 (struct sockbuf*) ;
 int FUNC_3 (struct sockbuf*,int ) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct socket *VAR_8)
{
 struct sockbuf *VAR_9 = &VAR_8->so_snd;
 (void) FUNC_1(VAR_9, VAR_2 | VAR_1 | VAR_0);
 FUNC_0(VAR_9->sb_flags & VAR_4);

 VAR_9->sb_flags &= ~(VAR_5|VAR_6);
 VAR_9->sb_flags |= VAR_3;
 VAR_9->sb_upcall = ((void*)0);
 VAR_9->sb_upcallarg = ((void*)0);

 FUNC_3(VAR_9, VAR_7);

 FUNC_4(&VAR_9->sb_sel);
 FUNC_2(VAR_9);
}
