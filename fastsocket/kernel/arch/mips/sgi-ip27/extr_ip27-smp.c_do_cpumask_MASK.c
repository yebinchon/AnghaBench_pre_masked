
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int nasid_t ;
struct TYPE_12__ {scalar_t__ brd_nasid; } ;
typedef TYPE_2__ lboard_t ;
typedef int klinfo_t ;
struct TYPE_11__ {size_t virtid; int flags; } ;
struct TYPE_13__ {TYPE_1__ cpu_info; } ;
typedef TYPE_3__ klcpu_t ;
typedef size_t cpuid_t ;
typedef int cnodeid_t ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (size_t,int) ;
 int VAR_4 ;
 int FUNC_3 (size_t,int ) ;
 int * VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(cnodeid_t VAR_6, nasid_t VAR_7, int VAR_8)
{
 static int VAR_9 = 0;
 lboard_t *VAR_10;
 klcpu_t *VAR_11;
 int VAR_12 = 0;
 cpuid_t VAR_13;

 VAR_10 = FUNC_6((lboard_t *)FUNC_1(VAR_7), VAR_2);

 do {
  VAR_11 = (klcpu_t *)FUNC_5(VAR_10, VAR_1);
  while (VAR_11) {
   VAR_13 = VAR_11->cpu_info.virtid;

   if (FUNC_7(VAR_10) == VAR_10->brd_nasid)
    VAR_5[VAR_13] = VAR_6;
   if (VAR_13 > VAR_8)
    VAR_8 = VAR_13;

   if ((VAR_11->cpu_info.flags & VAR_0) &&
       (VAR_9 != VAR_3)) {
    FUNC_3(VAR_13, VAR_4);
    FUNC_2(VAR_13, VAR_9);
    VAR_12++;
    VAR_9++;
   }
   VAR_11 = (klcpu_t *)FUNC_4(VAR_10, (klinfo_t *)VAR_11,
        VAR_1);
  }
  VAR_10 = FUNC_0(VAR_10);
  if (!VAR_10)
   break;

  VAR_10 = FUNC_6(VAR_10, VAR_2);
 } while (VAR_10);

 return VAR_8;
}
