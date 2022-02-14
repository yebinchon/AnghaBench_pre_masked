
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int boardnr; } ;
struct cx8802_driver {struct cx88_core* core; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct cx8802_driver *VAR_2)
{
 struct cx88_core *VAR_3 = VAR_2->core;
 int VAR_4 = 0;

 switch (VAR_3->boardnr) {
 case 128:






  FUNC_1(VAR_1, 0x00000080);
  FUNC_2(1000);
  FUNC_0(VAR_1, 0x00000080);
  FUNC_2(50);
  FUNC_1(VAR_1, 0x00000080);
  FUNC_2(1000);

  FUNC_1(VAR_1, 0x00000004);
  FUNC_2(1000);
  break;
 default:
  VAR_4 = -VAR_0;
 }
 return VAR_4;
}
