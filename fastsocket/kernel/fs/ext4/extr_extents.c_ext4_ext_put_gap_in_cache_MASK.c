
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef scalar_t__ ext4_lblk_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_2 (struct ext4_extent*) ;
 scalar_t__ FUNC_3 (struct ext4_ext_path*) ;
 int FUNC_4 (struct inode*,scalar_t__,unsigned long,int ) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct inode *VAR_1, struct ext4_ext_path *VAR_2,
    ext4_lblk_t VAR_3)
{
 int VAR_4 = FUNC_6(VAR_1);
 unsigned long VAR_5;
 ext4_lblk_t VAR_6;
 struct ext4_extent *VAR_7;

 VAR_7 = VAR_2[VAR_4].p_ext;
 if (VAR_7 == ((void*)0)) {

  VAR_6 = 0;
  VAR_5 = VAR_0;
  FUNC_5("cache gap(whole file):");
 } else if (VAR_3 < FUNC_7(VAR_7->ee_block)) {
  VAR_6 = VAR_3;
  VAR_5 = FUNC_7(VAR_7->ee_block) - VAR_3;
  FUNC_5("cache gap(before): %u [%u:%u]",
    VAR_3,
    FUNC_7(VAR_7->ee_block),
     FUNC_2(VAR_7));
 } else if (VAR_3 >= FUNC_7(VAR_7->ee_block)
   + FUNC_2(VAR_7)) {
  ext4_lblk_t VAR_8;
  VAR_6 = FUNC_7(VAR_7->ee_block)
   + FUNC_2(VAR_7);

  VAR_8 = FUNC_3(VAR_2);
  FUNC_5("cache gap(after): [%u:%u] %u",
    FUNC_7(VAR_7->ee_block),
    FUNC_2(VAR_7),
    VAR_3);
  FUNC_1(VAR_8 == VAR_6);
  VAR_5 = VAR_8 - VAR_6;
 } else {
  VAR_6 = VAR_5 = 0;
  FUNC_0();
 }

 FUNC_5(" -> %u:%lu\n", VAR_6, VAR_5);
 FUNC_4(VAR_1, VAR_6, VAR_5, 0);
}
