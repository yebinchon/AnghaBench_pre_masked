
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ipz_queue {int queue_length; int pagesize; int qe_size; int act_nr_of_sg; int toggle_state; scalar_t__ queue_pages; int * small_page; scalar_t__ current_q_offset; } ;
struct ehca_pd {int dummy; } ;


 int VAR_0 ;
 int const VAR_1 ;
 int FUNC_0 (struct ipz_queue*,int const) ;
 int FUNC_1 (struct ipz_queue*,struct ehca_pd*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int const,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int const) ;

int FUNC_8(struct ehca_pd *VAR_2, struct ipz_queue *VAR_3,
     const u32 VAR_4, const u32 VAR_5,
     const u32 VAR_6, const u32 VAR_7,
     int VAR_8)
{
 if (VAR_5 > VAR_1) {
  FUNC_2("FATAL ERROR: pagesize=%x "
        "is greater than kernel page size", VAR_5);
  return 0;
 }


 VAR_3->queue_length = VAR_4 * VAR_5;
 VAR_3->pagesize = VAR_5;
 VAR_3->qe_size = VAR_6;
 VAR_3->act_nr_of_sg = VAR_7;
 VAR_3->current_q_offset = 0;
 VAR_3->toggle_state = 1;
 VAR_3->small_page = ((void*)0);


 VAR_3->queue_pages = FUNC_5(VAR_4 * sizeof(void *), VAR_0);
 if (!VAR_3->queue_pages) {
  VAR_3->queue_pages = FUNC_7(VAR_4 * sizeof(void *));
  if (!VAR_3->queue_pages) {
   FUNC_2("Couldn't allocate queue page list");
   return 0;
  }
 }


 if (VAR_8) {
  if (!FUNC_1(VAR_3, VAR_2))
   goto ipz_queue_ctor_exit0;
 } else
  if (!FUNC_0(VAR_3, VAR_4))
   goto ipz_queue_ctor_exit0;

 return 1;

ipz_queue_ctor_exit0:
 FUNC_2("Couldn't alloc pages queue=%p "
   "nr_of_pages=%x", VAR_3, VAR_4);
 if (FUNC_3(VAR_3->queue_pages))
  FUNC_6(VAR_3->queue_pages);
 else
  FUNC_4(VAR_3->queue_pages);

 return 0;
}
