
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bttv*,char*) ;
 unsigned int VAR_3 ;
 struct bttv** VAR_4 ;
 int FUNC_1 (unsigned long,unsigned long) ;

int FUNC_2(unsigned int VAR_5, unsigned long VAR_6, unsigned long VAR_7)
{
 struct bttv *VAR_8;

 if (VAR_5 >= VAR_3) {
  return -VAR_0;
 }

 VAR_8 = VAR_4[VAR_5];
 if (!VAR_8)
  return -VAR_1;



 FUNC_1(VAR_6,VAR_7);
 if (VAR_2)
  FUNC_0(VAR_8,"extern write");
 return 0;
}
