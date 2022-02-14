
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {struct hgpk_data* private; } ;
struct hgpk_data {int recalib_wq; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct psmouse*,char*,scalar_t__,int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct psmouse*,int *,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_4(struct psmouse *VAR_2, int VAR_3, int VAR_4)
{
 struct hgpk_data *VAR_5 = VAR_2->private;

 if (FUNC_0(VAR_3) > VAR_1 || FUNC_0(VAR_4) > VAR_1) {
  FUNC_1(VAR_2, ">%dpx jump detected (%d,%d)\n",
    VAR_1, VAR_3, VAR_4);


  FUNC_3(VAR_2, &VAR_5->recalib_wq,
    FUNC_2(VAR_0));
 }
}
