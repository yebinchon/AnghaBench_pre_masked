
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct shared_info {unsigned long* evtchn_pending; unsigned long* evtchn_mask; } ;


 unsigned long* FUNC_0 (unsigned int) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned int VAR_0,
        struct shared_info *VAR_1,
        unsigned int VAR_2)
{
 return (VAR_1->evtchn_pending[VAR_2] &
  FUNC_0(VAR_0)[VAR_2] &
  ~VAR_1->evtchn_mask[VAR_2]);
}
