
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {TYPE_1__* dev; int pipe; } ;
typedef int __u8 ;
struct TYPE_2__ {int speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct urb *VAR_1, __u8 VAR_2)
{
 __u8 VAR_3;
 unsigned long VAR_4 = 1;

 if (FUNC_1(VAR_1->pipe))
  return 0;

 if (FUNC_0(VAR_1->dev->speed) == VAR_0) {
  for (VAR_3 = 0; VAR_3 < (VAR_2 - 1); VAR_3++)
   VAR_4 *= 2;
  VAR_4 = VAR_4 * 125 / 1000;
 } else {
  VAR_4 = VAR_2;
 }

 return VAR_4;
}
