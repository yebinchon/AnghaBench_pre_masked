
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int,int ,int) ;
 int FUNC_1 (int,int ,int,int ,int ) ;
 int * VAR_4 ;
 int * VAR_5 ;

int FUNC_2(int VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_7 < 0 || VAR_7 > VAR_3) {
  return -VAR_0;
 }

 if (VAR_7 == VAR_3) {
  return 1;
 }

 VAR_8 = FUNC_1(VAR_6, VAR_4[VAR_7], VAR_1|VAR_2,
     VAR_5[VAR_7], 0);
 FUNC_0(VAR_8 < 0, "unable to request_irq %d for %s (rc %d)\n",
  VAR_6, VAR_5[VAR_7], VAR_8);

 return VAR_8;
}
