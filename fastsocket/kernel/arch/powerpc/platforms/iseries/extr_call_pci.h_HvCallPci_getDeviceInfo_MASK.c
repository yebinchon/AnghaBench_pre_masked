
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct HvCallPci_DsaAddr {int subBusNumber; int deviceId; int busNumber; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_1(u16 VAR_1, u8 VAR_2,
  u8 VAR_3, u64 VAR_4, u32 VAR_5)
{
 struct HvCallPci_DsaAddr VAR_6;

 *((u64*)&VAR_6) = 0;

 VAR_6.busNumber = VAR_1;
 VAR_6.subBusNumber = VAR_2;
 VAR_6.deviceId = VAR_3 << 4;

 return FUNC_0(VAR_0, *(u64*)&VAR_6, VAR_4, VAR_5);
}
