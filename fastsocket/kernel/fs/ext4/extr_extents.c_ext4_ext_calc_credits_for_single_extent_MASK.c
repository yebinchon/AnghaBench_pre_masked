
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_ext_path {TYPE_1__* p_hdr; } ;
struct TYPE_2__ {int eh_max; int eh_entries; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct inode *VAR_0, int VAR_1,
      struct ext4_ext_path *VAR_2)
{
 if (VAR_2) {
  int VAR_3 = FUNC_2(VAR_0);
  int VAR_4 = 0;


  if (FUNC_3(VAR_2[VAR_3].p_hdr->eh_entries)
    < FUNC_3(VAR_2[VAR_3].p_hdr->eh_max)) {
   VAR_4 = 2 + FUNC_0(VAR_0->i_sb);
   return VAR_4;
  }
 }

 return FUNC_1(VAR_0, VAR_1);
}
