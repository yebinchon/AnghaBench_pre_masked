
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_8__ {scalar_t__ chan; } ;
typedef TYPE_2__ pc300dev_t ;
struct TYPE_7__ {int proto; } ;
struct TYPE_9__ {TYPE_1__ conf; scalar_t__ card; } ;
typedef TYPE_3__ pc300ch_t ;
typedef int pc300_t ;
struct TYPE_10__ {scalar_t__ priv; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_4__* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1)
{
 pc300dev_t *VAR_2 = (pc300dev_t *) FUNC_4(VAR_1)->priv;
 pc300ch_t *VAR_3 = (pc300ch_t *) VAR_2->chan;
 pc300_t *VAR_4 = (pc300_t *) VAR_3->card;
 unsigned long VAR_5;





 FUNC_6(VAR_1);

 FUNC_0(VAR_4, VAR_5);
 FUNC_2(VAR_2);
 FUNC_1(VAR_4, VAR_5);

 FUNC_5(VAR_1);
 return 0;
}
