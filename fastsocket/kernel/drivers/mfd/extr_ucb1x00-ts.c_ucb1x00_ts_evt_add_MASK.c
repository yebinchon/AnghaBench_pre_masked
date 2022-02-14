
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ucb1x00_ts {struct input_dev* idev; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int ) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static inline void FUNC_2(struct ucb1x00_ts *VAR_3, u16 VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct input_dev *VAR_7 = VAR_3->idev;

 FUNC_0(VAR_7, VAR_1, VAR_5);
 FUNC_0(VAR_7, VAR_2, VAR_6);
 FUNC_0(VAR_7, VAR_0, VAR_4);
 FUNC_1(VAR_7);
}
