
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef scalar_t__ UCHAR ;
struct TYPE_5__ {int ControllerOnly; int lock; int * PublicPorts; scalar_t__ NumPublicPort; scalar_t__ PublicIp; int * MemberPassword; scalar_t__ ControllerPort; int ControllerName; scalar_t__ Weight; scalar_t__ UpdatedServerType; TYPE_1__* Cedar; } ;
struct TYPE_4__ {int Bridge; } ;
typedef TYPE_2__ SERVER ;


 int FUNC_0 (int *,scalar_t__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,char*) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (scalar_t__) ;

void FUNC_8(SERVER *VAR_5, UINT VAR_6,
      UINT VAR_7, UINT VAR_8, UINT *VAR_9,
      char *VAR_10, UINT VAR_11, UCHAR *VAR_12, UINT VAR_13, bool VAR_14)
{
 bool VAR_15;

 if (VAR_5 == ((void*)0))
 {
  return;
 }
 if (VAR_6 == VAR_3 &&
  (VAR_8 == 0 || VAR_9 == ((void*)0) || VAR_10 == ((void*)0) ||
  VAR_11 == 0 || VAR_12 == ((void*)0) || VAR_8 > VAR_1))
 {
  return;
 }
 if (VAR_13 == 0)
 {
  VAR_13 = VAR_0;
 }

 VAR_15 = VAR_5->Cedar->Bridge;

 FUNC_3(VAR_5->lock);
 {

  VAR_5->UpdatedServerType = VAR_6;

  VAR_5->Weight = VAR_13;


  if (VAR_6 == VAR_3)
  {
   FUNC_5(VAR_5->ControllerName, sizeof(VAR_5->ControllerName), VAR_10);
   VAR_5->ControllerPort = VAR_11;
   if (FUNC_2(VAR_12, VAR_4) == 0)
   {
    FUNC_0(VAR_5->MemberPassword, VAR_12, VAR_4);
   }
   VAR_5->PublicIp = VAR_7;
   VAR_5->NumPublicPort = VAR_8;
   if (VAR_5->PublicPorts != ((void*)0))
   {
    FUNC_1(VAR_5->PublicPorts);
   }
   VAR_5->PublicPorts = FUNC_7(VAR_8 * sizeof(UINT));
   FUNC_0(VAR_5->PublicPorts, VAR_9, VAR_8 * sizeof(UINT));
  }

  if (VAR_6 == VAR_2)
  {
   VAR_5->ControllerOnly = VAR_14;
  }
 }
 FUNC_6(VAR_5->lock);


 FUNC_4(VAR_15);
}
