
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tcp_seq ;
struct tcpcb {scalar_t__ snd_numholes; } ;
struct sackhole {void* rxmit; void* end; void* start; } ;
struct TYPE_2__ {int tcps_sack_sboverflow; } ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static struct sackhole *
FUNC_2(struct tcpcb *VAR_5, tcp_seq VAR_6, tcp_seq VAR_7)
{
 struct sackhole *VAR_8;

 if (VAR_5->snd_numholes >= VAR_3 ||
     VAR_1 >= VAR_2) {
  VAR_4.tcps_sack_sboverflow++;
  return ((void*)0);
 }

 VAR_8 = (struct sackhole *)FUNC_1(VAR_0);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_8->start = VAR_6;
 VAR_8->end = VAR_7;
 VAR_8->rxmit = VAR_6;

 VAR_5->snd_numholes++;
 FUNC_0(&VAR_1);

 return VAR_8;
}
