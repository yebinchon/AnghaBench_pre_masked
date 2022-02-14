
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int flags; } ;
typedef int pvc_device ;
typedef int hdlc_device ;
struct TYPE_2__ {int dce_changed; int dce_pvc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,unsigned int) ;
 struct net_device** FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(hdlc_device *VAR_3, unsigned int VAR_4, int VAR_5)
{
 pvc_device *VAR_6;
 struct net_device *VAR_7;

 if ((VAR_6 = FUNC_1(VAR_3, VAR_4)) == ((void*)0))
  return -VAR_1;

 if ((VAR_7 = *FUNC_2(VAR_6, VAR_5)) == ((void*)0))
  return -VAR_1;

 if (VAR_7->flags & VAR_2)
  return -VAR_0;

 FUNC_5(VAR_7);
 *FUNC_2(VAR_6, VAR_5) = ((void*)0);

 if (!FUNC_3(VAR_6)) {
  FUNC_4(VAR_3)->dce_pvc_count--;
  FUNC_4(VAR_3)->dce_changed = 1;
 }
 FUNC_0(VAR_3);
 return 0;
}
