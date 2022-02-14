
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wlandevice_t ;
typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int len; } ;
typedef TYPE_1__ p80211pstrd_t ;
typedef int p80211msg_dot11req_mibset_t ;
struct TYPE_6__ {int parm1; } ;
typedef TYPE_2__ mibrec_t ;
typedef int hfa384x_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(mibrec_t *VAR_3,
       int VAR_4,
       wlandevice_t *VAR_5,
       hfa384x_t *VAR_6,
       p80211msg_dot11req_mibset_t *VAR_7,
       void *VAR_8)
{
 int VAR_9;
 p80211pstrd_t *VAR_10 = (p80211pstrd_t *) VAR_8;
 u8 VAR_11[VAR_2];
 u16 VAR_12;

 if (VAR_4) {
  VAR_9 = 0;
 } else {
  VAR_12 = (VAR_10->len > 5) ? VAR_0 :
      VAR_1;
  FUNC_1(VAR_11, 0, VAR_12);
  FUNC_2(VAR_11, VAR_10);
  VAR_9 = FUNC_0(VAR_6, VAR_3->parm1, VAR_11, VAR_12);
 }

 return VAR_9;
}
