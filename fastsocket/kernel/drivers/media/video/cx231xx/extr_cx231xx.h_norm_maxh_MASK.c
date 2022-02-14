
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_range_640_480; } ;
struct cx231xx {int norm; TYPE_1__ board; } ;


 int VAR_0 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct cx231xx *VAR_1)
{
 if (VAR_1->board.max_range_640_480)
  return 480;
 else
  return (VAR_1->norm & VAR_0) ? 576 : 480;
}
