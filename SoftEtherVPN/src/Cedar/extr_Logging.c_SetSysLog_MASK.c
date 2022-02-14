
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int lock; int NextPollIp; int HostName; scalar_t__ DestPort; int DestIp; } ;
typedef TYPE_1__ SLOG ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int,char*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;

void FUNC_8(SLOG *VAR_3, char *VAR_4, UINT VAR_5)
{
 IP VAR_6;

 if (VAR_3 == ((void*)0))
 {
  return;
 }
 if (VAR_5 == 0)
 {
  VAR_5 = VAR_2;
 }

 if (VAR_4 == ((void*)0))
 {
  VAR_4 = "";
 }

 FUNC_7(&VAR_6, sizeof(IP));
 FUNC_1(&VAR_6, VAR_4);

 FUNC_3(VAR_3->lock);
 {
  FUNC_0(&VAR_3->DestIp, &VAR_6, sizeof(IP));
  VAR_3->DestPort = VAR_5;
  FUNC_4(VAR_3->HostName, sizeof(VAR_3->HostName), VAR_4);
  VAR_3->NextPollIp = FUNC_5() + FUNC_2(&VAR_6) ? VAR_1 : VAR_0;
 }
 FUNC_6(VAR_3->lock);
}
