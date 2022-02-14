
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct em28xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct em28xx*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct em28xx *VAR_2)
{
 int VAR_3, VAR_4;


 for (VAR_4 = 0; VAR_4 < 10; VAR_4++, FUNC_2(5)) {
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  if (VAR_3 < 0)
   return VAR_3;

  if (!(VAR_3 & 0x01))
   return 0;
 }

 FUNC_1("AC97 command still being executed: not handled properly!\n");
 return -VAR_0;
}
