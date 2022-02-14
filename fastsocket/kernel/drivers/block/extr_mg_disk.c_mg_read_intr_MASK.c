
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct request {int buffer; } ;
struct mg_host {void (* mg_do_intr ) (struct mg_host*) ;int breq; int timer; scalar_t__ dev_base; struct request* req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,scalar_t__,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct request*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (struct mg_host*) ;
 int FUNC_6 (char*,int,struct mg_host*) ;
 scalar_t__ FUNC_7 (struct mg_host*,int ,int ) ;
 int FUNC_8 (struct mg_host*,struct request*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct mg_host *VAR_8)
{
 struct request *VAR_9 = VAR_8->req;
 u32 VAR_10;


 do {
  VAR_10 = FUNC_4((unsigned long)VAR_8->dev_base + VAR_5);
  if (VAR_10 & VAR_0)
   break;
  if (!FUNC_1(VAR_10))
   break;
  if (VAR_10 & VAR_1)
   goto ok_to_read;
 } while (0);
 FUNC_6("mg_read_intr", VAR_10, VAR_8);
 FUNC_5(VAR_8);
 FUNC_9(VAR_8->breq);
 return;

ok_to_read:
 FUNC_8(VAR_8, VAR_9);

 FUNC_0("sector %ld, remaining=%ld, buffer=0x%p\n",
        FUNC_2(VAR_9), FUNC_3(VAR_9) - 1, VAR_9->buffer);


 FUNC_11(VAR_3, (unsigned long)VAR_8->dev_base + VAR_4);

 if (FUNC_7(VAR_8, 0, VAR_6)) {

  VAR_8->mg_do_intr = FUNC_12;
  FUNC_10(&VAR_8->timer, VAR_7 + 3 * VAR_2);
 } else
  FUNC_9(VAR_8->breq);
}
