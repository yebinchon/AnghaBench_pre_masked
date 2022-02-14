
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_mode; scalar_t__ private_data; } ;
struct TYPE_2__ {int * current_node; } ;
typedef TYPE_1__ DATA ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*,struct file*,unsigned int,unsigned long) ;
 int FUNC_1 (struct inode*,struct file*,unsigned int,unsigned long,int *) ;
 int * VAR_5 ;

__attribute__((used)) static int FUNC_2(struct inode * VAR_6, struct file * VAR_7,
     unsigned int VAR_8, unsigned long VAR_9)
{
 DATA *VAR_10 = (DATA *) VAR_7->private_data;

 switch (VAR_8) {
 case 138:
 case 135:
  if ((VAR_7->f_mode & VAR_3) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_5);

 case 130:
 case 129:
  if ((VAR_7->f_mode & VAR_4) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_5);

 case 136:
 case 142:
 case 137:
 case 134:
  if ((VAR_7->f_mode & VAR_3) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9,
         VAR_10->current_node);

 case 128:
 case 140:
 case 139:
 case 141:
 case 131:
 case 132:
 case 133:
  if ((VAR_7->f_mode & VAR_3) == 0)
   return -VAR_2;
  return FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9, ((void*)0));

 case 148:
 case 144:
 case 145:
 case 146:
 case 147:
  if ((VAR_7->f_mode & VAR_3) == 0)
   return -VAR_0;
  return FUNC_0(VAR_6,VAR_7,VAR_8,VAR_9);

 case 143:
  if ((VAR_7->f_mode & VAR_4) == 0)
   return -VAR_0;
  return FUNC_0(VAR_6,VAR_7,VAR_8,VAR_9);

 default:
  return -VAR_1;
 };
}
