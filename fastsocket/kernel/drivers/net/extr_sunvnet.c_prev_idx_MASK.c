
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vio_dring_state {scalar_t__ num_entries; } ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0, struct vio_dring_state *VAR_1)
{
 if (VAR_0 == 0)
  VAR_0 = VAR_1->num_entries - 1;
 else
  VAR_0--;

 return VAR_0;
}
