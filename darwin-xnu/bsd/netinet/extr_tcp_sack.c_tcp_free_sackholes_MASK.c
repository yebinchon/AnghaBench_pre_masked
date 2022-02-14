
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * nexthole; scalar_t__ sack_bytes_rexmit; } ;
struct tcpcb {scalar_t__ sack_newdata; TYPE_1__ sackhint; int snd_holes; } ;
struct sackhole {int dummy; } ;


 struct sackhole* FUNC_0 (int *) ;
 int FUNC_1 (struct tcpcb*,struct sackhole*) ;

void
FUNC_2(struct tcpcb *VAR_0)
{
 struct sackhole *VAR_1;

 while ((VAR_1 = FUNC_0(&VAR_0->snd_holes)) != ((void*)0))
  FUNC_1(VAR_0, VAR_1);
 VAR_0->sackhint.sack_bytes_rexmit = 0;
 VAR_0->sackhint.nexthole = ((void*)0);
 VAR_0->sack_newdata = 0;

}
