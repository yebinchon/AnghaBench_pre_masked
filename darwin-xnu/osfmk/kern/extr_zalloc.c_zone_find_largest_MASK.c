
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
struct TYPE_4__ {scalar_t__ cur_size; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_2 ;

zone_t
FUNC_2(void)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 zone_t VAR_5;
 zone_t VAR_6;

 FUNC_0(&VAR_0);
 VAR_4 = VAR_1;
 FUNC_1(&VAR_0);

 VAR_6 = &(VAR_2[0]);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  VAR_5 = &(VAR_2[VAR_3]);
  if (VAR_5->cur_size > VAR_6->cur_size) {
   VAR_6 = VAR_5;
  }
 }
 return VAR_6;
}
