
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vm_pageout_queue {scalar_t__ pgo_inited; scalar_t__ pgo_lowpriority; int pgo_tid; } ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(struct vm_pageout_queue *VAR_10, boolean_t VAR_11)
{
 uint32_t VAR_12;

 if (VAR_6 == VAR_5)
  VAR_11 = VAR_0;

 if (VAR_10->pgo_inited == VAR_5 && VAR_10->pgo_lowpriority != VAR_11) {

  FUNC_3();

  if (VAR_11 == VAR_5) {
   VAR_12 = VAR_3;
   FUNC_0(VAR_8);
  } else {
   VAR_12 = VAR_4;
   FUNC_0(VAR_9);
  }
  FUNC_1(VAR_7, VAR_10->pgo_tid,
      VAR_1, VAR_2, VAR_12);

  VAR_10->pgo_lowpriority = VAR_11;

  FUNC_2();
 }
}
