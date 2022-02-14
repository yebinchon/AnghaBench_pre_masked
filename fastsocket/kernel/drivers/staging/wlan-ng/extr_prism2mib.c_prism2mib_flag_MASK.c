
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
struct TYPE_3__ {int parm2; int parm1; } ;
typedef TYPE_1__ mibrec_t ;
typedef int hfa384x_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(mibrec_t *VAR_3,
     int VAR_4,
     wlandevice_t *VAR_5,
     hfa384x_t *VAR_6,
     p80211msg_dot11req_mibset_t *VAR_7, void *VAR_8)
{
 int VAR_9;
 u32 *VAR_10 = (u32 *) VAR_8;
 u8 VAR_11[VAR_0];
 u16 *VAR_12 = (u16 *) VAR_11;
 u32 VAR_13;

 VAR_9 = FUNC_0(VAR_6, VAR_3->parm1, VAR_12);
 if (VAR_9 == 0) {
  VAR_13 = *VAR_12;
  if (VAR_4) {
   *VAR_10 = (VAR_13 & VAR_3->parm2) ?
       VAR_2 : VAR_1;
  } else {
   if ((*VAR_10) == VAR_2)
    VAR_13 |= VAR_3->parm2;
   else
    VAR_13 &= ~VAR_3->parm2;
   *VAR_12 = VAR_13;
   VAR_9 =
       FUNC_1(VAR_6, VAR_3->parm1, *VAR_12);
  }
 }

 return VAR_9;
}
