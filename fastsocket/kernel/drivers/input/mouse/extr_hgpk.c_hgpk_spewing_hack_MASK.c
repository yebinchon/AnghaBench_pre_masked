
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int count; scalar_t__ y_tally; scalar_t__ x_tally; int recalib_wq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct psmouse*,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct psmouse*,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_1,
         int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct hgpk_data *VAR_6 = VAR_1->private;



 if (VAR_2 || VAR_3)
  return;

 VAR_6->x_tally += VAR_4;
 VAR_6->y_tally += VAR_5;

 if (++VAR_6->count > 100) {
  if (FUNC_0(VAR_6->x_tally) < 3 && FUNC_0(VAR_6->y_tally) < 3) {
   FUNC_1(VAR_1, "packet spew detected (%d,%d)\n",
     VAR_6->x_tally, VAR_6->y_tally);
   FUNC_3(VAR_1, &VAR_6->recalib_wq,
        FUNC_2(VAR_0));
  }

  VAR_6->count = 0;
  VAR_6->x_tally = 0;
  VAR_6->y_tally = 0;
 }
}
