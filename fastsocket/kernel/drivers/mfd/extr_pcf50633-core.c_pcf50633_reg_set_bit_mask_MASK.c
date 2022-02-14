
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int lock; } ;


 int FUNC_0 (struct pcf50633*,int ,int,int *) ;
 int FUNC_1 (struct pcf50633*,int ,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct pcf50633 *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 VAR_3 &= VAR_2;

 FUNC_2(&VAR_0->lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, 1, &VAR_5);
 if (VAR_4 < 0)
  goto out;

 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;
 VAR_4 = FUNC_1(VAR_0, VAR_1, 1, &VAR_5);

out:
 FUNC_3(&VAR_0->lock);

 return VAR_4;
}
