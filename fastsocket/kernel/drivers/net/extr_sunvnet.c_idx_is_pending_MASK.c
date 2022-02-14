
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vio_dring_state {scalar_t__ cons; scalar_t__ prod; } ;


 scalar_t__ FUNC_0 (scalar_t__,struct vio_dring_state*) ;

__attribute__((used)) static int FUNC_1(struct vio_dring_state *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_0->cons;
 int VAR_3 = 0;

 while (VAR_2 != VAR_0->prod) {
  if (VAR_2 == VAR_1) {
   VAR_3 = 1;
   break;
  }
  VAR_2 = FUNC_0(VAR_2, VAR_0);
 }
 return VAR_3;
}
