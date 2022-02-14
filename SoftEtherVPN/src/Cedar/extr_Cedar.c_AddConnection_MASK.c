
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
typedef int UINT ;
struct TYPE_7__ {int ConnectionList; int ConnectionIncrement; } ;
struct TYPE_6__ {int Name; int ref; int lock; } ;
typedef TYPE_1__ CONNECTION ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int,char*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

void FUNC_11(CEDAR *VAR_1, CONNECTION *VAR_2)
{
 char VAR_3[VAR_0];
 UINT VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }


 VAR_4 = FUNC_6(VAR_1->ConnectionIncrement);
 FUNC_4(VAR_3, sizeof(VAR_3), "CID-%u", VAR_4);


 FUNC_7(VAR_2->lock);
 {
  FUNC_5(VAR_2->Name);
  VAR_2->Name = FUNC_2(VAR_3);
 }
 FUNC_9(VAR_2->lock);

 FUNC_8(VAR_1->ConnectionList);
 {
  FUNC_0(VAR_1->ConnectionList, VAR_2);
  FUNC_1(VAR_2->ref);
  FUNC_3("Connection %s Inserted to Cedar.\n", VAR_2->Name);
 }
 FUNC_10(VAR_1->ConnectionList);
}
