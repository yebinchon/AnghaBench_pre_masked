
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ixgbe_adapter {TYPE_1__* vfinfo; } ;
struct TYPE_2__ {int vf_api; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,size_t,int) ;



__attribute__((used)) static int FUNC_1(struct ixgbe_adapter *VAR_1,
      u32 *VAR_2, u32 VAR_3)
{
 int VAR_4 = VAR_2[1];

 switch (VAR_4) {
 case 129:
 case 128:
  VAR_1->vfinfo[VAR_3].vf_api = VAR_4;
  return 0;
 default:
  break;
 }

 FUNC_0(VAR_0, "VF %d requested invalid api version %u\n", VAR_3, VAR_4);

 return -1;
}
