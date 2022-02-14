
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (char) ;
 unsigned char FUNC_3 (unsigned char) ;

__attribute__((used)) static void FUNC_4(char *VAR_2)
{
 unsigned char VAR_3;
 unsigned char VAR_4;
 unsigned char VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 for (;;) {

  do {
   FUNC_1(&VAR_5, 0);
  } while (VAR_5 != '$');

  VAR_3 = 0;
  VAR_4 = -1;
  VAR_6 = 0;
  VAR_9 = 0;


  while (VAR_6 < VAR_0) {
   VAR_8 = FUNC_1(&VAR_5, 0);
   if (VAR_8 < 0)
    VAR_9 = VAR_8;

   if (VAR_5 == '#')
    break;
   VAR_3 += VAR_5;
   VAR_2[VAR_6] = VAR_5;
   VAR_6++;
  }

  if (VAR_9 == -VAR_1) {
   FUNC_0("### GDB Rx Error - Skipping packet ###\n");
   FUNC_0("### GDB Tx NAK\n");
   FUNC_2('-');
   continue;
  }

  if (VAR_6 >= VAR_0 || VAR_9)
   continue;

  VAR_2[VAR_6] = 0;


  VAR_8 = FUNC_1(&VAR_5, 0);
  if (VAR_8 < 0)
   VAR_9 = VAR_8;
  VAR_4 = FUNC_3(VAR_5) << 4;

  VAR_8 = FUNC_1(&VAR_5, 0);
  if (VAR_8 < 0)
   VAR_9 = VAR_8;
  VAR_4 |= FUNC_3(VAR_5);

  if (VAR_9) {
   if (VAR_9 == -VAR_1)
    FUNC_0("### GDB Rx Error - Skipping packet\n");
   FUNC_0("### GDB Tx NAK\n");
   FUNC_2('-');
   continue;
  }


  if (VAR_3 != VAR_4) {
   FUNC_0("### GDB Tx NAK\n");
   FUNC_2('-');
   continue;
  }

  FUNC_0("### GDB Rx '$%s#%02x' ###\n", VAR_2, VAR_3);
  FUNC_0("### GDB Tx ACK\n");
  FUNC_2('+');


  if (VAR_2[2] == ':') {
   FUNC_2(VAR_2[0]);
   FUNC_2(VAR_2[1]);


   VAR_6 = 0;
   while (VAR_2[VAR_6]) VAR_6++;
   for (VAR_7=3; VAR_7 <= VAR_6; VAR_7++)
    VAR_2[VAR_7 - 3] = VAR_2[VAR_7];
  }

  break;
 }
}
