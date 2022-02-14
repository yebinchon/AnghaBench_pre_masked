
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct pxafb_info {scalar_t__ state; int ctrlr_lock; } ;
 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pxafb_info*,int) ;
 int FUNC_1 (struct pxafb_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pxafb_info*) ;
 int FUNC_5 (struct pxafb_info*) ;

__attribute__((used)) static void FUNC_6(struct pxafb_info *VAR_1, u_int VAR_2)
{
 u_int VAR_3;

 FUNC_2(&VAR_1->ctrlr_lock);

 VAR_3 = VAR_1->state;




 if (VAR_3 == VAR_0 && VAR_2 == 128)
  VAR_2 = 131;

 switch (VAR_2) {
 case 133:




  if (VAR_3 != 134 && VAR_3 != 132) {
   VAR_1->state = VAR_2;

   FUNC_4(VAR_1);
  }
  break;

 case 132:
 case 134:



  if (VAR_3 != 134) {
   VAR_1->state = VAR_2;
   FUNC_0(VAR_1, 0);
   FUNC_1(VAR_1, 0);
   if (VAR_3 != 133)
    FUNC_4(VAR_1);
  }
  break;

 case 130:




  if (VAR_3 == 133) {
   VAR_1->state = 131;
   FUNC_5(VAR_1);

  }
  break;

 case 128:





  if (VAR_3 == 131) {
   FUNC_1(VAR_1, 0);
   FUNC_4(VAR_1);
   FUNC_5(VAR_1);
   FUNC_1(VAR_1, 1);
  }
  break;

 case 129:





  if (VAR_3 != 132)
   break;


 case 131:




  if (VAR_3 != 131) {
   VAR_1->state = 131;
   FUNC_5(VAR_1);
   FUNC_1(VAR_1, 1);
   FUNC_0(VAR_1, 1);
  }
  break;
 }
 FUNC_3(&VAR_1->ctrlr_lock);
}
