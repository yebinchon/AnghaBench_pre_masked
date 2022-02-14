
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2dev {int dummy; } ;
struct psmouse {scalar_t__ model; struct hgpk_data* private; struct ps2dev ps2dev; } ;
struct hgpk_data {scalar_t__ recalib_window; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ps2dev*,int *,int) ;
 int FUNC_3 (struct psmouse*) ;
 int FUNC_4 (struct psmouse*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_5(struct psmouse *VAR_6)
{
 struct ps2dev *VAR_7 = &VAR_6->ps2dev;
 struct hgpk_data *VAR_8 = VAR_6->private;


 if (VAR_6->model < VAR_0)
  return 0;


 FUNC_4(VAR_6, VAR_3);


 FUNC_3(VAR_6);


 if (FUNC_2(VAR_7, ((void*)0), 0xf5) ||
     FUNC_2(VAR_7, ((void*)0), 0xf5) ||
     FUNC_2(VAR_7, ((void*)0), 0xe6) ||
     FUNC_2(VAR_7, ((void*)0), 0xf5)) {
  return -1;
 }


 FUNC_1(150);







 if (FUNC_2(VAR_7, ((void*)0), VAR_2))
  return -1;

 FUNC_4(VAR_6, VAR_1);






 VAR_8->recalib_window = VAR_4 + FUNC_0(VAR_5);

 return 0;
}
