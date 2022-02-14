
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct cx88_core *VAR_2,
       int VAR_3, int VAR_4)
{
 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_1, 0xcf7);
  FUNC_1(50);
  FUNC_0(VAR_1, 0xef5);
  FUNC_1(50);
  FUNC_0(VAR_1, 0xcf7);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
