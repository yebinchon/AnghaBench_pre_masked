
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int IsControl; int AttributeList; int Version; int MessageType; } ;
typedef TYPE_1__ SSTP_PACKET ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

SSTP_PACKET *FUNC_2(USHORT VAR_1)
{
 SSTP_PACKET *VAR_2 = FUNC_1(sizeof(SSTP_PACKET));

 VAR_2->IsControl = 1;
 VAR_2->MessageType = VAR_1;
 VAR_2->Version = VAR_0;
 VAR_2->AttributeList = FUNC_0(((void*)0));

 return VAR_2;
}
