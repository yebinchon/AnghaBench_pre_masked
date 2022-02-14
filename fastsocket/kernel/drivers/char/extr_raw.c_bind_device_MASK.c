
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_config_request {int raw_minor; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int ,int *,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct raw_config_request *VAR_2)
{
 FUNC_2(VAR_1, FUNC_0(VAR_0, VAR_2->raw_minor));
 FUNC_1(VAR_1, ((void*)0), FUNC_0(VAR_0, VAR_2->raw_minor), ((void*)0),
        "raw%d", VAR_2->raw_minor);
}
