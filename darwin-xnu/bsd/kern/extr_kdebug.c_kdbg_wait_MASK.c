
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int boolean_t ;
struct TYPE_2__ {scalar_t__ kds_inuse_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int*) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (int ,int ,int*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 (int,int*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static boolean_t
FUNC_11(uint64_t VAR_8, boolean_t VAR_9)
{
 int VAR_10 = VAR_3;
 uint64_t VAR_11 = 0;

 FUNC_1();

 if (VAR_8 != 0) {
  uint64_t VAR_12 = VAR_8 * VAR_1;
  FUNC_9(VAR_12, &VAR_11);
  FUNC_0(VAR_11, &VAR_11);
 }

 boolean_t VAR_13 = FUNC_8(VAR_0);
 if (!VAR_13) {
  FUNC_10("kdbg_wait() called with interrupts disabled");
 }
 FUNC_4(VAR_6);

 if (!VAR_9) {

  FUNC_3();
 }

 while (VAR_10 == VAR_3 &&
        VAR_4.kds_inuse_count < VAR_7)
 {
  VAR_5 = 1;

  if (VAR_11) {
   VAR_10 = FUNC_6(VAR_6, 0, &VAR_5, VAR_2, VAR_11);
  } else {
   VAR_10 = FUNC_5(VAR_6, 0, &VAR_5, VAR_2);
  }

  VAR_5 = 0;
 }


 boolean_t VAR_14 = (VAR_4.kds_inuse_count >= VAR_7);

 FUNC_7(VAR_6);
 FUNC_8(VAR_13);

 if (!VAR_9) {

  FUNC_2();
 }


 return VAR_14;
}
