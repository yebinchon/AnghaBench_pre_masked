
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef unsigned long u32 ;
struct TYPE_4__ {scalar_t__ use_cq; scalar_t__ use_enh_siga; } ;
struct TYPE_5__ {TYPE_1__ out; } ;
struct qdio_q {TYPE_3__* irq_ptr; int nr; int mask; TYPE_2__ u; } ;
struct TYPE_6__ {unsigned long sch_token; int schid; } ;


 int FUNC_0 (int ,TYPE_3__*,char*,int,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (struct qdio_q*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long,int ,unsigned int*,unsigned int,unsigned long) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (struct qdio_q*) ;
 scalar_t__ FUNC_7 (struct qdio_q*) ;

__attribute__((used)) static int FUNC_8(struct qdio_q *VAR_6, unsigned int *VAR_7,
 unsigned long VAR_8)
{
 unsigned long VAR_9 = *((u32 *) &VAR_6->irq_ptr->schid);
 unsigned int VAR_10 = VAR_4;
 u64 VAR_11 = 0;
 int VAR_12, VAR_13 = 0;
 unsigned long VAR_14 = 0;

 if (VAR_6->u.out.use_enh_siga)
  VAR_10 = 3;

 if (VAR_6->u.out.use_cq && VAR_8 != 0) {
  VAR_10 = VAR_5;
  VAR_14 = VAR_8;
 }

 if (FUNC_6(VAR_6)) {
  VAR_9 = VAR_6->irq_ptr->sch_token;
  VAR_10 |= VAR_3;
 }
again:
 FUNC_3((VAR_8 != 0 && FUNC_7(VAR_6) != VAR_2) ||
  (VAR_8 != 0 && VAR_10 != VAR_5));
 VAR_12 = FUNC_4(VAR_9, VAR_6->mask, VAR_7, VAR_10, VAR_14);


 if (*VAR_7) {
  FUNC_2(FUNC_7(VAR_6) != VAR_2 || VAR_12 != 2);
  VAR_13++;

  if (!VAR_11) {
   VAR_11 = FUNC_5();
   goto again;
  }
  if ((FUNC_5() - VAR_11) < VAR_1)
   goto again;
 }
 if (VAR_13) {
  FUNC_0(VAR_0, VAR_6->irq_ptr,
         "%4x cc2 BB1:%1d", FUNC_1(VAR_6), VAR_6->nr);
  FUNC_0(VAR_0, VAR_6->irq_ptr, "count:%u", VAR_13);
 }
 return VAR_12;
}
