
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; int op; } ;
struct tape_device {int* modeset_byte; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_3 ;
 struct tape_request* FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__,int ,int,int*) ;
 int FUNC_5 (scalar_t__,int ,int ,int *) ;
 int FUNC_6 (struct tape_device*,struct tape_request*) ;

int
FUNC_7(struct tape_device *VAR_4, int VAR_5)
{
 struct tape_request *VAR_6;

 if (VAR_5 < 0 || VAR_5 > 1) {
  FUNC_0(6, "xcom parm\n");
  return -VAR_0;
 }
 VAR_6 = FUNC_3(2, 0);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);
 VAR_6->op = VAR_3;

 if (VAR_5 == 0)
  *VAR_4->modeset_byte &= ~0x08;
 else
  *VAR_4->modeset_byte |= 0x08;
 FUNC_4(VAR_6->cpaddr, VAR_1, 1, VAR_4->modeset_byte);
 FUNC_5(VAR_6->cpaddr + 1, VAR_2, 0, ((void*)0));

 return FUNC_6(VAR_4, VAR_6);
}
