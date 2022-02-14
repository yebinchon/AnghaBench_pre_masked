
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; scalar_t__ cpdata; int op; } ;
struct tape_device {scalar_t__ modeset_byte; } ;
typedef int __u32 ;


 int FUNC_0 (int,char*,int) ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_3 ;
 struct tape_request* FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__,int ,int,scalar_t__) ;
 int FUNC_5 (scalar_t__,int ,int ,int *) ;
 int FUNC_6 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_7(struct tape_device *VAR_4, int VAR_5)
{
 struct tape_request *VAR_6;

 FUNC_0(6, "xsee id: %x\n", VAR_5);
 VAR_6 = FUNC_3(3, 4);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);
 VAR_6->op = VAR_3;
 FUNC_4(VAR_6->cpaddr, VAR_1, 1, VAR_4->modeset_byte);
 *(__u32 *) VAR_6->cpdata = VAR_5;
 FUNC_4(VAR_6->cpaddr + 1, VAR_0, 4, VAR_6->cpdata);
 FUNC_5(VAR_6->cpaddr + 2, VAR_2, 0, ((void*)0));
 return FUNC_6(VAR_4, VAR_6);
}
