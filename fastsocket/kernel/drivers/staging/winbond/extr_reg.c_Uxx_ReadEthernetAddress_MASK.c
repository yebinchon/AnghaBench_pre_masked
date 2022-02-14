
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct hw_data {scalar_t__ PermanentMacAddress; } ;


 int FUNC_0 (struct hw_data*,int,scalar_t__*) ;
 int FUNC_1 (struct hw_data*,int,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4( struct hw_data * VAR_0 )
{
 u32 VAR_1;



 FUNC_1( VAR_0, 0x03b4, 0x08000000 );
 FUNC_0( VAR_0, 0x03b4, &VAR_1 );
 *(u16 *)VAR_0->PermanentMacAddress = FUNC_2((u16)VAR_1);
 FUNC_1( VAR_0, 0x03b4, 0x08010000 );
 FUNC_0( VAR_0, 0x03b4, &VAR_1 );
 *(u16 *)(VAR_0->PermanentMacAddress + 2) = FUNC_2((u16)VAR_1);
 FUNC_1( VAR_0, 0x03b4, 0x08020000 );
 FUNC_0( VAR_0, 0x03b4, &VAR_1 );
 *(u16 *)(VAR_0->PermanentMacAddress + 4) = FUNC_2((u16)VAR_1);
 *(u16 *)(VAR_0->PermanentMacAddress + 6) = 0;
 FUNC_1( VAR_0, 0x03e8, FUNC_3(*(u32 *)VAR_0->PermanentMacAddress) );
 FUNC_1( VAR_0, 0x03ec, FUNC_3(*(u32 *)(VAR_0->PermanentMacAddress+4)) );
}
