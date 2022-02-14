
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_nsec; int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

void FUNC_3(void)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;

 extern void FUNC_0(int *VAR_9, int *VAR_10, int *VAR_11, int *VAR_12, int *VAR_13, int *VAR_14);




 VAR_3 = 1980;
 VAR_4 = VAR_5 = 1;
 VAR_6 = VAR_7 = VAR_8 = 0;
 FUNC_0 (&VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8);

 if ((VAR_3 += 1900) < 1970)
  VAR_3 += 100;
 VAR_2.tv_sec = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 VAR_2.tv_nsec = 0;


 FUNC_1(VAR_0, &VAR_1);

 FUNC_2();
}
