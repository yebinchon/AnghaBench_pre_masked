
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
 int FUNC_0 (char*,unsigned int,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct request*) ;
 unsigned int FUNC_2 (struct request*) ;
 int FUNC_3 (struct mg_host*) ;
 scalar_t__ FUNC_4 (struct mg_host*,int ,int ) ;
 scalar_t__ FUNC_5 (struct mg_host*,int ,unsigned int,int ,int *) ;
 scalar_t__ FUNC_6 (struct mg_host*,int ,int ) ;
 int FUNC_7 (struct mg_host*,struct request*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_8)
{
 struct mg_host *VAR_9 = VAR_8->rq_disk->private_data;
 unsigned int VAR_10 = FUNC_2(VAR_8);

 if (FUNC_5(VAR_9, FUNC_1(VAR_8), VAR_10,
     VAR_1, ((void*)0)) != VAR_3) {
  FUNC_3(VAR_9);
  return;
 }

 FUNC_0("requested %d sects (from %ld), buffer=0x%p\n",
        VAR_10, FUNC_1(VAR_8), VAR_8->buffer);

 if (FUNC_6(VAR_9, VAR_0,
      VAR_7) != VAR_3) {
  FUNC_3(VAR_9);
  return;
 }

 do {
  FUNC_7(VAR_9, VAR_8);

  FUNC_8(VAR_2, (unsigned long)VAR_9->dev_base +
    VAR_4);

  VAR_10--;
  if (VAR_10 > 1 && FUNC_6(VAR_9, VAR_0,
     VAR_7) != VAR_3) {
   FUNC_3(VAR_9);
   return;
  } else if (FUNC_6(VAR_9, VAR_6,
     VAR_7) != VAR_3) {
   FUNC_3(VAR_9);
   return;
  }
 } while (FUNC_4(VAR_9, 0, VAR_5));
}
