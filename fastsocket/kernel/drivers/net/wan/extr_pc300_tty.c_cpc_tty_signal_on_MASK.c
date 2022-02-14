
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* dev; scalar_t__ chan; } ;
typedef TYPE_3__ pc300dev_t ;
struct TYPE_12__ {int channel; scalar_t__ card; } ;
typedef TYPE_4__ pc300ch_t ;
struct TYPE_10__ {scalar_t__ scabase; } ;
struct TYPE_13__ {TYPE_2__ hw; } ;
typedef TYPE_5__ pc300_t ;
struct TYPE_9__ {int name; } ;


 int FUNC_0 (char*,int ,unsigned char) ;
 int FUNC_1 (TYPE_5__*,unsigned long) ;
 int FUNC_2 (TYPE_5__*,unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ,int) ;
 unsigned char FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,unsigned char) ;

__attribute__((used)) static void FUNC_6(pc300dev_t *VAR_1, unsigned char VAR_2)
{
 pc300ch_t *VAR_3 = (pc300ch_t *)VAR_1->chan;
 pc300_t *VAR_4 = (pc300_t *) VAR_3->card;
 int VAR_5 = VAR_3->channel;
 unsigned long VAR_6;

 FUNC_0("%s-tty: Set signal %x\n",
  VAR_1->dev->name, VAR_2);
 FUNC_1(VAR_4, VAR_6);
 FUNC_5(VAR_4->hw.scabase + FUNC_3(VAR_0,VAR_5),
  FUNC_4(VAR_4->hw.scabase+FUNC_3(VAR_0,VAR_5))& ~VAR_2);
 FUNC_2(VAR_4,VAR_6);
}
