
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int name; } ;
typedef TYPE_3__ wlandevice_t ;
typedef int u32 ;
struct TYPE_14__ {int buf; } ;
typedef TYPE_4__ pda_t ;
struct TYPE_12__ {int data; void* status; int len; int did; } ;
struct TYPE_11__ {int len; scalar_t__ data; void* status; int did; } ;
struct TYPE_15__ {int msglen; TYPE_2__ pda; TYPE_1__ resultcode; int devname; int msgcode; } ;
typedef TYPE_5__ p80211msg_p2req_readpda_t ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(pda_t *VAR_6, wlandevice_t *VAR_7)
{
 int VAR_8 = 0;
 p80211msg_p2req_readpda_t VAR_9;


 VAR_9.msgcode = VAR_0;
 VAR_9.msglen = sizeof(VAR_9);
 FUNC_3(VAR_9.devname, VAR_7->name);
 VAR_9.pda.did = VAR_1;
 VAR_9.pda.len = VAR_3;
 VAR_9.pda.status = VAR_4;
 VAR_9.resultcode.did = VAR_2;
 VAR_9.resultcode.len = sizeof(u32);
 VAR_9.resultcode.status = VAR_4;

 if (FUNC_2(VAR_7, &VAR_9) != 0) {

  VAR_8 = -1;
 } else if (VAR_9.resultcode.data == VAR_5) {
  FUNC_0(VAR_6->buf, VAR_9.pda.data, VAR_3);
  VAR_8 = FUNC_1(VAR_6);
 } else {

  VAR_8 = -1;
 }

 return VAR_8;
}
