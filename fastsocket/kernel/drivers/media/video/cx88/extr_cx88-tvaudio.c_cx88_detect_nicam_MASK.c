
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cx88_core *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 FUNC_1("start nicam autodetect.\n");

 for (VAR_2 = 0; VAR_2 < 6; VAR_2++) {

  VAR_3 += ((FUNC_0(VAR_0) & 0x02) >> 1);

  if (VAR_3 == 1) {
   FUNC_1("nicam is detected.\n");
   return 1;
  }


  FUNC_2(10);
 }

 FUNC_1("nicam is not detected.\n");
 return 0;
}
