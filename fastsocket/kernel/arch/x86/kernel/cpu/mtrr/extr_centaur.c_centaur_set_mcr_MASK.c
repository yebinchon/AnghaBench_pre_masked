
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ mtrr_type ;
struct TYPE_2__ {unsigned long high; unsigned long low; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__,unsigned long,unsigned long) ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_5, unsigned long VAR_6,
  unsigned long VAR_7, mtrr_type VAR_8)
{
 unsigned long VAR_9, VAR_10;

 if (VAR_7 == 0) {

  VAR_10 = VAR_9 = 0;
 } else {
  VAR_10 = VAR_6 << VAR_2;
  if (VAR_4 == 0) {

   VAR_9 = -VAR_7 << VAR_2 | 0x1f;
  } else {
   if (VAR_8 == VAR_1)
    VAR_9 = -VAR_7 << VAR_2 | 0x02;
   else
    VAR_9 = -VAR_7 << VAR_2 | 0x09;
  }
 }
 VAR_3[VAR_5].high = VAR_10;
 VAR_3[VAR_5].low = VAR_9;
 FUNC_0(VAR_0 + VAR_5, VAR_9, VAR_10);
}
