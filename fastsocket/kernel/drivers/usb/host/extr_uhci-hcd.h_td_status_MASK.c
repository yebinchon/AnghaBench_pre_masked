
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uhci_td {int status; } ;
typedef int __le32 ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline u32 FUNC_2(struct uhci_td *VAR_0) {
 __le32 VAR_1 = VAR_0->status;

 FUNC_0();
 return FUNC_1(VAR_1);
}
