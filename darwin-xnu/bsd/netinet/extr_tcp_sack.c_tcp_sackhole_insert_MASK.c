
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tcp_seq ;
struct TYPE_2__ {struct sackhole* nexthole; } ;
struct tcpcb {TYPE_1__ sackhint; int snd_holes; } ;
struct sackhole {int rxmit_start; } ;


 int FUNC_0 (int *,struct sackhole*,struct sackhole*,int ) ;
 int FUNC_1 (int *,struct sackhole*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sackhole* FUNC_2 (struct tcpcb*,int ,int ) ;

__attribute__((used)) static struct sackhole *
FUNC_3(struct tcpcb *VAR_2, tcp_seq VAR_3, tcp_seq VAR_4,
      struct sackhole *VAR_5)
{
 struct sackhole *VAR_6;


 VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 VAR_6->rxmit_start = VAR_1;

 if (VAR_5 != ((void*)0))
  FUNC_0(&VAR_2->snd_holes, VAR_5, VAR_6, VAR_0);
 else
  FUNC_1(&VAR_2->snd_holes, VAR_6, VAR_0);


 if (VAR_2->sackhint.nexthole == ((void*)0))
  VAR_2->sackhint.nexthole = VAR_6;

 return(VAR_6);
}
