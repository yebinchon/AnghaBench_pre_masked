
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int config; } ;
struct TYPE_3__ {scalar_t__ type; int config; int exclude_user; int exclude_kernel; } ;
struct perf_event {TYPE_2__ hw; TYPE_1__ attr; } ;
struct p4_event_bind {int opcode; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 struct p4_event_bind* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ,int ) ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct perf_event*) ;
 int FUNC_12 () ;
 int FUNC_13 (struct perf_event*) ;

__attribute__((used)) static int FUNC_14(struct perf_event *VAR_3)
{
 int VAR_4 = FUNC_2();
 int VAR_5 = 0;
 u32 VAR_6, VAR_7;







 VAR_7 = FUNC_6(VAR_4);
 VAR_6 = FUNC_7(VAR_4, VAR_3->attr.exclude_kernel,
      VAR_3->attr.exclude_user);
 VAR_3->hw.config = FUNC_5(VAR_6) |
      FUNC_4(VAR_7);

 if (FUNC_8() && FUNC_9(VAR_4))
  VAR_3->hw.config = FUNC_10(VAR_3->hw.config);

 if (VAR_3->attr.type == VAR_2) {
  struct p4_event_bind *VAR_8;
  unsigned int VAR_9;




   VAR_3->attr.config &= VAR_1;

  VAR_5 = FUNC_11(VAR_3);
  if (VAR_5)
   goto out;





  VAR_3->hw.config |= VAR_3->attr.config;
  VAR_8 = FUNC_3(VAR_3->attr.config);
  if (!VAR_8) {
   VAR_5 = -VAR_0;
   goto out;
  }
  VAR_9 = FUNC_1(VAR_8->opcode);
  VAR_3->hw.config |= FUNC_4(FUNC_0(VAR_9));
 }

 VAR_5 = FUNC_13(VAR_3);
out:
 FUNC_12();
 return VAR_5;
}
