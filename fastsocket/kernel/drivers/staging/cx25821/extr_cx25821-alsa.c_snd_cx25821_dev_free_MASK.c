
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_card {TYPE_1__* private_data; } ;
struct TYPE_2__ {int card; } ;
typedef TYPE_1__ snd_cx25821_card_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_card *VAR_0)
{
 snd_cx25821_card_t *VAR_1 = VAR_0->private_data;


 FUNC_0(VAR_1->card);
}
