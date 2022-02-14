
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dtl_enable_mask; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ,int) ;
 int FUNC_6 (char*,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,unsigned long) ;
 scalar_t__ FUNC_10 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_11(int VAR_1, int VAR_2)
{

 if (FUNC_1(VAR_0) && !VAR_1) {
  unsigned long VAR_3;
  int VAR_4;

  if (FUNC_2()->dtl_enable_mask) {
   VAR_4 = FUNC_8(FUNC_4());
   if (VAR_4) {
    FUNC_5("WARNING: DTL deregistration for cpu "
           "%d (hw %d) failed with %d\n",
           FUNC_7(),
           FUNC_4(), VAR_4);
   }
  }

  VAR_3 = FUNC_0(FUNC_3());
  if (FUNC_9(FUNC_4(), VAR_3))
   FUNC_6("SLB shadow buffer deregistration of "
          "cpu %u (hw_cpu_id %d) failed\n",
          FUNC_7(),
          FUNC_4());

  VAR_3 = FUNC_0(FUNC_2());
  if (FUNC_10(FUNC_4(), VAR_3)) {
   FUNC_6("VPA deregistration of cpu %u (hw_cpu_id %d) "
     "failed\n", FUNC_7(),
     FUNC_4());
  }
 }
}
