
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rtftype; scalar_t__ rtftid; scalar_t__ rtfupid; scalar_t__ rtfpc; int rtfaddr; scalar_t__ rtfduration; scalar_t__ rtfabstime; } ;
typedef TYPE_1__ vm_rtfault_record_t ;
typedef int vm_map_offset_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef TYPE_2__* thread_t ;
struct TYPE_8__ {scalar_t__ vmrtfr_curi; scalar_t__ vmrtfr_maxi; TYPE_1__* vm_rtf_records; int vmrtf_total; } ;
struct TYPE_7__ {scalar_t__ thread_id; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,uintptr_t*,unsigned int,scalar_t__*,int*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_6(thread_t VAR_1, uint64_t VAR_2, vm_map_offset_t VAR_3, int VAR_4) {
 uint64_t VAR_5 = FUNC_3();

 uint64_t VAR_6 = 0;
 uint64_t VAR_7 = VAR_1->thread_id;
 uint64_t VAR_8 = FUNC_2();

 uintptr_t VAR_9 = 0;
 uint32_t VAR_10 = 0;
 bool VAR_11 = 0;






 int VAR_12 = FUNC_1(VAR_1, &VAR_9, 1U, &VAR_10, &VAR_11);

 if ((VAR_12 == 0) && (VAR_10 > 0)) {
  VAR_6 = VAR_9;
 }

 FUNC_0((VAR_2 != 0) && VAR_5 >= VAR_2);
 FUNC_4();
 FUNC_0(VAR_0.vmrtfr_curi <= VAR_0.vmrtfr_maxi);

 VAR_0.vmrtf_total++;
 vm_rtfault_record_t *VAR_13 = &VAR_0.vm_rtf_records[VAR_0.vmrtfr_curi++];

 VAR_13->rtfabstime = VAR_2;
 VAR_13->rtfduration = VAR_5 - VAR_2;
 VAR_13->rtfaddr = VAR_3;
 VAR_13->rtfpc = VAR_6;
 VAR_13->rtftype = VAR_4;
 VAR_13->rtfupid = VAR_8;
 VAR_13->rtftid = VAR_7;

 if (VAR_0.vmrtfr_curi > VAR_0.vmrtfr_maxi) {
  VAR_0.vmrtfr_curi = 0;
 }

 FUNC_5();
}
