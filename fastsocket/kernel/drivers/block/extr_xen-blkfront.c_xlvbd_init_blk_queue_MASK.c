
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct request_queue {int dummy; } ;
struct gendisk {struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct request_queue* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct request_queue*,int ) ;
 int FUNC_2 (struct request_queue*,int) ;
 int FUNC_3 (struct request_queue*,int ) ;
 int FUNC_4 (struct request_queue*,int) ;
 int FUNC_5 (struct request_queue*,scalar_t__) ;
 int FUNC_6 (struct request_queue*,int ) ;
 int FUNC_7 (struct request_queue*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int ,struct request_queue*) ;

__attribute__((used)) static int FUNC_9(struct gendisk *VAR_6, u16 VAR_7)
{
 struct request_queue *VAR_8;

 VAR_8 = FUNC_0(VAR_5, &VAR_4);
 if (VAR_8 == ((void*)0))
  return -1;

 FUNC_8(VAR_3, VAR_8);


 FUNC_3(VAR_8, VAR_7);
 FUNC_4(VAR_8, 512);


 FUNC_7(VAR_8, VAR_2 - 1);
 FUNC_5(VAR_8, VAR_2);


 FUNC_6(VAR_8, VAR_0);


 FUNC_2(VAR_8, 511);


 FUNC_1(VAR_8, VAR_1);

 VAR_6->queue = VAR_8;

 return 0;
}
