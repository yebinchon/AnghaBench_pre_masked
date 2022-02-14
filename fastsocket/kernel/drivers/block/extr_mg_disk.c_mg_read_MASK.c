
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int buffer; TYPE_1__* rq_disk; } ;
struct mg_host {scalar_t__ dev_base; } ;
struct TYPE_2__ {struct mg_host* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct mg_host*) ;
 scalar_t__ FUNC_4 (struct mg_host*,int ,int ) ;
 scalar_t__ FUNC_5 (struct mg_host*,int ,int ,int ,int *) ;
 int FUNC_6 (struct mg_host*,struct request*) ;
 scalar_t__ FUNC_7 (struct mg_host*,int ,int ) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_7)
{
 struct mg_host *VAR_8 = VAR_7->rq_disk->private_data;

 if (FUNC_5(VAR_8, FUNC_1(VAR_7), FUNC_2(VAR_7),
     VAR_1, ((void*)0)) != VAR_3)
  FUNC_3(VAR_8);

 FUNC_0("requested %d sects (from %ld), buffer=0x%p\n",
        FUNC_2(VAR_7), FUNC_1(VAR_7), VAR_7->buffer);

 do {
  if (FUNC_7(VAR_8, VAR_0,
       VAR_6) != VAR_3) {
   FUNC_3(VAR_8);
   return;
  }

  FUNC_6(VAR_8, VAR_7);

  FUNC_8(VAR_2, (unsigned long)VAR_8->dev_base +
    VAR_4);
 } while (FUNC_4(VAR_8, 0, VAR_5));
}
