
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef size_t uint32_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef int os_reason_t ;
typedef int clock_usec_t ;
typedef scalar_t__ clock_sec_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_14__ {scalar_t__ entry_count; } ;
struct TYPE_13__ {size_t p_memstat_effectivepriority; int p_memstat_state; char* p_name; int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,scalar_t__,int ,int,int ,int ) ;
 int FUNC_2 (int,char*,int,int ,char*,scalar_t__) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ,scalar_t__*,int*) ;
 int FUNC_4 () ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_5 (TYPE_1__*,size_t,int ) ;
 scalar_t__ VAR_14 ;
 TYPE_1__* FUNC_6 (unsigned int*,scalar_t__) ;
 TYPE_1__* FUNC_7 (unsigned int*,TYPE_1__*,scalar_t__) ;
 int FUNC_8 (int *,int ) ;
 TYPE_7__* VAR_15 ;
 scalar_t__ VAR_16 ;
 int * VAR_17 ;
 int FUNC_9 (TYPE_1__*,size_t,int ) ;
 int FUNC_10 (int ,char*,unsigned long,size_t,int,int ,char*,int ,size_t,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 TYPE_1__* FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_18(uint32_t VAR_18, os_reason_t VAR_19, unsigned int VAR_20, int VAR_21, uint32_t *VAR_22)
{
 pid_t VAR_23 = 0;
 proc_t VAR_24 = VAR_6, VAR_25 = VAR_6;
 boolean_t VAR_26 = VAR_4, VAR_27 = VAR_4;
 int VAR_28 = 0;
 uint32_t VAR_29;
 uint64_t VAR_30 = 0;
        clock_sec_t VAR_31;
        clock_usec_t VAR_32;
        uint32_t VAR_33;


 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_3,
  VAR_13, 0, 0, 0, 0);
 FUNC_13();

 VAR_25 = FUNC_6(&VAR_20, VAR_4);
 while (VAR_25) {

  VAR_24 = VAR_25;
  VAR_25 = FUNC_7(&VAR_20, VAR_24, VAR_4);

  VAR_23 = VAR_24->p_pid;
  VAR_29 = VAR_24->p_memstat_effectivepriority;




  if (!(VAR_24->p_memstat_state & VAR_11)) {
   continue;
  }

  if (VAR_24->p_memstat_state & (VAR_7 | VAR_10)) {
   continue;
  }
  if (VAR_16 == 0) {
   FUNC_8(((void*)0),0);
   VAR_26 = VAR_12;
  }

  VAR_24->p_memstat_state |= VAR_10;

  VAR_30 = FUNC_4();
  FUNC_3(VAR_30, &VAR_31, &VAR_32);
  VAR_33 = VAR_32 / 1000;

  FUNC_9(VAR_24, VAR_18, VAR_30);

  if (FUNC_15(VAR_24) == VAR_24) {

   FUNC_14();

                        FUNC_10(VAR_5, "%lu.%03d memorystatus: killing_top_process_elevated%d pid %d [%s] (%s %d) - memorystatus_available_pages: %llu\n",
                               (unsigned long)VAR_31, VAR_33,
          VAR_21,
                               VAR_23, (*VAR_24->p_name ? VAR_24->p_name : "unknown"),
                               VAR_17[VAR_18], VAR_29, (uint64_t)VAR_13);






   FUNC_12(VAR_19);
   VAR_27 = FUNC_5(VAR_24, VAR_18, VAR_19);


   if (VAR_27) {
    FUNC_16(VAR_24);
    VAR_28++;
    goto exit;
   }





   FUNC_13();
   FUNC_17(VAR_24);
   VAR_24->p_memstat_state &= ~VAR_10;
   VAR_24->p_memstat_state |= VAR_7;
   *VAR_22 += 1;
  }
  VAR_25 = FUNC_6(&VAR_20, VAR_4);
 }

 FUNC_14();

exit:
 FUNC_11(VAR_19);


 if (VAR_26 && (VAR_28 == 0)) {
  FUNC_13();
  VAR_15->entry_count = VAR_16 = 0;
  FUNC_14();
 }

 FUNC_1(FUNC_0(VAR_1, VAR_0) | VAR_2,
         VAR_13, VAR_27 ? VAR_23 : 0, VAR_28, 0, 0);

 return (VAR_27);
}
