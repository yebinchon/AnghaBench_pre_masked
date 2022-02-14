
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int node_guid; int * node_desc; } ;
struct mlx4_ib_dev {TYPE_1__ ib_dev; TYPE_2__* dev; } ;
struct ib_smp {scalar_t__ data; int attr_id; } ;
typedef int __be32 ;
struct TYPE_4__ {int rev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_smp*) ;
 int FUNC_2 (struct ib_smp*) ;
 struct ib_smp* FUNC_3 (int,int ) ;
 struct ib_smp* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,scalar_t__,int) ;
 int FUNC_6 (struct mlx4_ib_dev*,int,int,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct mlx4_ib_dev *VAR_6)
{
 struct ib_smp *VAR_7 = ((void*)0);
 struct ib_smp *VAR_8 = ((void*)0);
 int VAR_9 = VAR_4;
 int VAR_10 = -VAR_0;

 VAR_7 = FUNC_4(sizeof *VAR_7, VAR_1);
 VAR_8 = FUNC_3(sizeof *VAR_8, VAR_1);
 if (!VAR_7 || !VAR_8)
  goto out;

 FUNC_1(VAR_7);
 VAR_7->attr_id = VAR_2;
 if (FUNC_7(VAR_6->dev))
  VAR_9 |= VAR_5;

 VAR_10 = FUNC_6(VAR_6, VAR_9, 1, ((void*)0), ((void*)0), VAR_7, VAR_8);
 if (VAR_10)
  goto out;

 FUNC_5(VAR_6->ib_dev.node_desc, VAR_8->data, 64);

 VAR_7->attr_id = VAR_3;

 VAR_10 = FUNC_6(VAR_6, VAR_9, 1, ((void*)0), ((void*)0), VAR_7, VAR_8);
 if (VAR_10)
  goto out;

 VAR_6->dev->rev_id = FUNC_0((__be32 *) (VAR_8->data + 32));
 FUNC_5(&VAR_6->ib_dev.node_guid, VAR_8->data + 12, 8);

out:
 FUNC_2(VAR_7);
 FUNC_2(VAR_8);
 return VAR_10;
}
