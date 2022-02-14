
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int USHORT ;
struct TYPE_4__ {int AttributeList; } ;
typedef TYPE_1__ SSTP_PACKET ;
typedef int SSTP_ATTRIBUTE ;


 int FUNC_0 (int ,int *) ;
 TYPE_1__* FUNC_1 (int ) ;

SSTP_PACKET *FUNC_2(USHORT VAR_0, SSTP_ATTRIBUTE *VAR_1)
{
 SSTP_PACKET *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 != ((void*)0))
 {
  FUNC_0(VAR_2->AttributeList, VAR_1);
 }

 return VAR_2;
}
