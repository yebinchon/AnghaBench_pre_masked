
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int hostwep; } ;
typedef TYPE_1__ wlandevice_t ;
typedef int p80211msg_dot11req_mibset_t ;
struct TYPE_8__ {int parm2; } ;
typedef TYPE_2__ mibrec_t ;
typedef int hfa384x_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int,TYPE_1__*,int *,int *,void*) ;

__attribute__((used)) static int FUNC_1(mibrec_t *VAR_4,
        int VAR_5,
        wlandevice_t *VAR_6,
        hfa384x_t *VAR_7,
        p80211msg_dot11req_mibset_t *VAR_8,
        void *VAR_9)
{
 int VAR_10;

 if (VAR_6->hostwep & VAR_2) {
  if (VAR_6->hostwep & VAR_2)
   VAR_4->parm2 |= VAR_0;
  if (VAR_6->hostwep & VAR_3)
   VAR_4->parm2 |= VAR_1;
 }

 VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);

 return VAR_10;
}
