
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cppi_descriptor {int dma; } ;
struct TYPE_2__ {int status; } ;
struct cppi_channel {struct cppi_descriptor* last_processed; struct cppi* controller; TYPE_1__ channel; } ;
struct cppi {int pool; } ;


 int VAR_0 ;
 struct cppi_descriptor* FUNC_0 (struct cppi_channel*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct cppi_descriptor*,int ) ;

__attribute__((used)) static void FUNC_3(struct cppi_channel *VAR_1)
{
 struct cppi *VAR_2 = VAR_1->controller;
 struct cppi_descriptor *VAR_3;

 (void) FUNC_1(&VAR_1->channel);
 VAR_1->channel.status = VAR_0;
 VAR_1->controller = ((void*)0);


 VAR_3 = VAR_1->last_processed;
 do {
  if (VAR_3)
   FUNC_2(VAR_2->pool, VAR_3, VAR_3->dma);
  VAR_3 = FUNC_0(VAR_1);
 } while (VAR_3);
 VAR_1->last_processed = ((void*)0);
}
