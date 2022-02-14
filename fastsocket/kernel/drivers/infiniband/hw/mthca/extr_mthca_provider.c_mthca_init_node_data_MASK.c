
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node_guid; int * node_desc; } ;
struct mthca_dev {TYPE_1__ ib_dev; int rev_id; } ;
struct ib_smp {scalar_t__ data; int attr_id; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (struct mthca_dev*,int,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_7 (struct mthca_dev*) ;

__attribute__((used)) static int FUNC_8(struct mthca_dev *VAR_4)
{
 struct ib_smp *VAR_5 = ((void*)0);
 struct ib_smp *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_4(sizeof *VAR_5, VAR_1);
 VAR_6 = FUNC_3(sizeof *VAR_6, VAR_1);
 if (!VAR_5 || !VAR_6)
  goto out;

 FUNC_1(VAR_5);
 VAR_5->attr_id = VAR_2;

 VAR_7 = FUNC_6(VAR_4, 1, 1,
       1, ((void*)0), ((void*)0), VAR_5, VAR_6);
 if (VAR_7)
  goto out;

 FUNC_5(VAR_4->ib_dev.node_desc, VAR_6->data, 64);

 VAR_5->attr_id = VAR_3;

 VAR_7 = FUNC_6(VAR_4, 1, 1,
       1, ((void*)0), ((void*)0), VAR_5, VAR_6);
 if (VAR_7)
  goto out;

 if (FUNC_7(VAR_4))
  VAR_4->rev_id = FUNC_0((__be32 *) (VAR_6->data + 32));
 FUNC_5(&VAR_4->ib_dev.node_guid, VAR_6->data + 12, 8);

out:
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 return VAR_7;
}
