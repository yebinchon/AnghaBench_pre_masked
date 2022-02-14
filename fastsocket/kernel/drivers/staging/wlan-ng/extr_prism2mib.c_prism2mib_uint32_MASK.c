
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int p80211msg_dot11req_mibset_t ;
struct TYPE_3__ {int parm1; } ;
typedef TYPE_1__ mibrec_t ;
typedef int hfa384x_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(mibrec_t *VAR_1,
       int VAR_2,
       wlandevice_t *VAR_3,
       hfa384x_t *VAR_4,
       p80211msg_dot11req_mibset_t *VAR_5, void *VAR_6)
{
 int VAR_7;
 u32 *VAR_8 = (u32 *) VAR_6;
 u8 VAR_9[VAR_0];
 u16 *VAR_10 = (u16 *) VAR_9;

 if (VAR_2) {
  VAR_7 = FUNC_0(VAR_4, VAR_1->parm1, VAR_10);
  *VAR_8 = *VAR_10;
 } else {
  *VAR_10 = *VAR_8;
  VAR_7 = FUNC_1(VAR_4, VAR_1->parm1, *VAR_10);
 }

 return VAR_7;
}
