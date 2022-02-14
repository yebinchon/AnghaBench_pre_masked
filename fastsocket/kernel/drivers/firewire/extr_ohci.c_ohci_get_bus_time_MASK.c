
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct fw_ohci {int bus_seconds; } ;
struct fw_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct fw_ohci* FUNC_1 (struct fw_card*) ;
 int FUNC_2 (struct fw_ohci*,int ) ;

__attribute__((used)) static u64 FUNC_3(struct fw_card *VAR_1)
{
 struct fw_ohci *VAR_2 = FUNC_1(VAR_1);
 u32 VAR_3;
 u64 VAR_4;

 VAR_3 = FUNC_2(VAR_2, VAR_0);
 VAR_4 = ((u64)FUNC_0(&VAR_2->bus_seconds) << 32) | VAR_3;

 return VAR_4;
}
