
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {int dummy; } ;
struct TYPE_3__ {scalar_t__ kbdmode; } ;


 unsigned char FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vc_data*,int) ;
 scalar_t__ VAR_6 ;
 scalar_t__* VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vc_data*,int) ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_9, unsigned char VAR_10, char VAR_11)
{
 int VAR_12 = VAR_8;

 if (VAR_6)
  return;




 if (VAR_10 == FUNC_0(VAR_0)) {
  VAR_10 = FUNC_0(VAR_1);
  if (!VAR_11)
   FUNC_1(VAR_4, VAR_2);
 }

 if (VAR_11) {




  if (VAR_7[VAR_10])
   VAR_7[VAR_10]--;
 } else
  VAR_7[VAR_10]++;

 if (VAR_7[VAR_10])
  VAR_8 |= (1 << VAR_10);
 else
  VAR_8 &= ~(1 << VAR_10);


 if (VAR_11 && VAR_8 != VAR_12 && VAR_5 != -1) {
  if (VAR_4->kbdmode == VAR_3)
   FUNC_3(VAR_9, VAR_5);
  else
   FUNC_2(VAR_9, VAR_5 & 0xff);
  VAR_5 = -1;
 }
}
