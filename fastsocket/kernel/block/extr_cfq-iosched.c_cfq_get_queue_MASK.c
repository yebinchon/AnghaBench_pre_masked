
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_context {int dummy; } ;
struct cfq_queue {int ref; } ;
struct cfq_data {int dummy; } ;
typedef int gfp_t ;


 struct cfq_queue** FUNC_0 (struct cfq_data*,int const,int const) ;
 struct cfq_queue* FUNC_1 (struct cfq_data*,int,struct io_context*,int ) ;
 int FUNC_2 (struct io_context*) ;
 int FUNC_3 (struct io_context*) ;

__attribute__((used)) static struct cfq_queue *
FUNC_4(struct cfq_data *VAR_0, bool VAR_1, struct io_context *VAR_2,
       gfp_t VAR_3)
{
 const int VAR_4 = FUNC_2(VAR_2);
 const int VAR_5 = FUNC_3(VAR_2);
 struct cfq_queue **VAR_6 = ((void*)0);
 struct cfq_queue *VAR_7 = ((void*)0);

 if (!VAR_1) {
  VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_4);
  VAR_7 = *VAR_6;
 }

 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);




 if (!VAR_1 && !(*VAR_6)) {
  VAR_7->ref++;
  *VAR_6 = VAR_7;
 }

 VAR_7->ref++;
 return VAR_7;
}
