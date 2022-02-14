
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mg_host {scalar_t__ dev_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,struct mg_host*) ;

__attribute__((used)) static void FUNC_2(struct mg_host *VAR_1)
{
 u32 VAR_2 = FUNC_0((unsigned long)VAR_1->dev_base + VAR_0);

 FUNC_1("mg_unexpected_intr", VAR_2, VAR_1);
}
