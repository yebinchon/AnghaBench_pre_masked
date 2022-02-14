
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef int SubTransactionId ;
typedef TYPE_1__* StringInfo ;
typedef int MultiConnection ;


 int FUNC_0 (int *,int const) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 TYPE_1__* FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(MultiConnection *VAR_0,
            SubTransactionId VAR_1)
{
 const bool VAR_2 = 1;
 StringInfo VAR_3 = FUNC_3();
 FUNC_2(VAR_3, "RELEASE SAVEPOINT savepoint_%u", VAR_1);

 if (!FUNC_1(VAR_0, VAR_3->data))
 {
  FUNC_0(VAR_0, VAR_2);
 }
}
