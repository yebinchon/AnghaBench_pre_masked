
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext3_dir_entry_2 {int rec_len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct ext3_dir_entry_2 *
FUNC_1(struct ext3_dir_entry_2 *VAR_0)
{
 return (struct ext3_dir_entry_2 *)((char *)VAR_0 +
  FUNC_0(VAR_0->rec_len));
}
