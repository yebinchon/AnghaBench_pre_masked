
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {char* opcode; } ;
struct TYPE_18__ {TYPE_8__ rsp; } ;
struct TYPE_16__ {int status; } ;
struct viosrp_host_config {TYPE_7__ common; } ;
struct TYPE_14__ {int length; int status; } ;
struct viosrp_adapter_info {TYPE_5__ common; int buffer; } ;
struct TYPE_12__ {int status; } ;
struct TYPE_13__ {TYPE_3__ common; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_11__ {TYPE_1__ common; } ;
struct TYPE_15__ {struct viosrp_host_config host_config; struct viosrp_adapter_info adapter_info; TYPE_4__ error_log; TYPE_2__ empty_iu; } ;
union viosrp_iu {TYPE_9__ srp; TYPE_6__ mad; } ;
struct iu_entry {int dummy; } ;






 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (struct iu_entry*,int ,int ) ;
 int FUNC_2 (struct iu_entry*,int,int ) ;
 union viosrp_iu* FUNC_3 (struct iu_entry*) ;

__attribute__((used)) static int FUNC_4(struct iu_entry *VAR_1)
{
 union viosrp_iu *VAR_2 = FUNC_3(VAR_1);
 struct viosrp_adapter_info *VAR_3;
 struct viosrp_host_config *VAR_4;

 switch (VAR_2->mad.empty_iu.common.type) {
 case 130:
  FUNC_0("%s\n", "Unsupported EMPTY MAD IU");
  break;
 case 129:
  FUNC_0("%s\n", "Unsupported ERROR LOG MAD IU");
  VAR_2->mad.error_log.common.status = 1;
  FUNC_2(VAR_1, sizeof(VAR_2->mad.error_log), VAR_0);
  break;
 case 131:
  VAR_3 = &VAR_2->mad.adapter_info;
  VAR_3->common.status = FUNC_1(VAR_1, VAR_3->buffer,
       VAR_3->common.length);
  FUNC_2(VAR_1, sizeof(*VAR_3), VAR_0);
  break;
 case 128:
  VAR_4 = &VAR_2->mad.host_config;
  VAR_4->common.status = 1;
  FUNC_2(VAR_1, sizeof(*VAR_4), VAR_0);
  break;
 default:
  FUNC_0("Unknown type %u\n", VAR_2->srp.rsp.opcode);
 }

 return 1;
}
