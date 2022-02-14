
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_sb {int flags; int wait_on_page_timeout; int wait; } ;
struct netfs_trans {int dummy; } ;
struct netfs_cmd {scalar_t__ csize; scalar_t__ ext; scalar_t__ start; scalar_t__ size; int id; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct netfs_cmd*) ;
 struct netfs_trans* FUNC_1 (struct pohmelfs_sb*,int ,int ,int ) ;
 struct netfs_cmd* FUNC_2 (struct netfs_trans*) ;
 int FUNC_3 (struct netfs_trans*,struct pohmelfs_sb*) ;
 int FUNC_4 (struct netfs_cmd*,struct netfs_trans*,int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct pohmelfs_sb *VAR_4)
{
 struct netfs_trans *VAR_5;
 struct netfs_cmd *VAR_6;
 int VAR_7 = -VAR_0;

 VAR_5 = FUNC_1(VAR_4, 0, 0, 0);
 if (!VAR_5)
  goto err_out_exit;

 VAR_6 = FUNC_2(VAR_5);

 VAR_6->cmd = VAR_2;
 VAR_6->id = VAR_3;
 VAR_6->size = 0;
 VAR_6->start = 0;
 VAR_6->ext = 0;
 VAR_6->csize = 0;

 FUNC_0(VAR_6);
 FUNC_4(VAR_6, VAR_5, 0);

 VAR_7 = FUNC_3(VAR_5, VAR_4);
 if (VAR_7)
  goto err_out_exit;

 VAR_4->flags = ~0;
 VAR_7 = FUNC_5(VAR_4->wait,
   (VAR_4->flags != ~0),
   VAR_4->wait_on_page_timeout);
 if (!VAR_7)
  VAR_7 = -VAR_1;
 else if (VAR_7 > 0)
  VAR_7 = -VAR_4->flags;

 if (VAR_7)
  goto err_out_exit;

 return 0;

err_out_exit:
 return VAR_7;
}
