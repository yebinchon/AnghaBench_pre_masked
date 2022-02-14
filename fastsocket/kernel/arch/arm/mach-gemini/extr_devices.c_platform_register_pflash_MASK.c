
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtd_partition {int dummy; } ;
struct TYPE_4__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_3__ {int width; unsigned int nr_parts; struct mtd_partition* parts; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 TYPE_2__ VAR_10 ;
 int VAR_11 ;
 TYPE_1__ VAR_12 ;
 int FUNC_3 (int *) ;

int FUNC_4(unsigned int VAR_13, struct mtd_partition *VAR_14,
        unsigned int VAR_15)
{
 unsigned int VAR_16;

 VAR_16 = FUNC_1(FUNC_0(VAR_4) + VAR_6);

 if ((VAR_16 & VAR_1) != VAR_2)
  return -VAR_0;

 if (VAR_16 & VAR_3)
  VAR_12.width = 2;
 else
  VAR_12.width = 1;


 VAR_16 = FUNC_1(FUNC_0(VAR_4) + VAR_5);
 VAR_16 &= ~VAR_8;
 VAR_16 |= VAR_9 | VAR_7;
 FUNC_2(VAR_16, FUNC_0(VAR_4) + VAR_5);

 VAR_10.end = VAR_10.start + VAR_13 - 1;

 VAR_12.parts = VAR_14;
 VAR_12.nr_parts = VAR_15;

 return FUNC_3(&VAR_11);
}
