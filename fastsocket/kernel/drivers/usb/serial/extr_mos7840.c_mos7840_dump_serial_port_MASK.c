
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct moschip_port {int DcrRegOffset; int ControlRegOffset; int SpRegOffset; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct moschip_port *VAR_0)
{

 FUNC_0("***************************************");
 FUNC_0("SpRegOffset is %2x", VAR_0->SpRegOffset);
 FUNC_0("ControlRegOffset is %2x", VAR_0->ControlRegOffset);
 FUNC_0("DCRRegOffset is %2x", VAR_0->DcrRegOffset);
 FUNC_0("***************************************");

}
