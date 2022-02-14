
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdo24m {int mode; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct tdo24m*,int ) ;

__attribute__((used)) static int FUNC_1(struct tdo24m *VAR_6, int VAR_7)
{
 switch (VAR_7) {
 case 128:
  FUNC_0(VAR_6, VAR_4);
  FUNC_0(VAR_6, VAR_1);
  FUNC_0(VAR_6, VAR_5);
  break;
 case 129:
  FUNC_0(VAR_6, VAR_2);
  FUNC_0(VAR_6, VAR_1);
  FUNC_0(VAR_6, VAR_3);
  break;
 default:
  return -VAR_0;
 }

 VAR_6->mode = VAR_7;
 return 0;
}
