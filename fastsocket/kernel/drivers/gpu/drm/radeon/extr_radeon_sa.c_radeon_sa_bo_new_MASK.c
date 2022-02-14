
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct radeon_sa_manager {unsigned int size; TYPE_1__ wq; } ;
struct radeon_sa_bo {int flist; int olist; int * fence; struct radeon_sa_manager* manager; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct radeon_sa_bo*) ;
 struct radeon_sa_bo* FUNC_3 (int,int ) ;
 int FUNC_4 (struct radeon_device*,struct radeon_fence**,int) ;
 scalar_t__ FUNC_5 (struct radeon_sa_manager*,struct radeon_fence**,unsigned int*) ;
 scalar_t__ FUNC_6 (struct radeon_sa_manager*,struct radeon_sa_bo*,unsigned int,unsigned int) ;
 int FUNC_7 (struct radeon_sa_manager*) ;
 int FUNC_8 (struct radeon_sa_manager*,unsigned int,unsigned int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_1__,int ) ;

int FUNC_12(struct radeon_device *VAR_5,
       struct radeon_sa_manager *VAR_6,
       struct radeon_sa_bo **VAR_7,
       unsigned VAR_8, unsigned VAR_9, bool VAR_10)
{
 struct radeon_fence *VAR_11[VAR_4];
 unsigned VAR_12[VAR_4];
 int VAR_13, VAR_14;

 FUNC_0(VAR_9 > VAR_3);
 FUNC_0(VAR_8 > VAR_6->size);

 *VAR_7 = FUNC_3(sizeof(struct radeon_sa_bo), VAR_2);
 if ((*VAR_7) == ((void*)0)) {
  return -VAR_1;
 }
 (*VAR_7)->manager = VAR_6;
 (*VAR_7)->fence = ((void*)0);
 FUNC_1(&(*VAR_7)->olist);
 FUNC_1(&(*VAR_7)->flist);

 FUNC_9(&VAR_6->wq.lock);
 do {
  for (VAR_13 = 0; VAR_13 < VAR_4; ++VAR_13) {
   VAR_11[VAR_13] = ((void*)0);
   VAR_12[VAR_13] = 0;
  }

  do {
   FUNC_7(VAR_6);

   if (FUNC_6(VAR_6, *VAR_7,
         VAR_8, VAR_9)) {
    FUNC_10(&VAR_6->wq.lock);
    return 0;
   }


  } while (FUNC_5(VAR_6, VAR_11, VAR_12));

  FUNC_10(&VAR_6->wq.lock);
  VAR_14 = FUNC_4(VAR_5, VAR_11, 0);
  FUNC_9(&VAR_6->wq.lock);

  if (VAR_14 == -VAR_0 && VAR_10) {
   VAR_14 = FUNC_11(
    VAR_6->wq,
    FUNC_8(VAR_6, VAR_8, VAR_9)
   );

  } else if (VAR_14 == -VAR_0) {
   VAR_14 = -VAR_1;
  }

 } while (!VAR_14);

 FUNC_10(&VAR_6->wq.lock);
 FUNC_2(*VAR_7);
 *VAR_7 = ((void*)0);
 return VAR_14;
}
