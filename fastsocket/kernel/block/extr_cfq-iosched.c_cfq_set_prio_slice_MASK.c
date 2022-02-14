
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfq_queue {void* slice_end; unsigned int allocated_slice; void* slice_start; int cfqg; } ;
struct cfq_data {unsigned int* cfq_slice; int cfq_slice_idle; scalar_t__ cfq_latency; } ;


 int FUNC_0 (struct cfq_queue*) ;
 unsigned int FUNC_1 (struct cfq_data*,int ,int ) ;
 unsigned int FUNC_2 (struct cfq_data*,int ) ;
 int FUNC_3 (struct cfq_data*,struct cfq_queue*,char*,void*) ;
 unsigned int FUNC_4 (struct cfq_data*,struct cfq_queue*) ;
 void* VAR_0 ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;

__attribute__((used)) static inline void
FUNC_7(struct cfq_data *VAR_1, struct cfq_queue *VAR_2)
{
 unsigned VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_1->cfq_latency) {




  unsigned VAR_4 = FUNC_1(VAR_1, VAR_2->cfqg,
      FUNC_0(VAR_2));
  unsigned VAR_5 = VAR_1->cfq_slice[1];
  unsigned VAR_6 = VAR_5 * VAR_4;
  unsigned VAR_7 = FUNC_2(VAR_1, VAR_2->cfqg);

  if (VAR_6 > VAR_7) {
   unsigned VAR_8 = 2 * VAR_1->cfq_slice_idle;


   unsigned VAR_9 =
    FUNC_6(VAR_3, VAR_8 * VAR_3 / VAR_5);


   VAR_3 = FUNC_5(VAR_3 * VAR_7 / VAR_6,
        VAR_9);
  }
 }
 VAR_2->slice_start = VAR_0;
 VAR_2->slice_end = VAR_0 + VAR_3;
 VAR_2->allocated_slice = VAR_3;
 FUNC_3(VAR_1, VAR_2, "set_slice=%lu", VAR_2->slice_end - VAR_0);
}
