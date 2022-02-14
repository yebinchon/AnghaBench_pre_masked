
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int volume; int handle; } ;
struct rpc_audmgr_cb_func_ptr {TYPE_1__ u; int status; int set_to_one; } ;
struct audmgr {int handle; int wait; int state; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct audmgr *VAR_3,
       struct rpc_audmgr_cb_func_ptr *VAR_4,
       int VAR_5)
{
 if (VAR_5 < (sizeof(uint32_t) * 3))
  return;
 if (FUNC_0(VAR_4->set_to_one) != 1)
  return;

 switch (FUNC_0(VAR_4->status)) {
 case 130:
  if (VAR_5 < sizeof(uint32_t) * 4)
   break;
  VAR_3->handle = FUNC_0(VAR_4->u.handle);
  FUNC_2("audmgr: rpc READY handle=0x%08x\n", VAR_3->handle);
  break;
 case 135: {
  uint32_t VAR_6;
  if (VAR_5 < sizeof(uint32_t) * 4)
   break;
  VAR_6 = FUNC_0(VAR_4->u.volume);
  FUNC_2("audmgr: rpc CODEC_CONFIG volume=0x%08x\n", VAR_6);
  VAR_3->state = VAR_1;
  FUNC_3(&VAR_3->wait);
  break;
 }
 case 131:
  FUNC_1("audmgr: PENDING?\n");
  break;
 case 129:
  FUNC_1("audmgr: SUSPEND?\n");
  break;
 case 132:
  FUNC_1("audmgr: FAILURE\n");
  break;
 case 128:
  FUNC_1("audmgr: VOLUME_CHANGE?\n");
  break;
 case 134:
  FUNC_1("audmgr: DISABLED\n");
  VAR_3->state = VAR_0;
  FUNC_3(&VAR_3->wait);
  break;
 case 133:
  FUNC_1("audmgr: ERROR?\n");
  VAR_3->state = VAR_2;
  FUNC_3(&VAR_3->wait);
  break;
 default:
  break;
 }
}
