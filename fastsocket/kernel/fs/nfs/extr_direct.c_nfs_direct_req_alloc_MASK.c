
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;
struct nfs_direct_req {int lock; int work; TYPE_1__ mds_cinfo; int completion; int kref; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct nfs_direct_req* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static inline struct nfs_direct_req *FUNC_7(void)
{
 struct nfs_direct_req *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_5(&VAR_3->kref);
 FUNC_4(&VAR_3->kref);
 FUNC_2(&VAR_3->completion);
 FUNC_0(&VAR_3->mds_cinfo.list);
 FUNC_1(&VAR_3->work, VAR_2);
 FUNC_6(&VAR_3->lock);

 return VAR_3;
}
