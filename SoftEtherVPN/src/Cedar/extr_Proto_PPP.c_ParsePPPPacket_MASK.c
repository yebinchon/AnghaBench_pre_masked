
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
typedef int UCHAR ;
struct TYPE_5__ {scalar_t__ Protocol; int IsControl; int DataSize; int * Lcp; int Data; } ;
typedef TYPE_1__ PPP_PACKET ;


 int FUNC_0 (int*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_3 (int*) ;
 TYPE_1__* FUNC_4 (int) ;

PPP_PACKET *FUNC_5(void *VAR_4, UINT VAR_5)
{
 PPP_PACKET *VAR_6;
 UCHAR *VAR_7;

 if (VAR_4 == ((void*)0) || VAR_5 == 0)
 {
  return ((void*)0);
 }

 VAR_6 = FUNC_4(sizeof(PPP_PACKET));

 VAR_7 = (UCHAR *)VAR_4;

 if (VAR_7[0] != 0xff)
 {
  goto LABEL_ERROR;
 }
 VAR_5--;
 VAR_7++;


 if (VAR_5 < 1)
 {
  goto LABEL_ERROR;
 }
 if (VAR_7[0] != 0x03)
 {
  goto LABEL_ERROR;
 }
 VAR_5--;
 VAR_7++;


 if (VAR_5 < 2)
 {
  goto LABEL_ERROR;
 }
 VAR_6->Protocol = FUNC_3(VAR_7);
 VAR_5 -= 2;
 VAR_7 += 2;

 if (VAR_6->Protocol == VAR_2 || VAR_6->Protocol == VAR_3 || VAR_6->Protocol == VAR_0 || VAR_6->Protocol == VAR_1)
 {
  VAR_6->IsControl = 1;
 }

 VAR_6->Data = FUNC_0(VAR_7, VAR_5);
 VAR_6->DataSize = VAR_5;

 if (VAR_6->IsControl)
 {
  VAR_6->Lcp = FUNC_2(VAR_6->Protocol, VAR_6->Data, VAR_6->DataSize);
  if (VAR_6->Lcp == ((void*)0))
  {
   goto LABEL_ERROR;
  }
 }

 return VAR_6;

LABEL_ERROR:
 FUNC_1(VAR_6);
 return ((void*)0);
}
