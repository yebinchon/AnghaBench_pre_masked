
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qrange {int dummy; } ;
struct qout64_old {unsigned long qoutptr; int qoutlen; unsigned long segstart; unsigned long segend; int segcnt; int segrcnt; unsigned long start; unsigned long end; struct qout64_old* range; struct qout64_old* qname; int qopcode; } ;
struct qout64 {unsigned long qoutptr; int qoutlen; unsigned long segstart; unsigned long segend; int segcnt; int segrcnt; unsigned long start; unsigned long end; struct qout64* range; struct qout64* qname; int qopcode; } ;
struct qin64 {unsigned long qoutptr; int qoutlen; unsigned long segstart; unsigned long segend; int segcnt; int segrcnt; unsigned long start; unsigned long end; struct qin64* range; struct qin64* qname; int qopcode; } ;
struct dcss_segment {int vm_segtype; int start_addr; unsigned long end; int segcnt; struct qout64_old* range; struct qout64_old* dcss_name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__*,struct qout64_old*,unsigned long*,unsigned long*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct qout64_old*) ;
 struct qout64_old* FUNC_3 (int,int ) ;
 struct qout64_old* FUNC_4 (int,int ) ;
 int FUNC_5 (struct qout64_old*,struct qout64_old*,int) ;
 int FUNC_6 (char*,unsigned long) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int
FUNC_7 (struct dcss_segment *VAR_10)
{
 struct qin64 *VAR_11 = FUNC_3 (sizeof(struct qin64), VAR_4);
 struct qout64 *VAR_12 = FUNC_3 (sizeof(struct qout64), VAR_4);

 int VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17;

 if ((VAR_11 == ((void*)0)) || (VAR_12 == ((void*)0))) {
  VAR_14 = -VAR_2;
  goto out_free;
 }


 VAR_11->qopcode = VAR_0;
 VAR_11->qoutptr = (unsigned long) VAR_12;
 VAR_11->qoutlen = sizeof(struct qout64);
 FUNC_5 (VAR_11->qname, VAR_10->dcss_name, 8);

 VAR_13 = FUNC_0(&VAR_9, VAR_11, &VAR_16, &VAR_17);

 if (VAR_13 < 0) {
  VAR_14 = VAR_13;
  goto out_free;
 }
 if (VAR_13 > 1) {
  FUNC_6("Querying a DCSS type failed with rc=%ld\n", VAR_17);
  VAR_14 = FUNC_1 (VAR_17);
  goto out_free;
 }
 if (VAR_12->segcnt > 6) {
  VAR_14 = -VAR_3;
  goto out_free;
 }

 if (VAR_12->segcnt == 1) {
  VAR_10->vm_segtype = VAR_12->range[0].start & 0xff;
 } else {




  unsigned long VAR_18 = VAR_12->segstart >> VAR_5;
  for (VAR_15=0; VAR_15<VAR_12->segcnt; VAR_15++) {
   if (((VAR_12->range[VAR_15].start & 0xff) != VAR_7) &&
       ((VAR_12->range[VAR_15].start & 0xff) != VAR_6)) {
    VAR_14 = -VAR_3;
    goto out_free;
   }
   if (VAR_18 != VAR_12->range[VAR_15].start >> VAR_5) {
    VAR_14 = -VAR_3;
    goto out_free;
   }
   VAR_18 = (VAR_12->range[VAR_15].end >> VAR_5) + 1;
  }
  VAR_10->vm_segtype = VAR_8;
 }


 VAR_10->start_addr = VAR_12->segstart;
 VAR_10->end = VAR_12->segend;

 FUNC_5 (VAR_10->range, VAR_12->range, 6*sizeof(struct qrange));
 VAR_10->segcnt = VAR_12->segcnt;

 VAR_14 = 0;

 out_free:
 FUNC_2(VAR_11);
 FUNC_2(VAR_12);
 return VAR_14;
}
