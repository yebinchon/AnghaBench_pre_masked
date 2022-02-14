
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct qdio_q {int mask; TYPE_1__* irq_ptr; int nr; } ;
struct TYPE_2__ {unsigned long sch_token; int schid; } ;


 int FUNC_0 (int ,TYPE_1__*,char*,int ) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (struct qdio_q*) ;
 int FUNC_3 (unsigned long,int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct qdio_q*) ;
 int FUNC_5 (struct qdio_q*,int ) ;
 int VAR_3 ;

__attribute__((used)) static inline int FUNC_6(struct qdio_q *VAR_4)
{
 unsigned long VAR_5 = *((u32 *) &VAR_4->irq_ptr->schid);
 unsigned int VAR_6 = VAR_2;
 int VAR_7;

 FUNC_0(VAR_0, VAR_4->irq_ptr, "siga-r:%1d", VAR_4->nr);
 FUNC_5(VAR_4, VAR_3);

 if (FUNC_4(VAR_4)) {
  VAR_5 = VAR_4->irq_ptr->sch_token;
  VAR_6 |= VAR_1;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_4->mask, VAR_6);
 if (VAR_7)
  FUNC_1("%4x SIGA-R:%2d", FUNC_2(VAR_4), VAR_7);
 return VAR_7;
}
