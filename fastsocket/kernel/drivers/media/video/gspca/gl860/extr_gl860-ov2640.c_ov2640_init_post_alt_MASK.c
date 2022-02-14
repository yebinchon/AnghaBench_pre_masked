
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef size_t s32 ;
struct TYPE_3__ {size_t priv; } ;


 int FUNC_0 (int ) ;




 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int,int,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 size_t FUNC_3 (struct gspca_dev*,int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int ,int ,size_t) ;
 int FUNC_5 (struct gspca_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_12)
{
 s32 VAR_13 = VAR_12->cam.cam_mode[(s32) VAR_12->curr_mode].priv;
 s32 VAR_14;

 FUNC_2(VAR_12, 0x40, 5, 0x0001, 0x0000, 0, ((void*)0));

 VAR_14 = FUNC_3(VAR_12, VAR_10,
   FUNC_0(VAR_10));
 FUNC_2(VAR_12, 0x40, 3, 0x0000, 0x0200, 12, VAR_4);
 FUNC_1(VAR_12);
 FUNC_4(VAR_12, VAR_10,
    FUNC_0(VAR_10), VAR_14);

 switch (VAR_13) {
 case 129:
  VAR_14 = FUNC_3(VAR_12, VAR_5, FUNC_0(VAR_5));
  FUNC_2(VAR_12, 0x40, 3, 0x0000, 0x0200, 12, VAR_2);
  break;

 case 128:
  VAR_14 = FUNC_3(VAR_12, VAR_6, FUNC_0(VAR_6));
  FUNC_2(VAR_12, 0x40, 3, 0x0000, 0x0200, 12, VAR_3);
  break;

 case 130:
 case 131:
  VAR_14 = FUNC_3(VAR_12, VAR_7, FUNC_0(VAR_7));

  if (VAR_13 == 131) {
   VAR_14 = FUNC_3(VAR_12, VAR_8,
     FUNC_0(VAR_8));
  } else {
   FUNC_2(VAR_12, 0x40, 1, 0x601d, 0x0086, 0, ((void*)0));
   FUNC_2(VAR_12, 0x40, 1, 0x6001, 0x00d7, 0, ((void*)0));
   FUNC_2(VAR_12, 0x40, 1, 0x6082, 0x00d3, 0, ((void*)0));
  }

  VAR_14 = FUNC_3(VAR_12, VAR_9, FUNC_0(VAR_9));

  if (VAR_13 == 131) {
   FUNC_2(VAR_12, 0x40, 1, 0x6001, 0x00ff, 0, ((void*)0));
   FUNC_2(VAR_12, 0x40, 3, 0x0000, 0x0200,
     12, VAR_0);
  } else {
   FUNC_2(VAR_12, 0x40, 1, 0x6020, 0x008c, 0, ((void*)0));
   FUNC_2(VAR_12, 0x40, 1, 0x6001, 0x00ff, 0, ((void*)0));
   FUNC_2(VAR_12, 0x40, 1, 0x6076, 0x0018, 0, ((void*)0));
   FUNC_2(VAR_12, 0x40, 3, 0x0000, 0x0200,
     12, VAR_1);
  }
  break;
 }

 VAR_14 = FUNC_3(VAR_12, VAR_11,
   FUNC_0(VAR_11));

 FUNC_5(VAR_12);

 return 0;
}
