
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fritz_adapter {scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct fritz_adapter *VAR_2, int VAR_3)
{
 int VAR_4 = VAR_3 ? VAR_1 : VAR_0;

 return FUNC_0(VAR_2->io + VAR_4);
}
