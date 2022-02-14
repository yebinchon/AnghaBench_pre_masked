
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct TYPE_5__ {int ss_family; } ;
struct TYPE_4__ {int ss_family; } ;
struct secasindex {TYPE_2__ dst; TYPE_1__ src; } ;
struct TYPE_6__ {int dst; int src; } ;
struct secashead {int state; int dir; scalar_t__ ipsec_if; int outgoing_if; TYPE_3__ saidx; } ;
typedef scalar_t__ ifnet_t ;




 void* VAR_0 ;
 int FUNC_0 (int *,struct secashead*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct secasindex*,TYPE_3__*,int) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 struct secashead* FUNC_4 () ;
 int FUNC_5 (char*) ;
 int VAR_3 ;

__attribute__((used)) static struct secashead *
FUNC_6(struct secasindex *VAR_4,
     ifnet_t VAR_5,
     u_int VAR_6,
     u_int8_t VAR_7)
{
 struct secashead *VAR_8;


 if (VAR_4 == ((void*)0))
  FUNC_5("key_newsaidx: NULL pointer is passed.\n");

 VAR_8 = FUNC_4();
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 FUNC_1(VAR_4, &VAR_8->saidx, sizeof(VAR_8->saidx));


 switch (VAR_4->src.ss_family) {
  case 129:
   ((struct sockaddr_in *)(&VAR_8->saidx.src))->sin_port = VAR_0;
   break;
  case 128:
   ((struct sockaddr_in6 *)(&VAR_8->saidx.src))->sin6_port = VAR_0;
   break;
  default:
   break;
 }
 switch (VAR_4->dst.ss_family) {
  case 129:
   ((struct sockaddr_in *)(&VAR_8->saidx.dst))->sin_port = VAR_0;
   break;
  case 128:
   ((struct sockaddr_in6 *)(&VAR_8->saidx.dst))->sin6_port = VAR_0;
   break;
  default:
   break;
 }

 VAR_8->outgoing_if = VAR_6;
 if (VAR_5) {
  FUNC_2(VAR_5);
  VAR_8->ipsec_if = VAR_5;
 }
 VAR_8->dir = VAR_7;

 VAR_8->state = VAR_1;
 FUNC_0(&VAR_3, VAR_8, VAR_2);
 FUNC_3();

 return(VAR_8);
}
