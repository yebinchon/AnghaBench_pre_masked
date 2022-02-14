
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_smp {scalar_t__ hop_ptr; scalar_t__ hop_cnt; } ;
struct ib_device {scalar_t__ process_mad; } ;
typedef enum smi_action { ____Placeholder_smi_action } smi_action ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_smp*) ;

__attribute__((used)) static inline enum smi_action FUNC_1(struct ib_smp *VAR_2,
        struct ib_device *VAR_3)
{


 return ((VAR_3->process_mad &&
  !FUNC_0(VAR_2) &&
  (VAR_2->hop_ptr == VAR_2->hop_cnt + 1)) ?
  VAR_1 : VAR_0);
}
