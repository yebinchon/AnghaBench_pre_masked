
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,int ) ;
 unsigned char VAR_0 ;
 int FUNC_2 (char) ;
 char FUNC_3 (unsigned char) ;
 char FUNC_4 (unsigned char) ;

__attribute__((used)) static int FUNC_5(char *VAR_1)
{
 unsigned char VAR_2;
 int VAR_3;
 unsigned char VAR_4;


 FUNC_0("### GDB Tx '%s' ###\n", VAR_1);

 do {
  FUNC_2('$');
  VAR_2 = 0;
  VAR_3 = 0;

  while ((VAR_4 = VAR_1[VAR_3]) != 0) {
   FUNC_2(VAR_4);
   VAR_2 += VAR_4;
   VAR_3 += 1;
  }

  FUNC_2('#');
  FUNC_2(FUNC_3(VAR_2));
  FUNC_2(FUNC_4(VAR_2));

 } while (FUNC_1(&VAR_4,0),




   VAR_4!='+' && VAR_4!='$');

 if (VAR_4=='+') {
  FUNC_0("### GDB Rx ACK\n");
  return 0;
 }

 FUNC_0("### GDB Tx Abandoned\n");
 VAR_0 = VAR_4;
 return 1;
}
