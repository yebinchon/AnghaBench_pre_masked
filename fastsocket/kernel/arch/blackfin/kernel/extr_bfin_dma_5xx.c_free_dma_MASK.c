
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chan_status; int dmalock; int data; scalar_t__ irq; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

void FUNC_7(unsigned int VAR_3)
{
 FUNC_6("freedma() : BEGIN \n");
 FUNC_0(VAR_3 >= VAR_1 ||
   VAR_2[VAR_3].chan_status == VAR_0);


 FUNC_2(VAR_3);
 FUNC_1(VAR_3);

 if (VAR_2[VAR_3].irq)
  FUNC_3(VAR_2[VAR_3].irq, VAR_2[VAR_3].data);


 FUNC_4(&(VAR_2[VAR_3].dmalock));
 VAR_2[VAR_3].chan_status = VAR_0;
 FUNC_5(&(VAR_2[VAR_3].dmalock));

 FUNC_6("freedma() : END \n");
}
