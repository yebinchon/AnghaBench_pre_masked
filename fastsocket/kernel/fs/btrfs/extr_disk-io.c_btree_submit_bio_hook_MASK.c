
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {int dummy; } ;
struct bio {int dummy; } ;
struct TYPE_4__ {TYPE_1__* root; } ;
struct TYPE_3__ {int fs_info; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct bio*,int) ;
 int FUNC_2 (TYPE_1__*,int,struct bio*,int,int ) ;
 int FUNC_3 (int ,struct inode*,int,struct bio*,int,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, int VAR_4, struct bio *VAR_5,
     int VAR_6, unsigned long VAR_7,
     u64 VAR_8)
{
 int VAR_9;

 if (!(VAR_4 & VAR_0)) {





  VAR_9 = FUNC_1(FUNC_0(VAR_3)->root->fs_info,
       VAR_5, 1);
  if (VAR_9)
   return VAR_9;
  return FUNC_2(FUNC_0(VAR_3)->root, VAR_4, VAR_5,
         VAR_6, 0);
 }





 return FUNC_3(FUNC_0(VAR_3)->root->fs_info,
       VAR_3, VAR_4, VAR_5, VAR_6, 0,
       VAR_8,
       VAR_2,
       VAR_1);
}
