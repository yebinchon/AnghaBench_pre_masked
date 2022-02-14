
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwblk_info {struct hwblk* hwblks; } ;
struct hwblk {int* cnt; int area; } ;


 int FUNC_0 (struct hwblk_info*,int ,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct hwblk_info *VAR_0, int VAR_1,
     int VAR_2, int VAR_3, int VAR_4)
{
 struct hwblk *VAR_5 = VAR_0->hwblks + VAR_1;

 VAR_5->cnt[VAR_2] += VAR_3;
 if (VAR_5->cnt[VAR_2] == VAR_4)
  FUNC_0(VAR_0, VAR_5->area, VAR_2, VAR_3, VAR_4);

 return VAR_5->cnt[VAR_2];
}
