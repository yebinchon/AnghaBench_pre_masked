
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {int* cpdata; scalar_t__ cpaddr; int op; } ;
struct tape_device {int* modeset_byte; } ;
struct tape_34xx_block_id {int block; int format; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct tape_device*,struct tape_34xx_block_id*) ;
 struct tape_request* FUNC_4 (int,int) ;
 int FUNC_5 (scalar_t__,int ,int,int*) ;
 int FUNC_6 (scalar_t__,int ,int ,int *) ;
 int FUNC_7 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int
FUNC_8(struct tape_device *VAR_7, int VAR_8)
{
 struct tape_request *VAR_9;
 struct tape_34xx_block_id * VAR_10;

 if (VAR_8 > 0x3fffff) {
  FUNC_0(6, "xsee parm\n");
  return -VAR_0;
 }
 VAR_9 = FUNC_4(3, 4);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);


 VAR_9->op = VAR_6;
 VAR_10 = (struct tape_34xx_block_id *) VAR_9->cpdata;
 VAR_10->format = (*VAR_7->modeset_byte & 0x08) ?
   VAR_5 : VAR_4;
 VAR_10->block = VAR_8;
 FUNC_3(VAR_7, VAR_10);

 FUNC_5(VAR_9->cpaddr, VAR_2, 1, VAR_7->modeset_byte);
 FUNC_5(VAR_9->cpaddr + 1, VAR_1, 4, VAR_9->cpdata);
 FUNC_6(VAR_9->cpaddr + 2, VAR_3, 0, ((void*)0));


 return FUNC_7(VAR_7, VAR_9);
}
