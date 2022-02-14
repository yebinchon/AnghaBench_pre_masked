
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146 {int nr; } ;


 int FUNC_0 (struct saa7146*,int,int,int) ;
 int FUNC_1 (struct saa7146*,int,int,int,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct saa7146 *VAR_0)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 200; VAR_1++) {


  FUNC_1(VAR_0, 0x22, 0x01, 0x11, 2);

  FUNC_1(VAR_0, 0x22, 0x02, 0x49, 2);

  FUNC_1(VAR_0, 0x22, 0x03, 0x00, 2);

  FUNC_1(VAR_0, 0x22, 0x04, 0x00, 2);
  FUNC_1(VAR_0, 0x22, 0x01, 0x10, 2);
  if (FUNC_0(VAR_0, 0x22, 0x02, 1) == 0x49)
   break;
  FUNC_3();
 }
 FUNC_2("stradis%d: CS4341 initialized (%d)\n", VAR_0->nr, VAR_1);
 return;
}
