
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
struct ax_drvdata {int dev; } ;


 int FUNC_0 (int ,char*,unsigned char,unsigned char,unsigned char) ;
 unsigned char FUNC_1 (struct parport*) ;
 int FUNC_2 (struct parport*,unsigned char) ;
 struct ax_drvdata* FUNC_3 (struct parport*) ;

__attribute__((used)) static unsigned char
FUNC_4(struct parport *VAR_0, unsigned char VAR_1,
        unsigned char VAR_2)
{
 struct ax_drvdata *VAR_3 = FUNC_3(VAR_0);
 unsigned char VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->dev, "frob: mask=%02x, val=%02x, old=%02x\n",
  VAR_1, VAR_2, VAR_4);

 FUNC_2(VAR_0, (VAR_4 & ~VAR_1) | VAR_2);
 return VAR_4;
}
