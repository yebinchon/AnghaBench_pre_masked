
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {struct map_info* priv; } ;
struct map_info {struct cfi_private* fldrv_priv; } ;
struct flchip {int state; int oldstate; int mutex; int wq; } ;
struct cfi_private {int numchips; struct flchip* chips; } ;


 int VAR_0 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct mtd_info *VAR_1)
{
 struct map_info *VAR_2 = VAR_1->priv;
 struct cfi_private *VAR_3 = VAR_2->fldrv_priv;
 int VAR_4;
 struct flchip *VAR_5;
 int VAR_6 = 0;

 for (VAR_4=0; !VAR_6 && VAR_4<VAR_3->numchips; VAR_4++) {
  VAR_5 = &VAR_3->chips[VAR_4];

  FUNC_0(VAR_5->mutex);

  switch(VAR_5->state) {
  case 129:
  case 128:
  case 132:
  case 131:
   VAR_5->oldstate = VAR_5->state;
   VAR_5->state = 130;




  case 130:
   break;

  default:
   VAR_6 = -VAR_0;
   break;
  }
  FUNC_1(VAR_5->mutex);
 }



 if (VAR_6) {
  for (VAR_4--; VAR_4 >=0; VAR_4--) {
   VAR_5 = &VAR_3->chips[VAR_4];

   FUNC_0(VAR_5->mutex);

   if (VAR_5->state == 130) {



    VAR_5->state = VAR_5->oldstate;
    FUNC_2(&VAR_5->wq);
   }
   FUNC_1(VAR_5->mutex);
  }
 }

 return VAR_6;
}
