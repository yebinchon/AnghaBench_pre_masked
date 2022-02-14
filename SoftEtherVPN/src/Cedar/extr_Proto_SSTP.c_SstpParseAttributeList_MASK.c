
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* USHORT ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_8__ {int TotalLength; } ;
struct TYPE_7__ {void* MessageType; } ;
typedef TYPE_1__ SSTP_PACKET ;
typedef TYPE_2__ SSTP_ATTRIBUTE ;
typedef int LIST ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *,int) ;

LIST *FUNC_7(UCHAR *VAR_0, UINT VAR_1, SSTP_PACKET *VAR_2)
{
 LIST *VAR_3;
 USHORT VAR_4;
 UINT VAR_5;

 if (VAR_1 == 0 || VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 if (VAR_1 < 4)
 {
  return ((void*)0);
 }


 VAR_4 = FUNC_3(VAR_0);
 VAR_2->MessageType = VAR_4;
 VAR_0 += sizeof(USHORT);
 VAR_1 -= sizeof(USHORT);


 VAR_5 = FUNC_3(VAR_0);
 VAR_0 += sizeof(USHORT);
 VAR_1 -= sizeof(USHORT);


 VAR_3 = FUNC_2(((void*)0));

 while (FUNC_1(VAR_3) < VAR_5)
 {
  SSTP_ATTRIBUTE *VAR_6 = FUNC_6(VAR_0, VAR_1);

  if (VAR_6 == ((void*)0))
  {
   FUNC_5(VAR_3);
   return ((void*)0);
  }

  if (VAR_6->TotalLength > VAR_1)
  {
   FUNC_4(VAR_6);
   FUNC_5(VAR_3);
   return ((void*)0);
  }

  FUNC_0(VAR_3, VAR_6);

  VAR_0 += VAR_6->TotalLength;
  VAR_1 -= VAR_6->TotalLength;
 }

 return VAR_3;
}
