
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ipw_tty {int dummy; } ;
struct ipw_network {int ras_control_lines; int close_lock; int lock; int * ppp_channel; struct ipw_tty*** associated_ttys; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (unsigned char*,unsigned int) ;
 scalar_t__ FUNC_1 (struct ipw_tty*) ;
 int FUNC_2 (struct ipw_tty*,unsigned char*,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

void FUNC_8(struct ipw_network *VAR_3,
     unsigned int VAR_4,
     unsigned char *VAR_5,
     unsigned int VAR_6)
{
 int VAR_7;
 unsigned long VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct ipw_tty *VAR_9 = VAR_3->associated_ttys[VAR_4][VAR_7];

  if (!VAR_9)
   continue;







  if (VAR_4 == VAR_0
    && (VAR_3->ras_control_lines &
     VAR_1) != 0
    && FUNC_1(VAR_9)) {





   FUNC_3(&VAR_3->close_lock);
   FUNC_6(&VAR_3->lock, VAR_8);
   if (VAR_3->ppp_channel != ((void*)0)) {
    struct sk_buff *VAR_10;

    FUNC_7(&VAR_3->lock,
      VAR_8);


    VAR_10 = FUNC_0(VAR_5, VAR_6);
    FUNC_5(VAR_3->ppp_channel, VAR_10);
   } else
    FUNC_7(&VAR_3->lock,
      VAR_8);
   FUNC_4(&VAR_3->close_lock);
  }

  else
   FUNC_2(VAR_9, VAR_5, VAR_6);
 }
}
