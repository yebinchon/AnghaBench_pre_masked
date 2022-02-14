
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct idt77252_dev {int cmd_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct idt77252_dev*) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static u8
FUNC_6(void *VAR_3, unsigned long VAR_4)
{
 struct idt77252_dev *VAR_5 = VAR_3;
 unsigned long VAR_6;
 u8 VAR_7;

 if (!VAR_5) {
  FUNC_0("Error: No such device.\n");
  return -1;
 }

 FUNC_2(&VAR_5->cmd_lock, VAR_6);
 FUNC_5(VAR_0 + VAR_4, VAR_1);
 FUNC_4(VAR_5);
 VAR_7 = FUNC_1(VAR_2);
 FUNC_3(&VAR_5->cmd_lock, VAR_6);
 return VAR_7;
}
