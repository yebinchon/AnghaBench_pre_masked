
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1000_pcmcia_socket {scalar_t__ nr; void* irq; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static int FUNC_0(struct au1000_pcmcia_socket *VAR_5)
{





 VAR_5->irq = VAR_5->nr ? VAR_2 : VAR_0;

 return 0;
}
