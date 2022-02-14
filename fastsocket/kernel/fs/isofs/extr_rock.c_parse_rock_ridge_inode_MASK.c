
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iso_directory_record {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {int s_rock_offset; int s_rock; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct iso_directory_record*,struct inode*,int) ;

int FUNC_2(struct iso_directory_record *VAR_0, struct inode *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1, 0);





 if ((FUNC_0(VAR_1->i_sb)->s_rock_offset == -1)
     && (FUNC_0(VAR_1->i_sb)->s_rock == 2)) {
  VAR_2 = FUNC_1(VAR_0, VAR_1, 14);
 }
 return VAR_2;
}
