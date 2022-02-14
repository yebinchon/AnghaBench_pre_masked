
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_fault {scalar_t__ virtual_address; } ;
struct vm_area_struct {int vm_page_prot; } ;
struct gru_thread_state {scalar_t__ ts_steal_jiffies; int ts_ctxlock; int ts_ctxnum; int ts_gru; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (unsigned long,struct vm_area_struct*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct gru_thread_state*) ;
 int FUNC_4 (struct gru_thread_state*) ;
 int FUNC_5 (int ,char*,struct vm_area_struct*,unsigned long,int ) ;
 struct gru_thread_state* FUNC_6 (struct vm_area_struct*,int ) ;
 int FUNC_7 (struct gru_thread_state*) ;
 int FUNC_8 (struct gru_thread_state*) ;
 int VAR_7 ;
 unsigned long FUNC_9 (int ,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_10 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct vm_area_struct*,unsigned long,unsigned long,int,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;

int FUNC_17(struct vm_area_struct *VAR_11, struct vm_fault *VAR_12)
{
 struct gru_thread_state *VAR_13;
 unsigned long VAR_14, VAR_15;

 VAR_15 = (unsigned long)VAR_12->virtual_address;
 FUNC_5(VAR_7, "vma %p, vaddr 0x%lx (0x%lx)\n",
  VAR_11, VAR_15, FUNC_0(VAR_15));
 FUNC_1(VAR_10);


 VAR_13 = FUNC_6(VAR_11, FUNC_2(VAR_15, VAR_11));
 if (!VAR_13)
  return VAR_6;

again:
 FUNC_10(&VAR_13->ts_ctxlock);
 FUNC_12();

 FUNC_4(VAR_13);

 if (!VAR_13->ts_gru) {
  FUNC_1(VAR_9);
  if (!FUNC_3(VAR_13)) {
   FUNC_13();
   FUNC_11(&VAR_13->ts_ctxlock);
   FUNC_16(VAR_4);
   FUNC_15(VAR_0);
   if (VAR_13->ts_steal_jiffies + VAR_2 < VAR_8)
    FUNC_8(VAR_13);
   goto again;
  }
  FUNC_7(VAR_13);
  VAR_14 = FUNC_9(VAR_13->ts_gru, VAR_13->ts_ctxnum);
  FUNC_14(VAR_11, VAR_15 & ~(VAR_1 - 1),
    VAR_14 >> VAR_3, VAR_1,
    VAR_11->vm_page_prot);
 }

 FUNC_13();
 FUNC_11(&VAR_13->ts_ctxlock);

 return VAR_5;
}
