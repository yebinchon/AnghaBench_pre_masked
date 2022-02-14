
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mnt; int dentry; } ;
struct svc_export {TYPE_1__ ex_path; int ex_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct svc_export *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->ex_client, VAR_0);
 VAR_2 ^= FUNC_0(VAR_1->ex_path.dentry, VAR_0);
 VAR_2 ^= FUNC_0(VAR_1->ex_path.mnt, VAR_0);
 return VAR_2;
}
