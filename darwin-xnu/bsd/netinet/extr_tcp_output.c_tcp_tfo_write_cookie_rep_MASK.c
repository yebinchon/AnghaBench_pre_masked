
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct tcpcb {int t_tfo_stats; int t_inpcb; } ;
typedef int out ;
struct TYPE_2__ {int tcps_tfo_cookie_sent; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,unsigned int) ;
 int FUNC_1 (int ,int *,int) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static unsigned
FUNC_2(struct tcpcb *VAR_7, unsigned VAR_8, u_char *VAR_9)
{
 u_char VAR_10[VAR_0];
 unsigned VAR_11 = 0;
 u_char *VAR_12;

 if ((VAR_1 - VAR_8) <
     (VAR_2 + VAR_4))
  return (VAR_11);

 FUNC_1(VAR_7->t_inpcb, VAR_10, sizeof(VAR_10));

 VAR_12 = VAR_9 + VAR_8;

 *VAR_12++ = VAR_3;
 *VAR_12++ = 2 + VAR_4;
 FUNC_0(VAR_12, VAR_10, VAR_4);
 VAR_11 += 2 + VAR_4;

 VAR_7->t_tfo_stats |= VAR_5;
 VAR_6.tcps_tfo_cookie_sent++;

 return (VAR_11);
}
