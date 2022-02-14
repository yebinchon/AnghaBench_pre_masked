
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct inode {int i_ino; } ;
struct hfs_find_data {TYPE_2__* key; } ;
struct TYPE_6__ {int flags; scalar_t__ cached_blocks; scalar_t__ cached_start; int cached_extents; } ;
struct TYPE_4__ {int FABN; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct hfs_find_data*,int ,int ,int ,int ) ;
 int FUNC_3 (struct inode*,struct hfs_find_data*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static inline int FUNC_6(struct hfs_find_data *VAR_4, struct inode *VAR_5, u32 VAR_6)
{
 int VAR_7;

 if (FUNC_0(VAR_5)->flags & VAR_2)
  FUNC_3(VAR_5, VAR_4);

 VAR_7 = FUNC_2(VAR_4, FUNC_0(VAR_5)->cached_extents, VAR_5->i_ino,
        VAR_6, FUNC_1(VAR_5) ? VAR_1 : VAR_0);
 if (!VAR_7) {
  FUNC_0(VAR_5)->cached_start = FUNC_4(VAR_4->key->ext.FABN);
  FUNC_0(VAR_5)->cached_blocks = FUNC_5(FUNC_0(VAR_5)->cached_extents);
 } else {
  FUNC_0(VAR_5)->cached_start = FUNC_0(VAR_5)->cached_blocks = 0;
  FUNC_0(VAR_5)->flags &= ~(VAR_2|VAR_3);
 }
 return VAR_7;
}
