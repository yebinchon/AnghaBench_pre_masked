
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int time_total; unsigned int inter_packet; unsigned int inter_packet_jumbo; } ;
struct TYPE_4__ {TYPE_1__ blkt; } ;
struct qeth_card {TYPE_2__ info; } ;


 char* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct qeth_card *VAR_1,
  char *VAR_2)
{
 VAR_2[16] = VAR_0['B'];
 VAR_2[17] = VAR_0['L'];
 VAR_2[18] = VAR_0['K'];
 VAR_2[19] = VAR_0['T'];
 *((unsigned int *) (&VAR_2[20])) = VAR_1->info.blkt.time_total;
 *((unsigned int *) (&VAR_2[24])) = VAR_1->info.blkt.inter_packet;
 *((unsigned int *) (&VAR_2[28])) =
  VAR_1->info.blkt.inter_packet_jumbo;
}
