
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct w1_slave {int dev; int master; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (struct w1_slave*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct w1_slave *VAR_3, int VAR_4, int VAR_5, char *VAR_6)
{
 u8 VAR_7[3];
 u8 VAR_8[VAR_1];
 int VAR_9 = VAR_2;

 do {
  VAR_7[0] = VAR_0;
  VAR_7[1] = VAR_4 & 0xff;
  VAR_7[2] = VAR_4 >> 8;

  if (FUNC_3(VAR_3))
   return -1;

  FUNC_4(VAR_3->master, VAR_7, 3);
  FUNC_2(VAR_3->master, VAR_6, VAR_5);

  if (FUNC_3(VAR_3))
   return -1;

  FUNC_4(VAR_3->master, VAR_7, 3);
  FUNC_2(VAR_3->master, VAR_8, VAR_5);

  if (!FUNC_1(VAR_8, VAR_6, VAR_5))
   return 0;
 } while (--VAR_9);

 FUNC_0(&VAR_3->dev, "proof reading failed %d times\n",
   VAR_2);

 return -1;
}
