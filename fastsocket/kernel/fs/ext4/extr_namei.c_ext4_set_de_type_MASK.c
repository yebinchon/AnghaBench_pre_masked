
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t umode_t ;
struct super_block {int dummy; } ;
struct ext4_dir_entry_2 {int file_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct super_block*,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static inline void FUNC_1(struct super_block *VAR_4,
    struct ext4_dir_entry_2 *VAR_5,
    umode_t VAR_6) {
 if (FUNC_0(VAR_4, VAR_0))
  VAR_5->file_type = VAR_3[(VAR_6 & VAR_1)>>VAR_2];
}
