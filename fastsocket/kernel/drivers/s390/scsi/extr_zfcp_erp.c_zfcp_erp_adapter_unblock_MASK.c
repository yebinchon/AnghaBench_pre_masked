
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_adapter {int status; int dbf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct zfcp_adapter *VAR_1)
{
 if (FUNC_1(VAR_0, &VAR_1->status))
  FUNC_2("eraubl1", ((void*)0), VAR_1->dbf);
 FUNC_0(VAR_0, &VAR_1->status);
}
