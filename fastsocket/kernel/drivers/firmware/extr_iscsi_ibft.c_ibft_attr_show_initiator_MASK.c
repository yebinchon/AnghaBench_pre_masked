
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibft_kobject {void* header; struct ibft_initiator* initiator; } ;
struct TYPE_2__ {int index; int flags; } ;
struct ibft_initiator {int initiator_name_off; int initiator_name_len; int sec_radius_server; int pri_radius_server; int slp_server; int isns_server; TYPE_1__ hdr; } ;
typedef int ssize_t ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_3(void *VAR_0, int VAR_1, char *VAR_2)
{
 struct ibft_kobject *VAR_3 = VAR_0;
 struct ibft_initiator *VAR_4 = VAR_3->initiator;
 void *VAR_5 = VAR_3->header;
 char *VAR_6 = VAR_2;

 if (!VAR_4)
  return 0;

 switch (VAR_1) {
 case 133:
  VAR_6 += FUNC_0(VAR_6, "%d\n", VAR_4->hdr.index);
  break;
 case 134:
  VAR_6 += FUNC_0(VAR_6, "%d\n", VAR_4->hdr.flags);
  break;
 case 131:
  VAR_6 += FUNC_1(VAR_6, VAR_4->isns_server);
  break;
 case 128:
  VAR_6 += FUNC_1(VAR_6, VAR_4->slp_server);
  break;
 case 130:
  VAR_6 += FUNC_1(VAR_6, VAR_4->pri_radius_server);
  break;
 case 129:
  VAR_6 += FUNC_1(VAR_6, VAR_4->sec_radius_server);
  break;
 case 132:
  VAR_6 += FUNC_2(VAR_6, VAR_4->initiator_name_len,
          (char *)VAR_5 +
          VAR_4->initiator_name_off);
  break;
 default:
  break;
 }

 return VAR_6 - VAR_2;
}
