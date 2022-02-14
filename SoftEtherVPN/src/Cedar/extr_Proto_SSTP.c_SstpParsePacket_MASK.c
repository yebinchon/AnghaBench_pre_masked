
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_6__ {int Version; int IsControl; int DataSize; int * AttributeList; int Data; } ;
typedef TYPE_1__ SSTP_PACKET ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int ,int,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;

SSTP_PACKET *FUNC_5(UCHAR *VAR_1, UINT VAR_2)
{
 SSTP_PACKET *VAR_3;
 USHORT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return ((void*)0);
 }

 if (VAR_2 < 4)
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_4(sizeof(SSTP_PACKET));


 VAR_3->Version = *((UCHAR *)VAR_1);
 VAR_1++;
 VAR_2--;

 if (VAR_3->Version != VAR_0)
 {

  FUNC_2(VAR_3);
  return ((void*)0);
 }


 if ((*((UCHAR *)VAR_1)) & 0x01)
 {
  VAR_3->IsControl = 1;
 }
 VAR_1++;
 VAR_2--;


 VAR_4 = FUNC_1(VAR_1) & 0xFFF;
 VAR_1 += sizeof(USHORT);
 VAR_2 -= sizeof(USHORT);

 if (VAR_4 < 4)
 {

  FUNC_2(VAR_3);
  return ((void*)0);
 }

 if (((UINT)(VAR_4 - 4)) > VAR_2)
 {

  FUNC_2(VAR_3);
  return ((void*)0);
 }


 VAR_3->DataSize = VAR_4 - 4;
 VAR_3->Data = FUNC_0(VAR_1, VAR_3->DataSize);

 if (VAR_3->IsControl)
 {

  VAR_3->AttributeList = FUNC_3(VAR_3->Data, VAR_3->DataSize, VAR_3);

  if (VAR_3->AttributeList == ((void*)0))
  {

   FUNC_2(VAR_3);
   return ((void*)0);
  }
 }

 return VAR_3;
}
