
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_8__ {scalar_t__ num_item; } ;
struct TYPE_7__ {int SockEvent; int Event; TYPE_2__* Queue; int SizeOfHeader; } ;
typedef TYPE_1__ TUBE ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (void*,scalar_t__,void*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;

bool FUNC_7(TUBE *VAR_0, void *VAR_1, UINT VAR_2, void *VAR_3, bool VAR_4, UINT VAR_5)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 if (FUNC_1(VAR_0) == 0)
 {
  return 0;
 }

 FUNC_2(VAR_0->Queue);
 {
  if (VAR_5 == 0 || (VAR_0->Queue->num_item <= VAR_5))
  {
   FUNC_0(VAR_0->Queue, FUNC_3(VAR_1, VAR_2, VAR_3, VAR_0->SizeOfHeader));
  }
  else
  {
   VAR_4 = 1;
  }
 }
 FUNC_6(VAR_0->Queue);

 if (VAR_4 == 0)
 {
  FUNC_4(VAR_0->Event);
  FUNC_5(VAR_0->SockEvent);
 }

 return 1;
}
