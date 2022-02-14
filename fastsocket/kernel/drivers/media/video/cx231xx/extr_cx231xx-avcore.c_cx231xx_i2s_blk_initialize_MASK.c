
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx231xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int,int*,int) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int,int,int) ;

int FUNC_2(struct cx231xx *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5;

 VAR_4 = FUNC_0(VAR_3, VAR_2,
           VAR_0, 1, &VAR_5, 1);

 VAR_5 |= 0x80;
 VAR_4 = FUNC_1(VAR_3, VAR_2,
     VAR_0, 1, VAR_5, 1);

 VAR_4 = FUNC_1(VAR_3, VAR_2,
     VAR_1, 1, 0x00, 1);

 return VAR_4;
}
