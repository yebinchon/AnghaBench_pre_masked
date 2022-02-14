
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_webcam; } ;
struct em28xx {scalar_t__ chip_id; scalar_t__ mode; TYPE_1__ board; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct em28xx*,int,int) ;
 int FUNC_1 (struct em28xx*,int ,int,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct em28xx *VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_6->chip_id == VAR_0) {

  if (!VAR_7) {
   VAR_8 = FUNC_1(VAR_6, VAR_1,
         0x00,
         VAR_2);
   return VAR_8;
  }


  VAR_8 = FUNC_1(VAR_6, VAR_1,
        VAR_2,
        VAR_2);
  return VAR_8;
 }




 VAR_8 = FUNC_1(VAR_6, VAR_4,
       VAR_7 ? 0x10 : 0x00, 0x10);
 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_7) {

  VAR_8 = FUNC_0(VAR_6, VAR_5, 0x27);
  return VAR_8;
 }

 if (VAR_6->board.is_webcam)
  VAR_8 = FUNC_0(VAR_6, 0x13, 0x0c);


 VAR_8 = FUNC_0(VAR_6, 0x48, 0x00);

 if (VAR_6->mode == VAR_3)
  VAR_8 = FUNC_0(VAR_6, VAR_5, 0x67);
 else
  VAR_8 = FUNC_0(VAR_6, VAR_5, 0x37);

 FUNC_2(6);

 return VAR_8;
}
