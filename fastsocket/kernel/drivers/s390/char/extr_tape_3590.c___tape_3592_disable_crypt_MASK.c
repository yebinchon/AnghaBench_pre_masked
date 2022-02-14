
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {char* cpdata; scalar_t__ cpaddr; int op; } ;
struct tape_device {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 struct tape_request* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tape_request*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct tape_device*) ;
 int FUNC_4 (char*,int ,int) ;
 struct tape_request* FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__,int ,int,char*) ;
 int FUNC_7 (scalar_t__,int ,int,char*) ;

__attribute__((used)) static struct tape_request *FUNC_8(struct tape_device *VAR_3)
{
 struct tape_request *VAR_4;
 char *VAR_5;

 FUNC_0(6, "tape_3592_disable_crypt\n");
 if (!FUNC_3(VAR_3))
  return FUNC_1(-VAR_0);
 VAR_4 = FUNC_5(2, 72);
 if (FUNC_2(VAR_4))
  return VAR_4;
 VAR_5 = VAR_4->cpdata;
 FUNC_4(VAR_5,0,72);

 VAR_5[0] = 0x05;
 VAR_5[36 + 0] = 0x03;
 VAR_5[36 + 1] = 0x03;
 VAR_5[36 + 35] = 0x32;

 VAR_4->op = VAR_2;
 FUNC_6(VAR_4->cpaddr, VAR_1, 36, VAR_5);
 FUNC_7(VAR_4->cpaddr + 1, VAR_1, 36, VAR_5 + 36);

 return VAR_4;
}
