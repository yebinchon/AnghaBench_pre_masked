
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {TYPE_1__* p_hdr; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {scalar_t__ eh_entries; scalar_t__ eh_max; } ;


 scalar_t__ FUNC_0 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_1 (struct ext4_ext_path*) ;
 int FUNC_2 (struct ext4_ext_path*) ;
 int FUNC_3 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_4 (struct inode*,int ,struct ext4_ext_path*) ;
 int FUNC_5 (int *,struct inode*,unsigned int,struct ext4_ext_path*,struct ext4_extent*) ;
 int FUNC_6 (int *,struct inode*,unsigned int,struct ext4_ext_path*,struct ext4_extent*,int) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(handle_t *VAR_0, struct inode *VAR_1,
        unsigned int VAR_2,
        struct ext4_ext_path *VAR_3,
        struct ext4_extent *VAR_4)
{
 struct ext4_ext_path *VAR_5;
 int VAR_6, VAR_7, VAR_8 = 0;

repeat:
 VAR_7 = VAR_6 = FUNC_7(VAR_1);


 VAR_5 = VAR_3 + VAR_6;
 while (VAR_7 > 0 && !FUNC_0(VAR_5)) {
  VAR_7--;
  VAR_5--;
 }



 if (FUNC_0(VAR_5)) {


  VAR_8 = FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);
  if (VAR_8)
   goto out;


  FUNC_3(VAR_3);
  VAR_3 = FUNC_4(VAR_1,
        (ext4_lblk_t)FUNC_8(VAR_4->ee_block),
        VAR_3);
  if (FUNC_1(VAR_3))
   VAR_8 = FUNC_2(VAR_3);
 } else {

  VAR_8 = FUNC_5(VAR_0, VAR_1, VAR_2,
         VAR_3, VAR_4);
  if (VAR_8)
   goto out;


  FUNC_3(VAR_3);
  VAR_3 = FUNC_4(VAR_1,
       (ext4_lblk_t)FUNC_8(VAR_4->ee_block),
        VAR_3);
  if (FUNC_1(VAR_3)) {
   VAR_8 = FUNC_2(VAR_3);
   goto out;
  }





  VAR_6 = FUNC_7(VAR_1);
  if (VAR_3[VAR_6].p_hdr->eh_entries == VAR_3[VAR_6].p_hdr->eh_max) {

   goto repeat;
  }
 }

out:
 return VAR_8;
}
