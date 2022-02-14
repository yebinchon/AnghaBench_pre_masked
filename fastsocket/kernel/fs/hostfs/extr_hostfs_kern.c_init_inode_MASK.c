
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; int * i_fop; int * i_op; } ;
struct dentry {int dummy; } ;
typedef int dev_t ;
struct TYPE_2__ {int * a_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_1 (struct dentry*,int ) ;
 int FUNC_2 (char*,int*,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct inode*,int ,int ) ;
 int FUNC_4 (char*) ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_14, struct dentry *VAR_15)
{
 char *VAR_16;
 int VAR_17, VAR_18 = -VAR_0;
 int VAR_19, VAR_20;
 dev_t VAR_21 = 0;

 if (VAR_15) {
  VAR_16 = FUNC_1(VAR_15, 0);
  if (VAR_16 == ((void*)0))
   goto out;
  VAR_17 = FUNC_2(VAR_16, &VAR_19, &VAR_20);

  VAR_21 = FUNC_0(VAR_19, VAR_20);
  FUNC_4(VAR_16);
 }
 else VAR_17 = VAR_1;

 VAR_18 = 0;
 if (VAR_17 == VAR_2)
  VAR_14->i_op = &VAR_13;
 else if (VAR_17 == VAR_1)
  VAR_14->i_op = &VAR_9;
 else VAR_14->i_op = &VAR_11;

 if (VAR_17 == VAR_1) VAR_14->i_fop = &VAR_8;
 else VAR_14->i_fop = &VAR_10;

 if (VAR_17 == VAR_2)
  VAR_14->i_mapping->a_ops = &VAR_12;
 else VAR_14->i_mapping->a_ops = &VAR_7;

 switch (VAR_17) {
 case 130:
  FUNC_3(VAR_14, VAR_4, VAR_21);
  break;
 case 131:
  FUNC_3(VAR_14, VAR_3, VAR_21);
  break;
 case 129:
  FUNC_3(VAR_14, VAR_5, 0);
  break;
 case 128:
  FUNC_3(VAR_14, VAR_6, 0);
  break;
 }
 out:
 return VAR_18;
}
