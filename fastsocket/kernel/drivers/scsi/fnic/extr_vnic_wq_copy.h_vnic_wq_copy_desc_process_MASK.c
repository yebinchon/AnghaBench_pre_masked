
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int desc_count; unsigned int desc_avail; } ;
struct vnic_wq_copy {int to_clean_index; TYPE_1__ ring; } ;



__attribute__((used)) static inline void FUNC_0(struct vnic_wq_copy *VAR_0, u16 VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0->to_clean_index <= VAR_1)
  VAR_2 = (VAR_1 - VAR_0->to_clean_index) + 1;
 else
  VAR_2 = VAR_0->ring.desc_count - VAR_0->to_clean_index + VAR_1 + 1;

 VAR_0->to_clean_index = ((VAR_1 + 1) % VAR_0->ring.desc_count);
 VAR_0->ring.desc_avail += VAR_2;

}
