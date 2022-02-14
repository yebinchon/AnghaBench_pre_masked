
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef void* u16 ;
struct TYPE_5__ {int adrController; } ;
struct TYPE_6__ {TYPE_1__ adr; void* Messagenumber; void* Subcommand; void* Command; void* ApplId; } ;
typedef TYPE_2__ _cmsg ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

unsigned FUNC_1(_cmsg * VAR_0, u16 VAR_1,
     u8 VAR_2, u8 VAR_3,
     u16 VAR_4, u32 VAR_5)
{
 FUNC_0(VAR_0, 0, sizeof(_cmsg));
 VAR_0->ApplId = VAR_1;
 VAR_0->Command = VAR_2;
 VAR_0->Subcommand = VAR_3;
 VAR_0->Messagenumber = VAR_4;
 VAR_0->adr.adrController = VAR_5;
 return 0;
}
