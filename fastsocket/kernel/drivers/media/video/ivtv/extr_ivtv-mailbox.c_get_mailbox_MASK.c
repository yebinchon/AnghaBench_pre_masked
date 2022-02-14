
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ivtv_mailbox_data {int max_mbox; } ;
struct ivtv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;
 scalar_t__ FUNC_3 (struct ivtv*,struct ivtv_mailbox_data*,int) ;

__attribute__((used)) static int FUNC_4(struct ivtv *VAR_5, struct ivtv_mailbox_data *VAR_6, int VAR_7)
{
 unsigned long VAR_8 = VAR_4;
 int VAR_9, VAR_10;
 int VAR_11 = VAR_6->max_mbox;
 int VAR_12 = 100;



 if ((VAR_7 & VAR_0) == VAR_2)
  VAR_11 = 1;


 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
  for (VAR_10 = 1; VAR_10 <= VAR_11; VAR_10++)
   if (FUNC_3(VAR_5, VAR_6, VAR_10))
    return VAR_10;


  if (!(VAR_7 & VAR_1)) {
   if (FUNC_2(VAR_4,
           VAR_8 + FUNC_1(10*VAR_12)))
          break;
   FUNC_0(10, 0);
  }
 }
 return -VAR_3;
}
