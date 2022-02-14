
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
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct ps2dev*) ;
 int FUNC_3 (struct ps2dev*,int *,int ) ;
 int FUNC_4 (struct ps2dev*) ;
 scalar_t__ FUNC_5 (struct ps2dev*,int,int ) ;
 int FUNC_6 (struct psmouse*,int ) ;

__attribute__((used)) static int FUNC_7(struct psmouse *VAR_7, int *VAR_8)
{
 struct ps2dev *VAR_9 = &VAR_7->ps2dev;
 unsigned char VAR_10[3];
 int VAR_11 = -1;

 FUNC_3(VAR_9, ((void*)0), VAR_3);
 FUNC_6(VAR_7, VAR_6);

 FUNC_2(VAR_9);

 if (FUNC_5(VAR_9, 0xf3, VAR_0) < 0)
  goto out;

 FUNC_5(VAR_9, 0x66, VAR_1);
 FUNC_5(VAR_9, 0x88, VAR_1);

 if (FUNC_5(VAR_9, 0xf3, VAR_0) < 0)
  goto out;

 FUNC_5(VAR_9, 0x83, VAR_1);
 FUNC_5(VAR_9, 0x88, VAR_1);


 if (FUNC_0(VAR_9, VAR_10, VAR_5))
  goto out;

 *VAR_8 = VAR_10[2];
 VAR_11 = 0;

 out:
 FUNC_4(VAR_9);
 FUNC_3(VAR_9, ((void*)0), VAR_4);
 FUNC_6(VAR_7, VAR_2);
 FUNC_1(&VAR_9->serio->dev, "READ PAGE REG: 0x%02x (rc = %d)\n",
  *VAR_8, VAR_11);
 return VAR_11;
}
