
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int operation; } ;
struct hv_kvp_msg {TYPE_1__ kvp_hdr; } ;
struct TYPE_4__ {int active; scalar_t__ kvp_context; } ;




 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct hv_kvp_msg *VAR_2)
{
 int VAR_3 = 1;

 switch (VAR_2->kvp_hdr.operation) {
 case 129:
  VAR_0 = 129;
  FUNC_2("KVP: IP injection functionality not available\n");
  FUNC_2("KVP: Upgrade the KVP daemon\n");
  break;
 case 128:
  VAR_0 = 128;
  break;
 default:
  FUNC_2("KVP: incompatible daemon\n");
  FUNC_2("KVP: KVP version: %d, Daemon version: %d\n",
   128, VAR_2->kvp_hdr.operation);
  VAR_3 = 0;
 }

 if (VAR_3) {



  FUNC_2("KVP: user-mode registering done.\n");
  FUNC_1(VAR_0);
  VAR_1.active = 0;
  if (VAR_1.kvp_context)
   FUNC_0(VAR_1.kvp_context);
 }
 return VAR_3;
}
