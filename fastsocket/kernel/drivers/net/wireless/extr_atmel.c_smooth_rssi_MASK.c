
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int level; int updated; } ;
struct TYPE_4__ {TYPE_1__ qual; } ;
struct atmel_private {int firmware_type; TYPE_2__ wstats; } ;



 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct atmel_private *VAR_2, u8 VAR_3)
{
 u8 VAR_4 = VAR_2->wstats.qual.level;
 u8 VAR_5 = 42;

 switch (VAR_2->firmware_type) {
 case 128:
  VAR_5 = 63;
  break;
 default:
  break;
 }

 VAR_3 = VAR_3 * 100 / VAR_5;
 if ((VAR_3 + VAR_4) % 2)
  VAR_2->wstats.qual.level = (VAR_3 + VAR_4) / 2 + 1;
 else
  VAR_2->wstats.qual.level = (VAR_3 + VAR_4) / 2;
 VAR_2->wstats.qual.updated |= VAR_1;
 VAR_2->wstats.qual.updated &= ~VAR_0;
}
