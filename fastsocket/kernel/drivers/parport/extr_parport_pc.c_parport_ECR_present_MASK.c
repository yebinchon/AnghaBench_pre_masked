
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport_pc_private {int ecr; } ;
struct parport {struct parport_pc_private* private_data; } ;


 int FUNC_0 (struct parport*) ;
 int FUNC_1 (struct parport*) ;
 int VAR_0 ;
 int FUNC_2 (struct parport*,int) ;
 int FUNC_3 (struct parport*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct parport *VAR_1)
{
 struct parport_pc_private *VAR_2 = VAR_1->private_data;
 unsigned char VAR_3 = 0xc;

 FUNC_5(VAR_3, FUNC_0(VAR_1));
 if ((FUNC_4(FUNC_1(VAR_1)) & 0x3) == (VAR_3 & 0x3)) {
  FUNC_5(VAR_3 ^ 0x2, FUNC_0(VAR_1));

  VAR_3 = FUNC_4(FUNC_0(VAR_1));
  if ((FUNC_4(FUNC_1(VAR_1)) & 0x2) == (VAR_3 & 0x2))
   goto no_reg;
 }

 if ((FUNC_4(FUNC_1(VAR_1)) & 0x3) != 0x1)
  goto no_reg;

 FUNC_2(VAR_1, 0x34);
 if (FUNC_4(FUNC_1(VAR_1)) != 0x35)
  goto no_reg;

 VAR_2->ecr = 1;
 FUNC_5(0xc, FUNC_0(VAR_1));


 FUNC_3(VAR_1, VAR_0);

 return 1;

 no_reg:
 FUNC_5(0xc, FUNC_0(VAR_1));
 return 0;
}
