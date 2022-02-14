
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mapping; } ;
struct file_ra_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file_ra_state*,int ) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct file_ra_state*) ;
 struct file_ra_state* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct file_ra_state*,int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3)
{
 struct file_ra_state *VAR_4;
 unsigned long VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3->i_mapping);
 VAR_5 = (FUNC_1(VAR_3) - 1) >> VAR_2;

 FUNC_4(VAR_3->i_mapping, VAR_4, ((void*)0), 0, VAR_5);

 FUNC_2(VAR_4);

 return 0;
}
