
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; int i_sb; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 () ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(struct inode *VAR_5)
{
 switch (FUNC_1(VAR_5)) {
 case 129:
  if (FUNC_2(VAR_5->i_sb, VAR_0))
   VAR_5->i_mapping->a_ops = &VAR_1;
  else
   VAR_5->i_mapping->a_ops = &VAR_3;
  break;
 case 128:
  if (FUNC_2(VAR_5->i_sb, VAR_0))
   VAR_5->i_mapping->a_ops = &VAR_1;
  else
   VAR_5->i_mapping->a_ops = &VAR_4;
  break;
 case 130:
  VAR_5->i_mapping->a_ops = &VAR_2;
  break;
 default:
  FUNC_0();
 }
}
