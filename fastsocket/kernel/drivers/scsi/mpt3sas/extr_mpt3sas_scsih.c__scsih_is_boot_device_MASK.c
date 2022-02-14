
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_3__ {int DeviceName; int EnclosureSlot; int SasWwid; } ;
typedef TYPE_1__ Mpi2BiosPage2BootDevice_t ;






 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int
FUNC_3(u64 VAR_0, u64 VAR_1,
 u64 VAR_2, u16 VAR_3, u8 VAR_4,
 Mpi2BiosPage2BootDevice_t *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {
 case 128:
  if (!VAR_0)
   break;
  VAR_6 = FUNC_2(
      VAR_0, &VAR_5->SasWwid);
  break;
 case 130:
  if (!VAR_2)
   break;
  VAR_6 = FUNC_1(
      VAR_2,
      VAR_3, &VAR_5->EnclosureSlot);
  break;
 case 131:
  if (!VAR_1)
   break;
  VAR_6 = FUNC_0(
      VAR_1, &VAR_5->DeviceName);
  break;
 case 129:
  break;
 }

 return VAR_6;
}
