
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void (*) ()) ;
 int FUNC_2 () ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 (int ,int) ;
 struct request* VAR_4 ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
 struct request *VAR_6 = VAR_4;
 int VAR_7;
 int VAR_8 = 100000;

 do {
  VAR_7 = (unsigned) FUNC_7(VAR_3);
  if (VAR_7 & VAR_0)
   continue;
  if (!FUNC_0(VAR_7))
   break;
  if ((FUNC_3(VAR_6) <= 1) || (VAR_7 & VAR_1))
   goto ok_to_write;
 } while (--VAR_8 > 0);
 FUNC_4("write_intr", VAR_7);
 FUNC_2();
 FUNC_6();
 return;

ok_to_write:
 if (FUNC_5(0, 512)) {
  FUNC_1(&FUNC_10);
  FUNC_8(VAR_2, VAR_6->buffer, 256);
  return;
 }




 FUNC_6();
}
