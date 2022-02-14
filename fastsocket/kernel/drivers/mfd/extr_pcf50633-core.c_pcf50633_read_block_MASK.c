
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pcf50633 {int lock; } ;


 int FUNC_0 (struct pcf50633*,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct pcf50633 *VAR_0, u8 VAR_1,
     int VAR_2, u8 *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0->lock);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_0->lock);

 return VAR_4;
}
