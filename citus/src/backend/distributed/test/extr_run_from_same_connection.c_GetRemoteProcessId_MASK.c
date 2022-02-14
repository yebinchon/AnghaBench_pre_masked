
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int PGresult ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int **) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 () ;
 int VAR_1 ;

__attribute__((used)) static int64
FUNC_8()
{
 StringInfo VAR_2 = FUNC_7();
 PGresult *VAR_3 = ((void*)0);
 int64 VAR_4 = 0;
 int64 VAR_5 = 0;

 FUNC_6(VAR_2, VAR_0);

 FUNC_1(VAR_1, VAR_2->data, &VAR_3);

 VAR_4 = FUNC_4(VAR_3);

 if (VAR_4 != 1)
 {
  FUNC_2();
 }

 VAR_5 = FUNC_5(VAR_3, 0, 0);

 FUNC_3(VAR_3);
 FUNC_0(VAR_1, 0);

 return VAR_5;
}
