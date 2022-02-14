
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* UCHAR ;
struct TYPE_4__ {int AvpList; void* PacketId; void* Code; } ;
typedef TYPE_1__ RADIUS_PACKET ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;

RADIUS_PACKET *FUNC_2(UCHAR VAR_0, UCHAR VAR_1)
{
 RADIUS_PACKET *VAR_2 = FUNC_1(sizeof(RADIUS_PACKET));

 VAR_2->Code = VAR_0;
 VAR_2->PacketId = VAR_1;

 VAR_2->AvpList = FUNC_0(((void*)0));

 return VAR_2;
}
