
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quatech_port {unsigned char shadowMSR; int wait; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct quatech_port *VAR_0,
          unsigned char VAR_1)
{

 VAR_0->shadowMSR = VAR_1;
 FUNC_0(&VAR_0->wait);
 return;
}
