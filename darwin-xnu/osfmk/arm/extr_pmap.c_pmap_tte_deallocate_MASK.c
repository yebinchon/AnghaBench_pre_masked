
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int tt_entry_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_t ;
typedef int pmap_paddr_t ;
struct TYPE_3__ {scalar_t__ pmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,TYPE_1__*,scalar_t__,int*,...) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__,int*,unsigned int) ;
 int FUNC_7 (scalar_t__,int*,unsigned int) ;
 TYPE_1__* FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void
FUNC_11(
 pmap_t VAR_6,
 tt_entry_t *VAR_7,
 unsigned int VAR_8)
{
 pmap_paddr_t VAR_9;
 tt_entry_t VAR_10;

 FUNC_1(VAR_6);

 VAR_10 = *VAR_7;
 FUNC_7(VAR_6, VAR_7, VAR_8);

 if ((VAR_10 & VAR_4) == VAR_5) {
  FUNC_3(VAR_6);



  VAR_9 = FUNC_9(VAR_10) & ~VAR_1;
  FUNC_6(VAR_6, (tt_entry_t *) FUNC_5(VAR_9), VAR_8+1);
  FUNC_2(VAR_6);
 }
}
