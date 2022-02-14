
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;
typedef int Node ;
typedef int List ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char const*) ;

Node *
FUNC_8(const char *VAR_2)
{
 Node *VAR_3 = ((void*)0);
 List *VAR_4 = ((void*)0);
 uint32 VAR_5 = 0;

 VAR_4 = FUNC_7(VAR_2);


 if (FUNC_1(VAR_4))
 {
  FUNC_2(VAR_1, (FUNC_4("statement: %s", FUNC_0(VAR_2)),
       FUNC_3(1)));
 }

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 != 1)
 {
  FUNC_2(VAR_0, (FUNC_4("cannot execute multiple utility events")));
 }







 VAR_3 = (Node *) FUNC_5(VAR_4);

 return VAR_3;
}
