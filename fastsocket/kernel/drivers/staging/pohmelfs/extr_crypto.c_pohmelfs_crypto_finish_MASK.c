
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pohmelfs_sb {int dummy; } ;
struct TYPE_2__ {struct netfs_cmd* iov_base; } ;
struct netfs_trans {int result; TYPE_1__ iovec; } ;
struct netfs_cmd {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct netfs_cmd*) ;
 int FUNC_2 (struct netfs_trans*,struct pohmelfs_sb*) ;
 int FUNC_3 (struct netfs_trans*) ;

__attribute__((used)) static int FUNC_4(struct netfs_trans *VAR_0, struct pohmelfs_sb *VAR_1, int VAR_2)
{
 struct netfs_cmd *VAR_3 = VAR_0->iovec.iov_base;
 FUNC_1(VAR_3);

 if (FUNC_0(!VAR_2))
  VAR_2 = FUNC_2(VAR_0, VAR_1);

 VAR_0->result = VAR_2;
 FUNC_3(VAR_0);

 return VAR_2;
}
