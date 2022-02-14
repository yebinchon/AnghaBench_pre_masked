
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char*,char*) ;
 unsigned char VAR_0 ;
 char FUNC_4 (unsigned char) ;
 char FUNC_5 (unsigned char) ;

__attribute__((used)) static int FUNC_6(char *VAR_1)
{
 unsigned char VAR_2;
 unsigned char VAR_3;
 int VAR_4;




 FUNC_3("### GDB Tx $'%s'#?? ###\n", VAR_1);

 do {
  FUNC_2('$');
  VAR_2 = 0;
  VAR_4 = 0;

  while ((VAR_3 = VAR_1[VAR_4]) != 0) {
   FUNC_2(VAR_3);
   VAR_2 += VAR_3;
   VAR_4 += 1;
  }

  FUNC_2('#');
  FUNC_2(FUNC_4(VAR_2));
  FUNC_2(FUNC_5(VAR_2));

 } while (FUNC_1(&VAR_3, 0),
   VAR_3 == '-' && (FUNC_0("### GDB Rx NAK\n"), 0),
   VAR_3 != '-' && VAR_3 != '+' &&
   (FUNC_0("### GDB Rx ??? %02x\n", VAR_3), 0),
   VAR_3 != '+' && VAR_3 != '$');

 if (VAR_3 == '+') {
  FUNC_0("### GDB Rx ACK\n");
  return 0;
 }

 FUNC_0("### GDB Tx Abandoned\n");
 VAR_0 = VAR_3;
 return 1;
}
