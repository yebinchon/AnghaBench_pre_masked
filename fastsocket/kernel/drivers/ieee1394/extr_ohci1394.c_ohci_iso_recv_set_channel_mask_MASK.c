
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct ohci_iso_recv {int ohci; } ;
struct hpsb_iso {struct ohci_iso_recv* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hpsb_iso *VAR_5, u64 VAR_6)
{
 struct ohci_iso_recv *VAR_7 = VAR_5->hostdata;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 64; VAR_8++) {
  if (VAR_6 & (1ULL << VAR_8)) {
   if (VAR_8 < 32)
    FUNC_2(VAR_7->ohci, VAR_3, (1 << VAR_8));
   else
    FUNC_2(VAR_7->ohci, VAR_1, (1 << (VAR_8-32)));
  } else {
   if (VAR_8 < 32)
    FUNC_2(VAR_7->ohci, VAR_2, (1 << VAR_8));
   else
    FUNC_2(VAR_7->ohci, VAR_0, (1 << (VAR_8-32)));
  }
 }


 FUNC_0();
 FUNC_1(VAR_7->ohci, VAR_4);
}
