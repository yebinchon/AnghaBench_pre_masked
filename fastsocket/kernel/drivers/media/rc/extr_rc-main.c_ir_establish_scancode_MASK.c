
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rc_map_table {int dummy; } ;
struct rc_map {unsigned int len; unsigned int size; TYPE_1__* scan; } ;
struct rc_dev {int scanmask; } ;
struct TYPE_3__ {unsigned int scancode; int keycode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rc_map*,int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct rc_dev *VAR_2,
       struct rc_map *VAR_3,
       unsigned int VAR_4,
       bool VAR_5)
{
 unsigned int VAR_6;
 if (VAR_2->scanmask)
  VAR_4 &= VAR_2->scanmask;


 for (VAR_6 = 0; VAR_6 < VAR_3->len; VAR_6++) {
  if (VAR_3->scan[VAR_6].scancode == VAR_4)
   return VAR_6;


  if (VAR_3->scan[VAR_6].scancode >= VAR_4)
   break;
 }


 if (VAR_3->size == VAR_3->len) {
  if (!VAR_5 || FUNC_0(VAR_3, VAR_0))
   return -1U;
 }


 if (VAR_6 < VAR_3->len)
  FUNC_1(&VAR_3->scan[VAR_6 + 1], &VAR_3->scan[VAR_6],
   (VAR_3->len - VAR_6) * sizeof(struct rc_map_table));
 VAR_3->scan[VAR_6].scancode = VAR_4;
 VAR_3->scan[VAR_6].keycode = VAR_1;
 VAR_3->len++;

 return VAR_6;
}
