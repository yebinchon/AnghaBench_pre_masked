
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mesh_state {int n_msgin; int* msgin; } ;



__attribute__((used)) static inline int FUNC_0(struct mesh_state *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_2 = 1;
 if (VAR_0->n_msgin > 0) {
  VAR_1 = VAR_0->msgin[0];
  if (VAR_1 == 1) {

   VAR_2 = VAR_0->n_msgin < 2? 2: VAR_0->msgin[1] + 2;
  } else if (0x20 <= VAR_1 && VAR_1 <= 0x2f) {

   VAR_2 = 2;
  }
 }
 return VAR_2;
}
