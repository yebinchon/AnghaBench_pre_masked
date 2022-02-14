
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
typedef scalar_t__ uint32 ;
struct TYPE_4__ {int preparedName; } ;
struct TYPE_5__ {TYPE_1__ remoteTransaction; } ;
typedef TYPE_2__ MultiConnection ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_2 (int ,int ,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(MultiConnection *VAR_3)
{

 static uint32 VAR_4 = 0;


 uint64 VAR_5 = FUNC_0();


 FUNC_2(VAR_3->remoteTransaction.preparedName, VAR_1,
    VAR_2, FUNC_1(), VAR_0,
    VAR_5, VAR_4++);
}
