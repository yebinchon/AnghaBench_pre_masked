
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv_fh {int type; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;



__attribute__((used)) static int FUNC_1(struct bttv_fh *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->type) {
 case 128:
  VAR_3 = VAR_1;
  break;
 case 129:
  VAR_3 = VAR_0;
  break;
 default:
  FUNC_0();
 }
 return VAR_3;
}
