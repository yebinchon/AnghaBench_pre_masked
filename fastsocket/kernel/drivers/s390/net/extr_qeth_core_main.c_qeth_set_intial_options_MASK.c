
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* type; } ;
struct TYPE_4__ {void* type; } ;
struct TYPE_6__ {int cq; int isolation; int rx_sg_cb; scalar_t__ performance_stats; int add_hhlen; scalar_t__ fake_broadcast; int macaddr_mode; int broadcast_mode; int checksum_type; TYPE_2__ route6; TYPE_1__ route4; } ;
struct qeth_card {TYPE_3__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct qeth_card *VAR_8)
{
 VAR_8->options.route4.type = VAR_2;
 VAR_8->options.route6.type = VAR_2;
 VAR_8->options.checksum_type = VAR_3;
 VAR_8->options.broadcast_mode = VAR_6;
 VAR_8->options.macaddr_mode = VAR_7;
 VAR_8->options.fake_broadcast = 0;
 VAR_8->options.add_hhlen = VAR_0;
 VAR_8->options.performance_stats = 0;
 VAR_8->options.rx_sg_cb = VAR_5;
 VAR_8->options.isolation = VAR_1;
 VAR_8->options.cq = VAR_4;
}
