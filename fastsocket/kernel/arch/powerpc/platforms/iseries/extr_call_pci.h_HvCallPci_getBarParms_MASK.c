
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct HvCallPci_DsaAddr {void* barNumber; void* deviceId; void* subBusNumber; int busNumber; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_1(u16 VAR_1, u8 VAR_2,
  u8 VAR_3, u8 VAR_4, u64 VAR_5, u32 VAR_6)
{
 struct HvCallPci_DsaAddr VAR_7;

 *((u64*)&VAR_7) = 0;

 VAR_7.busNumber = VAR_1;
 VAR_7.subBusNumber = VAR_2;
 VAR_7.deviceId = VAR_3;
 VAR_7.barNumber = VAR_4;

 return FUNC_0(VAR_0, *(u64*)&VAR_7, VAR_5, VAR_6);
}
