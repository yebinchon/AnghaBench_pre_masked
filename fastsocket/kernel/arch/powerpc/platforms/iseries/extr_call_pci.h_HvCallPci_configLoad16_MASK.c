
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u64 ;
typedef int u32 ;
typedef int u16 ;
struct HvCallPci_LoadReturn {scalar_t__ rc; int value; } ;
struct HvCallPci_DsaAddr {void* deviceId; void* subBusNumber; int busNumber; } ;


 int FUNC_0 (int ,struct HvCallPci_LoadReturn*,scalar_t__,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_1(u16 VAR_1, u8 VAR_2,
  u8 VAR_3, u32 VAR_4, u16 *VAR_5)
{
 struct HvCallPci_DsaAddr VAR_6;
 struct HvCallPci_LoadReturn VAR_7;

 *((u64*)&VAR_6) = 0;

 VAR_6.busNumber = VAR_1;
 VAR_6.subBusNumber = VAR_2;
 VAR_6.deviceId = VAR_3;

 FUNC_0(VAR_0, &VAR_7, *(u64 *)&VAR_6, VAR_4, 0);

 *VAR_5 = VAR_7.value;

 return VAR_7.rc;
}
