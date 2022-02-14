
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int family; int usec_timeout; TYPE_1__* mc_fw; } ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ data; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_4(struct radeon_device *VAR_17)
{
 const __be32 *VAR_18;
 u32 VAR_19, VAR_20 = 0;
 u32 *VAR_21;
 int VAR_22, VAR_23, VAR_24;

 if (!VAR_17->mc_fw)
  return -VAR_0;

 switch (VAR_17->family) {
 case 129:
  VAR_21 = (u32 *)&VAR_15;
  VAR_23 = VAR_9;
  VAR_24 = VAR_10;
  break;
 case 130:
  VAR_21 = (u32 *)&VAR_14;
  VAR_23 = VAR_9;
  VAR_24 = VAR_10;
  break;
 case 128:
 default:
  VAR_21 = (u32 *)&VAR_16;
  VAR_23 = VAR_9;
  VAR_24 = VAR_10;
  break;
 case 131:
  VAR_21 = (u32 *)&VAR_13;
  VAR_23 = VAR_7;
  VAR_24 = VAR_10;
  break;
 }

 VAR_19 = FUNC_0(VAR_3) & VAR_8;

 if (VAR_19 == 0) {
  if (VAR_19) {
   VAR_20 = FUNC_0(VAR_6);
   FUNC_1(VAR_6, VAR_20 | 1);
  }


  FUNC_1(VAR_3, 0x00000008);
  FUNC_1(VAR_3, 0x00000010);


  for (VAR_22 = 0; VAR_22 < VAR_24; VAR_22++) {
   FUNC_1(VAR_2, VAR_21[(VAR_22 << 1)]);
   FUNC_1(VAR_1, VAR_21[(VAR_22 << 1) + 1]);
  }

  VAR_18 = (const __be32 *)VAR_17->mc_fw->data;
  for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++)
   FUNC_1(VAR_4, FUNC_2(VAR_18++));


  FUNC_1(VAR_3, 0x00000008);
  FUNC_1(VAR_3, 0x00000004);
  FUNC_1(VAR_3, 0x00000001);


  for (VAR_22 = 0; VAR_22 < VAR_17->usec_timeout; VAR_22++) {
   if (FUNC_0(VAR_5) & VAR_11)
    break;
   FUNC_3(1);
  }
  for (VAR_22 = 0; VAR_22 < VAR_17->usec_timeout; VAR_22++) {
   if (FUNC_0(VAR_5) & VAR_12)
    break;
   FUNC_3(1);
  }

  if (VAR_19)
   FUNC_1(VAR_6, VAR_20);
 }

 return 0;
}
