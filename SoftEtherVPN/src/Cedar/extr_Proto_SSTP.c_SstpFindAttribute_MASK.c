
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_7__ {scalar_t__ AttributeId; } ;
struct TYPE_6__ {int AttributeList; } ;
typedef TYPE_1__ SSTP_PACKET ;
typedef TYPE_2__ SSTP_ATTRIBUTE ;


 TYPE_2__* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

SSTP_ATTRIBUTE *FUNC_2(SSTP_PACKET *VAR_0, UCHAR VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_2 = 0;VAR_2 < FUNC_1(VAR_0->AttributeList);VAR_2++)
 {
  SSTP_ATTRIBUTE *VAR_3 = FUNC_0(VAR_0->AttributeList, VAR_2);

  if (VAR_3->AttributeId == VAR_1)
  {
   return VAR_3;
  }
 }

 return ((void*)0);
}
