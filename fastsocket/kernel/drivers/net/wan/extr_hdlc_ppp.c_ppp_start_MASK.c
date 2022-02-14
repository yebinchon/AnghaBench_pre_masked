
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct proto {int pid; int state; TYPE_1__ timer; struct net_device* dev; } ;
struct ppp {struct proto* protos; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ppp* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct net_device*,int ,int ,int ,int ,int ,int *) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_10)
{
 struct ppp *VAR_11 = FUNC_0(VAR_10);
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
  struct proto *VAR_13 = &VAR_11->protos[VAR_12];
  VAR_13->dev = VAR_10;
  FUNC_1(&VAR_13->timer);
  VAR_13->timer.function = VAR_9;
  VAR_13->timer.data = (unsigned long)VAR_13;
  VAR_13->state = VAR_0;
 }
 VAR_11->protos[VAR_4].pid = VAR_7;
 VAR_11->protos[VAR_2].pid = VAR_5;
 VAR_11->protos[VAR_3].pid = VAR_6;

 FUNC_2(VAR_10, VAR_7, VAR_8, 0, 0, 0, ((void*)0));
}
