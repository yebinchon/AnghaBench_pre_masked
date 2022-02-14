
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pcbit_dev {TYPE_1__* dev_if; int id; } ;
struct pcbit_chan {int id; } ;
struct callb_data {int dummy; } ;
struct TYPE_5__ {int arg; int driver; int command; } ;
typedef TYPE_2__ isdn_ctrl ;
struct TYPE_4__ {int (* statcallb ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct pcbit_dev * VAR_1, struct pcbit_chan* VAR_2,
        struct callb_data *VAR_3)
{
        isdn_ctrl VAR_4;

        VAR_4.command = VAR_0;
        VAR_4.driver=VAR_1->id;
        VAR_4.arg=VAR_2->id;
        VAR_1->dev_if->statcallb(&VAR_4);
}
