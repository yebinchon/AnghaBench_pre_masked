
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
typedef int ext4_group_t ;
struct TYPE_2__ {int s_gdb_count; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,int,int) ;

int FUNC_4(struct inode *VAR_0, int VAR_1, int VAR_2)
{
 ext4_group_t VAR_3, VAR_4 = FUNC_2(VAR_0->i_sb);
 int VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2);

 VAR_7 = VAR_6;





 VAR_3 = VAR_6;
 if (VAR_2)
  VAR_3 += 1;
 else
  VAR_3 += VAR_1;

 VAR_5 = VAR_3;
 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;
 if (VAR_3 > FUNC_1(VAR_0->i_sb)->s_gdb_count)
  VAR_5 = FUNC_1(VAR_0->i_sb)->s_gdb_count;


 VAR_7 += VAR_3 + VAR_5;


 VAR_7 += FUNC_0(VAR_0->i_sb);

 return VAR_7;
}
