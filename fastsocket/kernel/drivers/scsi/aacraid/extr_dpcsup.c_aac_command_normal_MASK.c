
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hw_fib {scalar_t__ data; } ;
struct fib {int size; int fiblink; struct aac_dev* dev; scalar_t__ data; struct hw_fib* hw_fib_va; int type; } ;
struct aac_queue {int lock; int cmdready; int cmdq; struct aac_dev* dev; } ;
struct aac_entry {int addr; } ;
struct aac_dev {scalar_t__ aif_thread; struct hw_fib* aif_base_va; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct aac_dev*,struct aac_queue*,int ) ;
 scalar_t__ FUNC_2 (struct aac_dev*,struct aac_queue*,struct aac_entry**) ;
 int FUNC_3 (struct fib*,int) ;
 int FUNC_4 (int ) ;
 struct fib* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct fib*,int ,int) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (int ,unsigned long) ;
 int FUNC_11 (int *) ;

unsigned int FUNC_12(struct aac_queue *VAR_4)
{
 struct aac_dev * VAR_5 = VAR_4->dev;
 struct aac_entry *VAR_6;
 unsigned long VAR_7;

 FUNC_9(VAR_4->lock, VAR_7);






 while(FUNC_2(VAR_5, VAR_4, &VAR_6))
 {
  struct fib VAR_8;
  struct hw_fib * VAR_9;
  u32 VAR_10;
  struct fib *VAR_11 = &VAR_8;

  VAR_10 = FUNC_6(VAR_6->addr) / sizeof(struct hw_fib);
  VAR_9 = &VAR_5->aif_base_va[VAR_10];






  if (VAR_5->aif_thread)
   if((VAR_11 = FUNC_5(sizeof(struct fib), VAR_1)) == ((void*)0))
    VAR_11 = &VAR_8;

  FUNC_8(VAR_11, 0, sizeof(struct fib));
  FUNC_0(&VAR_11->fiblink);
  VAR_11->type = VAR_0;
  VAR_11->size = sizeof(struct fib);
  VAR_11->hw_fib_va = VAR_9;
  VAR_11->data = VAR_9->data;
  VAR_11->dev = VAR_5;


  if (VAR_5->aif_thread && VAR_11 != &VAR_8) {
          FUNC_7(&VAR_11->fiblink, &VAR_4->cmdq);
           FUNC_1(VAR_5, VAR_4, VAR_2);
          FUNC_11(&VAR_4->cmdready);
  } else {
           FUNC_1(VAR_5, VAR_4, VAR_2);
   FUNC_10(VAR_4->lock, VAR_7);



   *(__le32 *)VAR_9->data = FUNC_4(VAR_3);
   FUNC_3(VAR_11, sizeof(u32));
   FUNC_9(VAR_4->lock, VAR_7);
  }
 }
 FUNC_10(VAR_4->lock, VAR_7);
 return 0;
}
