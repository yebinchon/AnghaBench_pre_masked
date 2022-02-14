
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u8 ;
typedef void* u32 ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_1__ mibattribute; int msgcode; } ;
typedef TYPE_2__ p80211msg_dot11req_mibset_t ;
struct TYPE_7__ {void* data; void* did; } ;
typedef TYPE_3__ p80211item_uint32_t ;
typedef int mibitem ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(wlandevice_t *VAR_1, u32 VAR_2, u32 VAR_3)
{
 p80211msg_dot11req_mibset_t VAR_4;
 p80211item_uint32_t VAR_5;
 int VAR_6;

 VAR_4.msgcode = VAR_0;
 VAR_5.did = VAR_2;
 VAR_5.data = VAR_3;
 FUNC_0(&VAR_4.mibattribute.data, &VAR_5, sizeof(VAR_5));
 VAR_6 = FUNC_1(VAR_1, (u8 *) & VAR_4);

 return VAR_6;
}
