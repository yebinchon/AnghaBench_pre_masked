
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_3__ {scalar_t__ NextPollIp; scalar_t__ DestPort; int lock; int DestIp; int Udp; int HostName; } ;
typedef TYPE_1__ SLOG ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int *,scalar_t__,int *,int) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int *,int,int *) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int) ;

void FUNC_11(SLOG *VAR_2, wchar_t *VAR_3)
{
 UCHAR *VAR_4;
 UINT VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_5 = FUNC_0(VAR_3);
 VAR_4 = FUNC_10(VAR_5);
 FUNC_8(VAR_4, VAR_5, VAR_3);

 if (VAR_5 >= 1024)
 {
  VAR_5 = 1023;
 }

 FUNC_5(VAR_2->lock);
 {
  if (FUNC_7() >= VAR_2->NextPollIp)
  {
   IP VAR_6;

   if (FUNC_3(&VAR_6, VAR_2->HostName))
   {
    VAR_2->NextPollIp = FUNC_7() + VAR_0;
    FUNC_1(&VAR_2->DestIp, &VAR_6, sizeof(IP));
   }
   else
   {
    VAR_2->NextPollIp = FUNC_7() + VAR_1;
   }
  }

  if (VAR_2->DestPort != 0 && FUNC_4(&VAR_2->DestIp) == 0)
  {
   FUNC_6(VAR_2->Udp, &VAR_2->DestIp, VAR_2->DestPort, VAR_4, VAR_5);
  }
 }
 FUNC_9(VAR_2->lock);

 FUNC_2(VAR_4);
}
