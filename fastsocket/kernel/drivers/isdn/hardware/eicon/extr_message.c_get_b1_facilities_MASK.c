
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int word ;
typedef size_t byte ;
struct TYPE_7__ {long requested_options_conn; long requested_options; TYPE_2__* adapter; TYPE_1__* appl; } ;
struct TYPE_6__ {long* requested_options_table; int manufacturer_features; } ;
struct TYPE_5__ {int Id; } ;
typedef TYPE_3__ PLCI ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int* VAR_7 ;

__attribute__((used)) static word FUNC_0 (PLCI * VAR_8, byte VAR_9)
{
  word VAR_10;

  VAR_10 = VAR_7[VAR_9];
  if ((VAR_9 == 9) || (VAR_9 == 20) || (VAR_9 == 25))
  {

    if (!(((VAR_8->requested_options_conn | VAR_8->requested_options) & (1L << VAR_6))
       || (VAR_8->appl && (VAR_8->adapter->requested_options_table[VAR_8->appl->Id-1] & (1L << VAR_6)))))

    {
      if (VAR_8->adapter->manufacturer_features & VAR_3)
        VAR_10 |= VAR_1;
      if (VAR_8->adapter->manufacturer_features & VAR_2)
        VAR_10 |= VAR_0;
    }
  }
  if ((VAR_9 == 17) || (VAR_9 == 18))
  {
    if (VAR_8->adapter->manufacturer_features & (VAR_4 | VAR_5))
      VAR_10 |= VAR_1 | VAR_0;
  }





  return (VAR_10);
}
