
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_extent {int dummy; } ;
struct ext4_ext_path {struct ext4_extent_header* p_hdr; } ;


 int FUNC_0 (int ) ;
 struct ext4_extent* FUNC_1 (struct ext4_extent_header*) ;
 int FUNC_2 (struct inode*,struct ext4_ext_path*,struct ext4_extent*) ;
 unsigned int FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0,
      struct ext4_ext_path *VAR_1,
      struct ext4_extent *VAR_2) {
 struct ext4_extent_header *VAR_3;
 unsigned int VAR_4;
 int VAR_5 = 0;
 int VAR_6 = 0;

 VAR_4 = FUNC_3(VAR_0);
 FUNC_0(VAR_1[VAR_4].p_hdr == ((void*)0));
 VAR_3 = VAR_1[VAR_4].p_hdr;

 if (VAR_2 > FUNC_1(VAR_3))
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2 - 1);

 if (!VAR_5)
  VAR_6 = FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_6;
}
