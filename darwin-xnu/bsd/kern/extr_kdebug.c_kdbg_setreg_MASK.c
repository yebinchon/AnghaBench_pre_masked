
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int value1; int value2; int value4; int value3; } ;
typedef TYPE_1__ kd_regtype ;
struct TYPE_5__ {unsigned int kdebug_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;


 int const VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_0 (int ,int ,int ) ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

int
FUNC_1(kd_regtype * VAR_16)
{
 int VAR_17=0;
 unsigned int VAR_18, VAR_19, VAR_20;
 switch (VAR_16->type) {

 case 132 :
  VAR_18 = (VAR_16->value1 & 0xff);
  VAR_19 = (VAR_16->value2 & 0xff);
  VAR_10 = (VAR_18<<24);
  VAR_11 = (VAR_19<<24);
  VAR_9.kdebug_flags &= (unsigned int)~VAR_2;
  VAR_9.kdebug_flags &= ~128;
  VAR_9.kdebug_flags |= (VAR_5 | 132);
  FUNC_0(VAR_7, 0, VAR_8);
  break;
 case 130 :
  VAR_18 = (VAR_16->value1 & 0xff);
  VAR_19 = (VAR_16->value2 & 0xff);
  VAR_20 = VAR_19 + 1;
  VAR_10 = ((VAR_18<<24) | (VAR_19 << 16));
  VAR_11 = ((VAR_18<<24) | (VAR_20 << 16));
  VAR_9.kdebug_flags &= (unsigned int)~VAR_2;
  VAR_9.kdebug_flags &= ~128;
  VAR_9.kdebug_flags |= (VAR_5 | 130);
  FUNC_0(VAR_7, 0, VAR_8);
  break;
 case 131 :
  VAR_10 = (VAR_16->value1);
  VAR_11 = (VAR_16->value2);
  VAR_9.kdebug_flags &= (unsigned int)~VAR_2;
  VAR_9.kdebug_flags &= ~128;
  VAR_9.kdebug_flags |= (VAR_5 | 131);
  FUNC_0(VAR_7, 0, VAR_8);
  break;
 case 128:
  VAR_12 = (VAR_16->value1);
  VAR_13 = (VAR_16->value2);
  VAR_14 = (VAR_16->value3);
  VAR_15 = (VAR_16->value4);
  VAR_9.kdebug_flags &= (unsigned int)~VAR_2;
  VAR_9.kdebug_flags &= ~VAR_5;
  VAR_9.kdebug_flags |= 128;
  FUNC_0(VAR_7, 0, VAR_8);
  break;
 case 129 :
  VAR_9.kdebug_flags &= (unsigned int)~VAR_2;

  if ( (VAR_9.kdebug_flags & (VAR_5 | 128 |
         VAR_3 | VAR_4 |
         VAR_6)) )
   FUNC_0(VAR_7, 0, VAR_8);
  else
   FUNC_0(VAR_7, 0, VAR_1);

  VAR_10 = 0;
  VAR_11 = 0;
  break;
 default :
  VAR_17 = VAR_0;
  break;
 }
 return(VAR_17);
}
