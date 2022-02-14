
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_host {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct hpsb_host*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct hpsb_host*,int) ;
 int FUNC_6 (struct hpsb_host*) ;
 int FUNC_7 (struct hpsb_host*,int) ;
 int FUNC_8 (struct hpsb_host*,unsigned int) ;
 int FUNC_9 (struct hpsb_host*,unsigned int) ;
 int FUNC_10 (struct hpsb_host*) ;
 int FUNC_11 (struct hpsb_host*) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;

__attribute__((used)) static int FUNC_16(void *VAR_2)
{
 struct hpsb_host *VAR_3 = VAR_2;
 unsigned int VAR_4, VAR_5 = 0;
 int VAR_6, VAR_7 = 0;

 FUNC_14();

 FUNC_6(VAR_3);

 for (;;) {

  FUNC_13(VAR_0);
  if (FUNC_2(VAR_3) == VAR_5 &&
      !FUNC_3())
   FUNC_12();
  FUNC_1(VAR_1);


  if (FUNC_15())
   continue;
  if (FUNC_3())
   goto exit;



  VAR_4 = FUNC_2(VAR_3);
  for (VAR_6 = 0; VAR_6 < 4 ; VAR_6++) {
   FUNC_4(63);
   FUNC_15();
   if (FUNC_3())
    goto exit;






   VAR_5 = FUNC_2(VAR_3);



   if (VAR_5 != VAR_4)
    VAR_4 = VAR_5, VAR_6 = 0;
  }

  if (!FUNC_5(VAR_3, VAR_7) ||
      !FUNC_7(VAR_3, VAR_7)) {
   VAR_7++;
   continue;
  }
  VAR_7 = 0;





  FUNC_9(VAR_3, VAR_5);



  if (!FUNC_8(VAR_3, VAR_5))
   continue;


  FUNC_11(VAR_3);


  for (VAR_6 = 3000/200; VAR_6; VAR_6--) {
   FUNC_4(200);
   FUNC_15();
   if (FUNC_3())
    goto exit;

   if (VAR_5 != FUNC_2(VAR_3))
    break;
  }

  if (!VAR_6)
   FUNC_10(VAR_3);
 }
exit:
 FUNC_0("NodeMgr: Exiting thread");
 return 0;
}
