
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tape_request {int cpaddr; int op; struct tape3592_kekl_set_order* cpdata; } ;
struct tape_device {int dummy; } ;
struct tape390_kekl_pair {int * kekl; } ;
struct TYPE_2__ {int count; int * kekl; } ;
struct tape3592_kekl_set_order {int code; TYPE_1__ kekls; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_2 ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct tape390_kekl_pair*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct tape3592_kekl_set_order*,int ,int) ;
 scalar_t__ FUNC_6 (struct tape_device*,int ) ;
 struct tape_request* FUNC_7 (int,int) ;
 int FUNC_8 (int ,int ,int,struct tape3592_kekl_set_order*) ;
 int FUNC_9 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static int FUNC_10(struct tape_device *VAR_4,
         struct tape390_kekl_pair *VAR_5)
{
 struct tape_request *VAR_6;
 struct tape3592_kekl_set_order *VAR_7;

 FUNC_0(6, "tape3592_kekl_set\n");
 if (FUNC_3(VAR_5)) {
  FUNC_0(6, "invalid kekls\n");
  return -VAR_1;
 }
 if (FUNC_6(VAR_4, 0) != 0)
  return -VAR_0;
 VAR_6 = FUNC_7(1, sizeof(*VAR_7));
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);
 VAR_7 = VAR_6->cpdata;
 FUNC_5(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->code = 0xe3;
 VAR_7->kekls.count = 2;
 FUNC_4(&VAR_5->kekl[0], &VAR_7->kekls.kekl[0]);
 FUNC_4(&VAR_5->kekl[1], &VAR_7->kekls.kekl[1]);
 VAR_6->op = VAR_3;
 FUNC_8(VAR_6->cpaddr, VAR_2, sizeof(*VAR_7), VAR_7);

 return FUNC_9(VAR_4, VAR_6);
}
