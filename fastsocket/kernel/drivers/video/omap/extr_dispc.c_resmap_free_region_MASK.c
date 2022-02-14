
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resmap {unsigned long start; } ;
struct TYPE_4__ {TYPE_1__* fbdev; struct resmap** res_map; } ;
struct TYPE_3__ {int dev; } ;


 unsigned long FUNC_0 (size_t) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int ,char*,int,unsigned long,size_t) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (struct resmap*,unsigned int) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2, size_t VAR_3)
{
 struct resmap *VAR_4;
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_2);
 VAR_4 = VAR_1.res_map[VAR_8];
 FUNC_1(VAR_1.fbdev->dev, "free mem type %d start %08lx size %d\n",
  VAR_8, VAR_2, VAR_3);
 VAR_5 = (VAR_2 - VAR_4->start) / VAR_0;
 VAR_6 = VAR_5 + FUNC_0(VAR_3) / VAR_0;
 for (VAR_7 = VAR_5; VAR_7 < VAR_6; VAR_7++)
  FUNC_2(VAR_4, VAR_7);
}
