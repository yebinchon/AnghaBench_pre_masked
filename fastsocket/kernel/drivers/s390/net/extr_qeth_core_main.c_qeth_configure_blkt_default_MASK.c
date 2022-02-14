
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time_total; int inter_packet; int inter_packet_jumbo; } ;
struct TYPE_4__ {TYPE_1__ blkt; } ;
struct qeth_card {TYPE_2__ info; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct qeth_card *VAR_1, char *VAR_2) {
 FUNC_0(VAR_0, 2, "cfgblkt");

 if (VAR_2[74] == 0xF0 && VAR_2[75] == 0xF0 &&
     VAR_2[76] >= 0xF1 && VAR_2[76] <= 0xF4) {
  VAR_1->info.blkt.time_total = 0;
  VAR_1->info.blkt.inter_packet = 0;
  VAR_1->info.blkt.inter_packet_jumbo = 0;
 } else {
  VAR_1->info.blkt.time_total = 250;
  VAR_1->info.blkt.inter_packet = 5;
  VAR_1->info.blkt.inter_packet_jumbo = 15;
 }
}
