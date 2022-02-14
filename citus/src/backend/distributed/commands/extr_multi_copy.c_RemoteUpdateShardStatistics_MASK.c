
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int PGresult ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 TYPE_1__* FUNC_9 () ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(uint64 VAR_4)
{
 PGresult *VAR_5 = ((void*)0);
 bool VAR_6 = 1;

 StringInfo VAR_7 = FUNC_9();
 FUNC_6(VAR_7, VAR_2,
      VAR_4);

 if (!FUNC_5(VAR_3, VAR_7->data))
 {
  FUNC_4(VAR_3, VAR_0);
 }
 VAR_5 = FUNC_1(VAR_3, VAR_6);
 if (FUNC_3(VAR_5) != VAR_1)
 {
  FUNC_7(VAR_0, (FUNC_8("could not update shard statistics")));
 }

 FUNC_2(VAR_5);
 VAR_5 = FUNC_1(VAR_3, VAR_6);
 FUNC_0(!VAR_5);
}
