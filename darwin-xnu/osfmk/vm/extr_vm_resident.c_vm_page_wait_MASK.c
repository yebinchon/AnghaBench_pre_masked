
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ kern_return_t ;
typedef int event_t ;
typedef int boolean_t ;
struct TYPE_2__ {int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,...) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;

boolean_t
FUNC_10(
 int VAR_19 )
{







 kern_return_t VAR_20;
 int VAR_21 = 0;
 int VAR_22 = FUNC_4()->options & VAR_6;

 FUNC_5(&VAR_16);

 if (VAR_22 && VAR_11) {
  FUNC_6(&VAR_16);
  return VAR_7;
 }

 if (VAR_11 >= VAR_12) {
  FUNC_6(&VAR_16);
  return VAR_7;
 }

 if (VAR_22) {
  if (VAR_14++ == 0)
   VAR_21 = 1;
  VAR_20 = FUNC_1((event_t)&VAR_14, VAR_19);
 } else {
  if (VAR_13++ == 0)
   VAR_21 = 1;
  VAR_20 = FUNC_1((event_t)&VAR_11,
       VAR_19);
 }
 FUNC_6(&VAR_16);
 FUNC_2(VAR_9++);

 if (VAR_21)
  FUNC_9((event_t)&VAR_13);

 if (VAR_20 == VAR_5) {
  FUNC_0(VAR_18, VAR_8, VAR_1,
          VAR_14,
          VAR_13,



          0,

          0);
  VAR_20 = FUNC_8(VAR_4);
  FUNC_0(VAR_18,
       VAR_8, VAR_0, 0, 0, 0, 0);
 }

 return (VAR_20 == VAR_3);
}
