
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {scalar_t__ buffer; TYPE_1__* rq_disk; } ;
struct TYPE_2__ {int disk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void (*) ()) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct request*) ;
 scalar_t__ FUNC_4 (struct request*) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 struct request* VAR_4 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_10 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(void)
{
 struct request *VAR_6;
 int VAR_7, VAR_8 = 100000;

 do {
  VAR_7 = (unsigned) FUNC_8(VAR_3);
  if (VAR_7 & VAR_0)
   continue;
  if (!FUNC_0(VAR_7))
   break;
  if (VAR_7 & VAR_1)
   goto ok_to_read;
 } while (--VAR_8 > 0);
 FUNC_5("read_intr", VAR_7);
 FUNC_2();
 FUNC_7();
 return;

ok_to_read:
 VAR_6 = VAR_4;
 FUNC_9(VAR_2, VAR_6->buffer, 256);





 if (FUNC_6(0, 512)) {
  FUNC_1(&FUNC_12);
  return;
 }

 (void) FUNC_8(VAR_3);



 FUNC_7();
}
