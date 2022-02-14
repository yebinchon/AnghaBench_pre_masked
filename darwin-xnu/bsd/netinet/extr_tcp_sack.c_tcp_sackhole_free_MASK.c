
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int snd_numholes; } ;
struct sackhole {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sackhole*) ;

__attribute__((used)) static void
FUNC_2(struct tcpcb *VAR_2, struct sackhole *VAR_3)
{
 FUNC_1(VAR_0, VAR_3);

 VAR_2->snd_numholes--;
 FUNC_0(&VAR_1);
}
