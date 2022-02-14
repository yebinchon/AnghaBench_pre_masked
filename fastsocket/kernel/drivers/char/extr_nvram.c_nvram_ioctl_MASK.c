
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6,
     unsigned int VAR_7, unsigned long VAR_8)
{
 int VAR_9;

 switch (VAR_7) {

 case 129:

  if (!FUNC_2(VAR_0))
   return -VAR_1;

  FUNC_3(&VAR_4);

  for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9)
   FUNC_1(0, VAR_9);
  FUNC_0();

  FUNC_4(&VAR_4);
  return 0;

 case 128:


  if (!FUNC_2(VAR_0))
   return -VAR_1;

  FUNC_3(&VAR_4);
  FUNC_0();
  FUNC_4(&VAR_4);
  return 0;

 default:
  return -VAR_2;
 }
}
