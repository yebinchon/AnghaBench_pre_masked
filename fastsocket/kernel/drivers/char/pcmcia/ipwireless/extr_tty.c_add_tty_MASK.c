
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct ipw_tty {int dummy; } ;
struct ipw_network {int dummy; } ;
struct ipw_hardware {int dummy; } ;
struct TYPE_10__ {scalar_t__ minor; int major; int dev_name; } ;
typedef TYPE_1__ dev_node_t ;
struct TYPE_12__ {scalar_t__ minor_start; int major; } ;
struct TYPE_11__ {int index; int channel_idx; int secondary_channel_idx; int tty_type; int ipw_tty_mutex; struct ipw_network* network; struct ipw_hardware* hardware; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (scalar_t__) ;
 TYPE_3__* VAR_2 ;
 int FUNC_1 (struct ipw_network*,int,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (TYPE_3__*,int,int *) ;
 TYPE_2__** VAR_3 ;

__attribute__((used)) static int FUNC_7(dev_node_t *VAR_4, int VAR_5,
      struct ipw_hardware *VAR_6,
      struct ipw_network *VAR_7, int VAR_8,
      int VAR_9, int VAR_10)
{
 VAR_3[VAR_5] = FUNC_2(sizeof(struct ipw_tty), VAR_1);
 if (!VAR_3[VAR_5])
  return -VAR_0;
 VAR_3[VAR_5]->index = VAR_5;
 VAR_3[VAR_5]->hardware = VAR_6;
 VAR_3[VAR_5]->channel_idx = VAR_8;
 VAR_3[VAR_5]->secondary_channel_idx = VAR_9;
 VAR_3[VAR_5]->network = VAR_7;
 VAR_3[VAR_5]->tty_type = VAR_10;
 FUNC_3(&VAR_3[VAR_5]->ipw_tty_mutex);

 FUNC_6(VAR_2, VAR_5, ((void*)0));
 FUNC_1(VAR_7, VAR_8, VAR_3[VAR_5]);

 if (VAR_9 != -1)
  FUNC_1(VAR_7,
       VAR_9,
       VAR_3[VAR_5]);
 if (VAR_4 != ((void*)0)) {
  FUNC_5(VAR_4->dev_name, "ttyIPWp%d", VAR_5);
  VAR_4->major = VAR_2->major;
  VAR_4->minor = VAR_5 + VAR_2->minor_start;
 }
 if (FUNC_0(VAR_5 + VAR_2->minor_start) == VAR_3[VAR_5])
  FUNC_4(VAR_3[VAR_5]);
 return 0;
}
