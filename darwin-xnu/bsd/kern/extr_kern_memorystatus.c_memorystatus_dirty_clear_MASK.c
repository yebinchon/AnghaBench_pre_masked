
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* proc_t ;
struct TYPE_5__ {int p_memstat_dirty; int p_listflag; int p_memstat_state; int p_pid; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int,int ,int ,int ) ;
 int FUNC_2 (int,char*,int ,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

int
FUNC_8(proc_t VAR_15, uint32_t VAR_16) {

 int VAR_17 = 0;

 FUNC_2(1, "memorystatus_dirty_clear(): %d 0x%x 0x%x\n", VAR_15->p_pid, VAR_16, VAR_15->p_memstat_dirty);

 FUNC_1(FUNC_0(VAR_1, VAR_0), VAR_15->p_pid, VAR_16, 0, 0, 0);

 FUNC_6();

 if ((VAR_15->p_listflag & VAR_12) != 0) {



  VAR_17 = VAR_2;
  goto exit;
 }

 if (VAR_15->p_memstat_state & VAR_13) {
  VAR_17 = VAR_4;
  goto exit;
 }

 if (!(VAR_15->p_memstat_dirty & VAR_11)) {

  VAR_17 = VAR_3;
  goto exit;
 }

 if (!VAR_16 || (VAR_16 & (VAR_7 | VAR_5 | VAR_6)) == 0) {
  VAR_17 = VAR_3;
  goto exit;
 }

 if (VAR_16 & VAR_7) {
  VAR_15->p_memstat_dirty &= ~VAR_10;
 }


 if (VAR_16 & (VAR_5 | VAR_6)) {

  if (VAR_15->p_memstat_dirty & VAR_8) {
   VAR_15->p_memstat_dirty &= ~(VAR_8);
  }

  if (VAR_15->p_memstat_dirty & VAR_9) {
   VAR_15->p_memstat_dirty &= ~(VAR_9);
  }

  FUNC_3(VAR_15, VAR_14);
  FUNC_5(VAR_15);
  FUNC_4();
 }

 VAR_17 = 0;
exit:
 FUNC_7();

 return VAR_17;
}
