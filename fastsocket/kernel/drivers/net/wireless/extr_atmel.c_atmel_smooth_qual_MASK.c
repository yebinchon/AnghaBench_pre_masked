
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qual; int level; int updated; } ;
struct TYPE_4__ {TYPE_1__ qual; } ;
struct atmel_private {unsigned long last_qual; int beacons_this_sec; int beacon_period; TYPE_2__ wstats; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;

__attribute__((used)) static void FUNC_0(struct atmel_private *VAR_4)
{
 unsigned long VAR_5 = (VAR_3 - VAR_4->last_qual) / VAR_0;
 while (VAR_5--) {
  VAR_4->last_qual += VAR_0;
  VAR_4->wstats.qual.qual = VAR_4->wstats.qual.qual / 2;
  VAR_4->wstats.qual.qual +=
   VAR_4->beacons_this_sec * VAR_4->beacon_period * (VAR_4->wstats.qual.level + 100) / 4000;
  VAR_4->beacons_this_sec = 0;
 }
 VAR_4->wstats.qual.updated |= VAR_2;
 VAR_4->wstats.qual.updated &= ~VAR_1;
}
