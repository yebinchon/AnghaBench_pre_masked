
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ board_type; } ;
struct netxen_adapter {TYPE_1__ ahw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct netxen_adapter*,int ,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_1(struct netxen_adapter *VAR_11)
{
 u32 VAR_12, VAR_13;

 VAR_12 = VAR_11->ahw.board_type;
 if ((VAR_12 == VAR_0) ||
  (VAR_12 == VAR_1)) {
  if (VAR_9 == VAR_2) {
   VAR_13 = VAR_2;
   FUNC_0(VAR_11, VAR_3, VAR_13);
  } else if (VAR_9 == VAR_7) {
   VAR_13 = VAR_7;
   FUNC_0(VAR_11, VAR_3, VAR_13);
  } else if (VAR_9 == VAR_5) {
   VAR_13 = VAR_5;
   FUNC_0(VAR_11, VAR_3, VAR_13);
  } else if (VAR_9 == VAR_6) {
   VAR_13 = VAR_6;
   FUNC_0(VAR_11, VAR_3, VAR_13);
  } else {
   VAR_13 = VAR_4;
   FUNC_0(VAR_11, VAR_3, VAR_13);
  }

  if ((VAR_10 != VAR_2) &&
   (VAR_10 != VAR_7) &&
   (VAR_10 != VAR_5) &&
   (VAR_10 != VAR_6)) {
   VAR_10 = VAR_4;
  }
  FUNC_0(VAR_11, VAR_8, VAR_10);
 }
}
