
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t ring_head; size_t ring_tail; TYPE_1__* ring; } ;
struct ar9170 {TYPE_2__ debug; } ;
typedef int ssize_t ;
struct TYPE_3__ {int value; int reg; } ;


 int FUNC_0 (char*,int ,size_t,char*,int ,int ) ;
 size_t VAR_0 ;

__attribute__((used)) static char *FUNC_1(struct ar9170 *VAR_1, char *VAR_2,
            size_t VAR_3, ssize_t *VAR_4)
{
 int VAR_5 = 0;

 while (VAR_1->debug.ring_head != VAR_1->debug.ring_tail) {
  FUNC_0(VAR_2, *VAR_4, VAR_3, "%.8x = %.8x\n",
      VAR_1->debug.ring[VAR_1->debug.ring_head].reg,
      VAR_1->debug.ring[VAR_1->debug.ring_head].value);

  VAR_1->debug.ring_head++;
  VAR_1->debug.ring_head %= VAR_0;

  if (VAR_5++ == 64)
   break;
 }
 VAR_1->debug.ring_head = VAR_1->debug.ring_tail;
 return VAR_2;
}
