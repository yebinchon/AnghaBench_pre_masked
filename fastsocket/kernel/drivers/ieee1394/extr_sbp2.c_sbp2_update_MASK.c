
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unit_directory {int device; } ;
struct sbp2_lu {int shost; int state; int ne; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 struct sbp2_lu* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sbp2_lu*,int) ;
 scalar_t__ FUNC_5 (struct sbp2_lu*) ;
 int FUNC_6 (struct sbp2_lu*) ;
 int FUNC_7 (struct sbp2_lu*) ;
 scalar_t__ FUNC_8 (struct sbp2_lu*) ;
 int FUNC_9 (struct sbp2_lu*) ;
 int FUNC_10 (struct sbp2_lu*,int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct unit_directory *VAR_3)
{
 struct sbp2_lu *VAR_4 = FUNC_2(&VAR_3->device);

 if (FUNC_8(VAR_4) != 0) {





  if (!FUNC_3(VAR_4->ne))
   return 0;





  FUNC_6(VAR_4);

  if (FUNC_5(VAR_4) != 0) {
   if (!FUNC_3(VAR_4->ne))
    return 0;


   FUNC_0("Failed to reconnect to sbp2 device!");
   return -VAR_1;
  }
 }

 FUNC_9(VAR_4);
 FUNC_4(VAR_4, 1);
 FUNC_7(VAR_4);



 FUNC_10(VAR_4, VAR_0);



 if (FUNC_3(VAR_4->ne)) {
  FUNC_1(&VAR_4->state, VAR_2);
  FUNC_11(VAR_4->shost);
 }
 return 0;
}
