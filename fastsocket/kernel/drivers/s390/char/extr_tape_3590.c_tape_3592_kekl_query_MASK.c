
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {scalar_t__ cpaddr; int op; struct tape3592_kekl_query_order* cpdata; } ;
struct tape_device {int dummy; } ;
struct tape390_kekl_pair {int dummy; } ;
struct tape3592_kekl_query_order {int code; int max_count; } ;
struct tape3592_kekl_query_data {int kekls; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tape_request*) ;
 int VAR_3 ;
 int FUNC_2 (struct tape_request*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct tape390_kekl_pair*) ;
 int FUNC_4 (struct tape3592_kekl_query_data*) ;
 struct tape3592_kekl_query_data* FUNC_5 (int,int) ;
 int FUNC_6 (struct tape3592_kekl_query_order*,int ,int) ;
 struct tape_request* FUNC_7 (int,int) ;
 int FUNC_8 (scalar_t__,int ,int,struct tape3592_kekl_query_order*) ;
 int FUNC_9 (scalar_t__,int ,int,struct tape3592_kekl_query_data*) ;
 int FUNC_10 (struct tape_device*,struct tape_request*) ;
 int FUNC_11 (struct tape_request*) ;

__attribute__((used)) static int FUNC_12(struct tape_device *VAR_6,
    struct tape390_kekl_pair *VAR_7)
{
 struct tape_request *VAR_8;
 struct tape3592_kekl_query_order *VAR_9;
 struct tape3592_kekl_query_data *VAR_10;
 int VAR_11;

 FUNC_0(6, "tape3592_kekl_query\n");
 VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_2|VAR_1);
 if (!VAR_10)
  return -VAR_0;
 VAR_8 = FUNC_7(2, sizeof(*VAR_9));
 if (FUNC_1(VAR_8)) {
  VAR_11 = FUNC_2(VAR_8);
  goto fail_malloc;
 }
 VAR_9 = VAR_8->cpdata;
 FUNC_6(VAR_9,0,sizeof(*VAR_9));
 VAR_9->code = 0xe2;
 VAR_9->max_count = 2;
 VAR_8->op = VAR_5;
 FUNC_8(VAR_8->cpaddr, VAR_3, sizeof(*VAR_9), VAR_9);
 FUNC_9(VAR_8->cpaddr + 1, VAR_4, sizeof(*VAR_10),
       VAR_10);
 VAR_11 = FUNC_10(VAR_6, VAR_8);
 if (VAR_11)
  goto fail_request;
 FUNC_3(&VAR_10->kekls, VAR_7);

 VAR_11 = 0;
fail_request:
 FUNC_11(VAR_8);
fail_malloc:
 FUNC_4(VAR_10);
 return VAR_11;
}
