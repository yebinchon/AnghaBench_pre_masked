
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vic_provinfo {int dummy; } ;
struct enic {int devcmd_lock; int vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vic_provinfo*) ;
 int FUNC_3 (int ,int *,int ) ;

int FUNC_4(struct enic *VAR_0, struct vic_provinfo *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->devcmd_lock);
 VAR_2 = FUNC_3(VAR_0->vdev,
  (u8 *)VAR_1, FUNC_2(VAR_1));
 FUNC_1(&VAR_0->devcmd_lock);

 return VAR_2;
}
