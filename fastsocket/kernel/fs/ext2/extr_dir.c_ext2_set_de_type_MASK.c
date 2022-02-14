
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {size_t i_mode; int i_sb; } ;
typedef size_t mode_t ;
struct TYPE_3__ {scalar_t__ file_type; } ;
typedef TYPE_1__ ext2_dirent ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static inline void FUNC_1(ext2_dirent *VAR_4, struct inode *VAR_5)
{
 mode_t VAR_6 = VAR_5->i_mode;
 if (FUNC_0(VAR_5->i_sb, VAR_0))
  VAR_4->file_type = VAR_3[(VAR_6 & VAR_1)>>VAR_2];
 else
  VAR_4->file_type = 0;
}
