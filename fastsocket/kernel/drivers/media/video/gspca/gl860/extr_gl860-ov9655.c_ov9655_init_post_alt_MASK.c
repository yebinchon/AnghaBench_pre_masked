
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef size_t s32 ;
struct TYPE_3__ {size_t priv; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int,int,int,int,int ) ;
 int FUNC_2 (struct gspca_dev*,int,int,int,int,int,int *) ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 size_t FUNC_3 (struct gspca_dev*,int ,int ) ;
 int FUNC_4 (struct gspca_dev*,int ,int ,size_t) ;
 int FUNC_5 (struct gspca_dev*) ;
 int ** VAR_10 ;
 int ** VAR_11 ;
 int VAR_12 ;
 int* VAR_13 ;

__attribute__((used)) static int FUNC_6(struct gspca_dev *VAR_14)
{
 s32 VAR_15 = VAR_14->cam.cam_mode[(s32) VAR_14->curr_mode].priv;
 s32 VAR_16;
 s32 VAR_17;
 u8 **VAR_18;

 FUNC_2(VAR_14, 0x40, 5, 0x0001, 0x0000, 0, ((void*)0));

 VAR_18 = (VAR_15 == VAR_0) ? VAR_11 : VAR_10;

 FUNC_2(VAR_14, 0x40, 3, 0x0000, 0x0200,
   VAR_13[0], VAR_18[0]);
 for (VAR_17 = 1; VAR_17 < 7; VAR_17++)
  FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200,
    VAR_13[VAR_17], VAR_18[VAR_17]);
 FUNC_2(VAR_14, 0x40, 3, 0x0000, 0x0200,
   VAR_13[7], VAR_18[7]);

 VAR_16 = FUNC_3(VAR_14, VAR_12,
   FUNC_0(VAR_12));

 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200, 8, VAR_2);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);

 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200, 8, VAR_2);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);

 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);
 FUNC_1(VAR_14, 0xc0, 2, 0x6000, 0x801e, 1, VAR_1);
 FUNC_4(VAR_14, VAR_12,
     FUNC_0(VAR_12), VAR_16);

 FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200, 8, VAR_2);

 FUNC_2(VAR_14, 0x40, 3, 0x0000, 0x0200, 4, VAR_3);
 FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200, 8, VAR_4);

 FUNC_2(VAR_14, 0x40, 3, 0x0000, 0x0200, 4, VAR_5);
 FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200, 8, VAR_6);

 FUNC_2(VAR_14, 0x40, 3, 0x0000, 0x0200, 4, VAR_7);
 FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200, 8, VAR_8);

 FUNC_2(VAR_14, 0x40, 3, 0x6000, 0x0200, 8, VAR_9);

 FUNC_5(VAR_14);

 return 0;
}
