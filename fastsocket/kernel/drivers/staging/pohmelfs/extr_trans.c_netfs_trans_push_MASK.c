
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_trans {int flags; int result; } ;
struct netfs_state {int psb; } ;


 int VAR_0 ;
 int FUNC_0 (struct netfs_trans*,struct netfs_state*) ;
 int FUNC_1 (struct netfs_trans*,struct netfs_state*) ;
 int FUNC_2 (struct netfs_trans*,struct netfs_state*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct netfs_trans *VAR_1, struct netfs_state *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3)
  goto err_out_free;

 if (VAR_1->flags & VAR_0)
  FUNC_3(VAR_2->psb);

 return 0;

err_out_free:
 VAR_1->result = VAR_3;
 FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
