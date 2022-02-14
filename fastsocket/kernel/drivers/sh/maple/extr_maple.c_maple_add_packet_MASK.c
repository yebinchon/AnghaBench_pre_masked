
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct maple_device {TYPE_1__* mq; } ;
typedef int __be32 ;
struct TYPE_2__ {size_t length; int list; void* sendbuf; int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void*,void*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct maple_device *VAR_4, u32 VAR_5, u32 VAR_6,
 size_t VAR_7, void *VAR_8)
{
 int VAR_9 = 0;
 void *VAR_10 = ((void*)0);

 if (VAR_7) {
  VAR_10 = FUNC_1(VAR_7 * 4, VAR_1);
  if (!VAR_10) {
   VAR_9 = -VAR_0;
   goto out;
  }
  ((__be32 *)VAR_10)[0] = FUNC_0(VAR_5);
 }

 VAR_4->mq->command = VAR_6;
 VAR_4->mq->length = VAR_7;
 if (VAR_7 > 1)
  FUNC_3(VAR_10 + 4, VAR_8, (VAR_7 - 1) * 4);
 VAR_4->mq->sendbuf = VAR_10;

 FUNC_4(&VAR_3);
 FUNC_2(&VAR_4->mq->list, &VAR_2);
 FUNC_5(&VAR_3);
out:
 return VAR_9;
}
