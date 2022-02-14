
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef scalar_t__ u64 ;
typedef int u16 ;
struct HvCallPci_LoadReturn {scalar_t__ rc; } ;
struct HvCallPci_DsaAddr {void* deviceId; void* subBusNumber; int busNumber; } ;


 int FUNC_0 (int ,struct HvCallPci_LoadReturn*,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static inline u64 FUNC_1(u16 VAR_1, u8 VAR_2,
  u8 VAR_3)
{
 struct HvCallPci_DsaAddr VAR_4;
 struct HvCallPci_LoadReturn VAR_5;

 *((u64*)&VAR_4) = 0;

 VAR_4.busNumber = VAR_1;
 VAR_4.subBusNumber = VAR_2;
 VAR_4.deviceId = VAR_3;

 FUNC_0(VAR_0, &VAR_5, *(u64*)&VAR_4);

 return VAR_5.rc;
}
