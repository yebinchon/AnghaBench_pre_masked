
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; int op; } ;
struct tape_device {int * modeset_byte; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tape_request*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct tape_request*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct tape_request* FUNC_2 (int,int ) ;
 int FUNC_3 (scalar_t__,int ,int,int *) ;
 int FUNC_4 (scalar_t__,int ,int ,int *) ;
 int FUNC_5 (struct tape_device*,struct tape_request*) ;

int
FUNC_6(struct tape_device *VAR_6, int VAR_7)
{
 struct tape_request *VAR_8;

 VAR_8 = FUNC_2(6, 0);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);
 VAR_8->op = VAR_5;

 FUNC_3(VAR_8->cpaddr, VAR_2, 1, VAR_6->modeset_byte);
 FUNC_3(VAR_8->cpaddr + 1, VAR_4, 0, ((void*)0));
 FUNC_3(VAR_8->cpaddr + 2, VAR_1, 0, ((void*)0));
 FUNC_3(VAR_8->cpaddr + 3, VAR_0, 0, ((void*)0));
 FUNC_3(VAR_8->cpaddr + 4, VAR_4, 0, ((void*)0));
 FUNC_4(VAR_8->cpaddr + 5, VAR_3, 0, ((void*)0));


 return FUNC_5(VAR_6, VAR_8);
}
