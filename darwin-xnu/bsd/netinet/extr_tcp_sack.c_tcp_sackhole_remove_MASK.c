
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct sackhole* nexthole; } ;
struct tcpcb {int snd_holes; TYPE_1__ sackhint; } ;
struct sackhole {int dummy; } ;


 struct sackhole* FUNC_0 (struct sackhole*,int ) ;
 int FUNC_1 (int *,struct sackhole*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct tcpcb*,struct sackhole*) ;

__attribute__((used)) static void
FUNC_3(struct tcpcb *VAR_1, struct sackhole *VAR_2)
{

 if (VAR_1->sackhint.nexthole == VAR_2)
  VAR_1->sackhint.nexthole = FUNC_0(VAR_2, VAR_0);


 FUNC_1(&VAR_1->snd_holes, VAR_2, VAR_0);


 FUNC_2(VAR_1, VAR_2);
}
