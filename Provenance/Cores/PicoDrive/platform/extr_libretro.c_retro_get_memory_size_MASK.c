
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ frame_count; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {size_t size; int* data; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 TYPE_2__ VAR_4 ;

size_t FUNC_0(unsigned VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 if (VAR_5 != VAR_3)
  return 0;

 if (VAR_2 & VAR_0)

  return 0x2000;

 if (VAR_1.m.frame_count == 0)
  return VAR_4.size;



    for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_4.size; VAR_6++) {
  VAR_7 |= VAR_4.data[VAR_6];
    }

 return (VAR_7 != 0) ? VAR_4.size : 0;
}
