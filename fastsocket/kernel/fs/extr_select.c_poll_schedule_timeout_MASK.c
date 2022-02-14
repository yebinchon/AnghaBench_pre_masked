
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_wqueues {int triggered; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct poll_wqueues *VAR_3, int VAR_4,
     ktime_t *VAR_5, unsigned long VAR_6)
{
 int VAR_7 = -VAR_0;

 FUNC_2(VAR_4);
 if (!VAR_3->triggered)
  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_1);
 FUNC_0(VAR_2);
 FUNC_3(VAR_3->triggered, 0);

 return VAR_7;
}
