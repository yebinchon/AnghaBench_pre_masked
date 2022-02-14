
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uhci_td {void* buffer; void* token; void* status; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct uhci_td *VAR_0, u32 VAR_1,
  u32 VAR_2, u32 VAR_3)
{
 VAR_0->status = FUNC_0(VAR_1);
 VAR_0->token = FUNC_0(VAR_2);
 VAR_0->buffer = FUNC_0(VAR_3);
}
