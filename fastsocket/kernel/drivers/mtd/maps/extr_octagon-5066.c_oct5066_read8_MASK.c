
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct map_info {int dummy; } ;
struct TYPE_3__ {int * x; } ;
typedef TYPE_1__ map_word ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct map_info*,unsigned long) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static map_word FUNC_4(struct map_info *VAR_3, unsigned long VAR_4)
{
 map_word VAR_5;
 FUNC_2(&VAR_2);
 FUNC_0(VAR_3, VAR_4);
 VAR_5.x[0] = FUNC_1(VAR_1 + (VAR_4 & VAR_0));
 FUNC_3(&VAR_2);
 return VAR_5;
}
