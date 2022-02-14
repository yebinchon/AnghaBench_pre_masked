
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct latency_cont {int counter; int fabric; int channel; } ;
struct TYPE_12__ {int lock; struct latency_cont cmd; struct latency_cont write; struct latency_cont read; } ;
struct zfcp_unit {TYPE_6__ latencies; } ;
struct zfcp_fsf_req {TYPE_5__* qtcb; struct zfcp_unit* unit; } ;
struct fsf_qual_latency_info {int fabric_lat; int channel_lat; } ;
struct TYPE_9__ {int data_direction; } ;
struct TYPE_10__ {TYPE_3__ io; } ;
struct TYPE_7__ {struct fsf_qual_latency_info latency_info; } ;
struct TYPE_8__ {TYPE_1__ prot_status_qual; } ;
struct TYPE_11__ {TYPE_4__ bottom; TYPE_2__ prefix; } ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct zfcp_fsf_req *VAR_0)
{
 struct fsf_qual_latency_info *VAR_1;
 struct latency_cont *VAR_2;
 struct zfcp_unit *VAR_3 = VAR_0->unit;

 VAR_1 = &VAR_0->qtcb->prefix.prot_status_qual.latency_info;

 switch (VAR_0->qtcb->bottom.io.data_direction) {
 case 132:
 case 133:
 case 129:
  VAR_2 = &VAR_3->latencies.read;
  break;
 case 130:
 case 131:
 case 128:
  VAR_2 = &VAR_3->latencies.write;
  break;
 case 134:
  VAR_2 = &VAR_3->latencies.cmd;
  break;
 default:
  return;
 }

 FUNC_0(&VAR_3->latencies.lock);
 FUNC_2(&VAR_2->channel, VAR_1->channel_lat);
 FUNC_2(&VAR_2->fabric, VAR_1->fabric_lat);
 VAR_2->counter++;
 FUNC_1(&VAR_3->latencies.lock);
}
