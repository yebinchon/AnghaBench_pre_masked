
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*,int ,int ,int,int *,int) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int,int ,int) ;

int FUNC_2(struct cx231xx *VAR_0, u8 VAR_1,
     u16 VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, 2, &VAR_5, 4);

 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 &= ~VAR_3;
 VAR_5 |= VAR_4;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, 2, VAR_5, 4);

 return VAR_6;
}
