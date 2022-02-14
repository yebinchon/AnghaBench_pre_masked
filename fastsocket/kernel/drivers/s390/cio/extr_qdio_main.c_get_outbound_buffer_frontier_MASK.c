
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nr_sbal_nop; } ;
struct qdio_q {int first_to_check; int nr; TYPE_2__* irq_ptr; TYPE_1__ q_stats; int nr_buf_used; } ;
struct TYPE_4__ {int perf_stat_enabled; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_2__*,char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;






 int FUNC_2 (struct qdio_q*,int) ;
 int FUNC_3 (struct qdio_q*,int) ;
 void* FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (struct qdio_q*,int,unsigned char*,int,int ,int) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (struct qdio_q*) ;
 int FUNC_10 (struct qdio_q*) ;
 int FUNC_11 (struct qdio_q*,int) ;
 int FUNC_12 (struct qdio_q*) ;
 scalar_t__ FUNC_13 (struct qdio_q*) ;

__attribute__((used)) static int FUNC_14(struct qdio_q *VAR_3)
{
 int VAR_4, VAR_5;
 unsigned char VAR_6;

 if (((FUNC_13(VAR_3) != VAR_1) && !FUNC_10(VAR_3)) ||
     (FUNC_13(VAR_3) == VAR_1 && FUNC_9(VAR_3)))
  FUNC_12(VAR_3);





 VAR_4 = FUNC_8(FUNC_5(&VAR_3->nr_buf_used), VAR_2);
 VAR_5 = FUNC_4(VAR_3->first_to_check, VAR_4);
 if (VAR_3->first_to_check == VAR_5)
  goto out;

 VAR_4 = FUNC_7(VAR_3, VAR_3->first_to_check, &VAR_6, VAR_4, 0, 1);
 if (!VAR_4)
  goto out;

 switch (VAR_6) {
 case 128:
  FUNC_0();
 case 132:

  FUNC_1(VAR_0, VAR_3->irq_ptr,
   "out empty:%1d %02x", VAR_3->nr, VAR_4);

  FUNC_6(VAR_4, &VAR_3->nr_buf_used);
  VAR_3->first_to_check = FUNC_4(VAR_3->first_to_check, VAR_4);
  if (VAR_3->irq_ptr->perf_stat_enabled)
   FUNC_2(VAR_3, VAR_4);

  break;
 case 131:
  FUNC_11(VAR_3, VAR_4);
  VAR_3->first_to_check = FUNC_4(VAR_3->first_to_check, VAR_4);
  FUNC_6(VAR_4, &VAR_3->nr_buf_used);
  if (VAR_3->irq_ptr->perf_stat_enabled)
   FUNC_3(VAR_3, VAR_4);
  break;
 case 133:

  if (VAR_3->irq_ptr->perf_stat_enabled)
   VAR_3->q_stats.nr_sbal_nop++;
  FUNC_1(VAR_0, VAR_3->irq_ptr, "out primed:%1d",
         VAR_3->nr);
  break;
 case 129:
 case 130:
  break;
 default:
  FUNC_0();
 }

out:
 return VAR_3->first_to_check;
}
