
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int PGresult ;
typedef int MultiConnection ;
typedef int List ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int **) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (int ,char const*,int ) ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ,char const*) ;
 TYPE_1__* FUNC_7 () ;

List *
FUNC_8(const char *VAR_3, uint32 VAR_4, const char *VAR_5)
{
 List *VAR_6 = VAR_2;
 StringInfo VAR_7 = ((void*)0);
 MultiConnection *VAR_8 = ((void*)0);
 PGresult *VAR_9 = ((void*)0);
 uint32 VAR_10 = VAR_0;

 VAR_7 = FUNC_7();
 FUNC_6(VAR_7, VAR_1, VAR_5);
 VAR_8 = FUNC_3(VAR_10, VAR_3, VAR_4);

 FUNC_1(VAR_8, VAR_7->data, &VAR_9);
 VAR_6 = FUNC_5(VAR_9);

 FUNC_4(VAR_9);
 FUNC_2(VAR_8);
 FUNC_0(VAR_8);

 return VAR_6;
}
