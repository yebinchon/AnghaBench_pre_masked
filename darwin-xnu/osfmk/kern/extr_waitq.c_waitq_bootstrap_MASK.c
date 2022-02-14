
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;
typedef int tmp32 ;
struct wq_stats {int dummy; } ;
struct waitq_set {int dummy; } ;
struct waitq {int dummy; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char*,int*,int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_4 (int ,int *,int,int ,int,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (char*,scalar_t__,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int) ;
 int VAR_16 ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (int,int,int,char*) ;
 int FUNC_13 (int ,int ,scalar_t__) ;

void FUNC_14(void)
{
 kern_return_t VAR_17;
 uint32_t VAR_18, VAR_19, VAR_20;

 VAR_11 = VAR_0;
 if (FUNC_1("wqt_min_free", &VAR_20, sizeof(VAR_20)) == VAR_7)
  VAR_11 = VAR_20;
 FUNC_9("Minimum free table elements: %d", VAR_20);





 VAR_18 = FUNC_7();


 VAR_19 = sizeof(struct waitq);
 VAR_18 = FUNC_2(VAR_18, VAR_19);
 VAR_12 = VAR_18 / VAR_19;





 for (uint32_t VAR_21 = 0; VAR_21 < 31; VAR_21++) {
  uint32_t VAR_22 = (1 << VAR_21);
  if ((VAR_12 & VAR_22) == VAR_12)
   break;
  VAR_12 &= ~VAR_22;
 }
 FUNC_3(VAR_12 > 0);


 VAR_18 = FUNC_0(VAR_12 * VAR_19, VAR_4);

 FUNC_9("allocating %d global queues  (%d bytes)", VAR_12, VAR_18);
 VAR_17 = FUNC_4(VAR_15, (vm_offset_t *)&VAR_14,
          VAR_18, 0, VAR_2|VAR_3, VAR_8);
 if (VAR_17 != VAR_1 || VAR_14 == ((void*)0))
  FUNC_6("kernel_memory_allocate() failed to alloc global_waitqs"
        ", error: %d, whsize: 0x%x", VAR_17, VAR_18);
 for (uint32_t VAR_23 = 0; VAR_23 < VAR_12; VAR_23++) {
  FUNC_8(&VAR_14[VAR_23], VAR_6|VAR_5);
 }

 VAR_16 = FUNC_12(sizeof(struct waitq_set),
          VAR_9 * sizeof(struct waitq_set),
          sizeof(struct waitq_set),
          "waitq sets");
 FUNC_13(VAR_16, VAR_10, VAR_7);


 FUNC_10();


 FUNC_11();
}
