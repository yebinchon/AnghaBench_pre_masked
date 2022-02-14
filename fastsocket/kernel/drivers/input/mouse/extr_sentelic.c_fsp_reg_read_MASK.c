
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ps2dev {TYPE_1__* serio; } ;
struct psmouse {struct ps2dev ps2dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ps2dev*,unsigned char*,int ) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 unsigned char FUNC_2 (int) ;
 unsigned char FUNC_3 (int) ;
 int FUNC_4 (struct ps2dev*) ;
 int FUNC_5 (struct ps2dev*,int *,int ) ;
 int FUNC_6 (struct ps2dev*) ;
 scalar_t__ FUNC_7 (struct ps2dev*,unsigned char,int ) ;
 int FUNC_8 (struct psmouse*,int ) ;

__attribute__((used)) static int FUNC_9(struct psmouse *VAR_7, int VAR_8, int *VAR_9)
{
 struct ps2dev *VAR_10 = &VAR_7->ps2dev;
 unsigned char VAR_11[3];
 unsigned char VAR_12;
 int VAR_13 = -1;







 FUNC_5(VAR_10, ((void*)0), VAR_3);
 FUNC_8(VAR_7, VAR_6);

 FUNC_4(VAR_10);

 if (FUNC_7(VAR_10, 0xf3, VAR_0) < 0)
  goto out;


 FUNC_7(VAR_10, 0x66, VAR_1);

 FUNC_7(VAR_10, 0x88, VAR_1);

 if (FUNC_7(VAR_10, 0xf3, VAR_0) < 0)
  goto out;

 if ((VAR_12 = FUNC_2(VAR_8)) != VAR_8) {
  FUNC_7(VAR_10, 0x68, VAR_1);
 } else if ((VAR_12 = FUNC_3(VAR_8)) != VAR_8) {

  FUNC_7(VAR_10, 0xcc, VAR_1);

 } else {

  FUNC_7(VAR_10, 0x66, VAR_1);

 }

 FUNC_7(VAR_10, VAR_12, VAR_0);

 if (FUNC_0(VAR_10, VAR_11, VAR_5) < 0)
  goto out;

 *VAR_9 = VAR_11[2];
 VAR_13 = 0;

 out:
 FUNC_6(VAR_10);
 FUNC_5(VAR_10, ((void*)0), VAR_4);
 FUNC_8(VAR_7, VAR_2);
 FUNC_1(&VAR_10->serio->dev, "READ REG: 0x%02x is 0x%02x (rc = %d)\n",
  VAR_8, *VAR_9, VAR_13);
 return VAR_13;
}
