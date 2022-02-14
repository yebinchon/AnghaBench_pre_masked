
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sir_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sir_dev*,int ,int) ;

__attribute__((used)) static inline int FUNC_1(struct sir_dev *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = ((VAR_2) ? 0x02 : 0x00) | ((VAR_3) ? 0x01 : 0x00);
 return FUNC_0(VAR_1, VAR_0, VAR_4);
}
