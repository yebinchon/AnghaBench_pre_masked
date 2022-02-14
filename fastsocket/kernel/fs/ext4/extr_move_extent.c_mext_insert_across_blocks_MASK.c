
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {scalar_t__ ee_block; scalar_t__ ee_len; } ;
struct ext4_ext_path {int dummy; } ;
typedef int handle_t ;
typedef scalar_t__ ext4_lblk_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_2 (int *,struct inode*,struct ext4_ext_path*,struct ext4_extent*,int ) ;
 int FUNC_3 (struct ext4_extent*) ;
 int FUNC_4 (struct ext4_extent*,int ) ;
 int FUNC_5 (struct inode*,scalar_t__,struct ext4_ext_path**) ;
 int FUNC_6 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8(handle_t *VAR_1, struct inode *VAR_2,
  struct ext4_extent *VAR_3, struct ext4_extent *VAR_4,
  struct ext4_extent *VAR_5, struct ext4_extent *VAR_6,
  struct ext4_extent *VAR_7)
{
 struct ext4_ext_path *VAR_8 = ((void*)0);
 ext4_lblk_t VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_5->ee_len && VAR_6->ee_len && VAR_7->ee_len) {
  if (VAR_3 == VAR_4) {





   VAR_11 = 1;
  } else {





   VAR_4->ee_block = VAR_7->ee_block;
   VAR_4->ee_len = VAR_7->ee_len;
   FUNC_4(VAR_4, FUNC_3(VAR_7));
  }

  VAR_3->ee_len = VAR_5->ee_len;
  VAR_10 = 1;

 } else if (VAR_5->ee_len && VAR_6->ee_len &&
     !VAR_7->ee_len && VAR_3 == VAR_4) {





  VAR_3->ee_len = VAR_5->ee_len;
  VAR_10 = 1;

 } else if (!VAR_5->ee_len && VAR_6->ee_len &&
     VAR_7->ee_len && VAR_3 == VAR_4) {





  VAR_4->ee_block = VAR_7->ee_block;
  VAR_4->ee_len = VAR_7->ee_len;
  FUNC_4(VAR_4, FUNC_3(VAR_7));





  if (VAR_6->ee_block)
   VAR_9 = FUNC_7(VAR_6->ee_block);

  VAR_10 = 1;
 } else {
  FUNC_0("ext4 move extent: Unexpected insert case\n");
  return -VAR_0;
 }

 if (VAR_10) {
  VAR_12 = FUNC_5(VAR_2, VAR_9, &VAR_8);
  if (VAR_12)
   goto out;

  if (FUNC_2(VAR_1, VAR_2,
     VAR_8, VAR_6, 0))
   goto out;
 }

 if (VAR_11) {
  VAR_12 = FUNC_5(VAR_2,
    FUNC_7(VAR_7->ee_block) - 1, &VAR_8);
  if (VAR_12)
   goto out;

  if (FUNC_2(VAR_1, VAR_2,
        VAR_8, VAR_7, 0))
   goto out;
 }
out:
 if (VAR_8) {
  FUNC_1(VAR_8);
  FUNC_6(VAR_8);
 }

 return VAR_12;

}
