
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u8 ;
typedef int p80211pstrd_t ;
typedef int p80211msg_dot11req_mibset_t ;
struct TYPE_3__ {int parm2; int parm1; } ;
typedef TYPE_1__ mibrec_t ;
typedef int hfa384x_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(mibrec_t *VAR_1,
       int VAR_2,
       wlandevice_t *VAR_3,
       hfa384x_t *VAR_4,
       p80211msg_dot11req_mibset_t *VAR_5,
       void *VAR_6)
{
 int VAR_7;
 p80211pstrd_t *VAR_8 = (p80211pstrd_t *) VAR_6;
 u8 VAR_9[VAR_0];

 if (VAR_2) {
  VAR_7 =
      FUNC_0(VAR_4, VAR_1->parm1, VAR_9, VAR_1->parm2);
  FUNC_3(VAR_9, VAR_8, VAR_1->parm2);
 } else {
  FUNC_2(VAR_9, 0, VAR_1->parm2);
  FUNC_4(VAR_9, VAR_8);
  VAR_7 =
      FUNC_1(VAR_4, VAR_1->parm1, VAR_9, VAR_1->parm2);
 }

 return VAR_7;
}
