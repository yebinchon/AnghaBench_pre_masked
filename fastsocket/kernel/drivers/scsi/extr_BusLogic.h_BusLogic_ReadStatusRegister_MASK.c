
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BusLogic_HostAdapter {scalar_t__ IO_Address; } ;


 scalar_t__ VAR_0 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned char FUNC_1(struct BusLogic_HostAdapter *VAR_1)
{
 return FUNC_0(VAR_1->IO_Address + VAR_0);
}
