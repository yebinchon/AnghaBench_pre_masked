
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_map_offset_t ;
typedef int pt_entry_t ;
typedef TYPE_2__* pmap_t ;
typedef int boolean_t ;
struct TYPE_13__ {int wired_mem; } ;
struct TYPE_11__ {int wired_count; } ;
struct TYPE_12__ {TYPE_1__ stats; } ;


 int FUNC_0 (int,int*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int * FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 TYPE_3__ VAR_3 ;

void
FUNC_10(
 pmap_t VAR_4,
 vm_map_offset_t VAR_5,
 boolean_t VAR_6)
{
 pt_entry_t *VAR_7;

 FUNC_1(VAR_4);

 if ((VAR_7 = FUNC_8(VAR_4, VAR_5)) == VAR_2)
  FUNC_5("pmap_change_wiring(%p,0x%llx,%d): pte missing",
        VAR_4, VAR_5, VAR_6);

 if (VAR_6 && !FUNC_4(*VAR_7)) {



  FUNC_6(VAR_4, VAR_3.wired_mem, VAR_0);
  FUNC_0(+1, &VAR_4->stats.wired_count);
  FUNC_9(VAR_7, 0, VAR_1);
 }
 else if (!VAR_6 && FUNC_4(*VAR_7)) {



  FUNC_3(VAR_4->stats.wired_count >= 1);
  FUNC_0(-1, &VAR_4->stats.wired_count);
  FUNC_7(VAR_4, VAR_3.wired_mem, VAR_0);
  FUNC_9(VAR_7, VAR_1, 0);
 }

 FUNC_2(VAR_4);
}
