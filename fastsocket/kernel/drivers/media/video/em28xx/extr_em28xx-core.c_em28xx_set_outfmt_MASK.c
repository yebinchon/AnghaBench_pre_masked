
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct em28xx {int vinmode; int vinctl; int vbi_width; int vbi_height; int norm; TYPE_1__* format; } ;
struct TYPE_2__ {int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (struct em28xx*,int ,int) ;
 int FUNC_2 (struct em28xx*,int ,int,int) ;

int FUNC_3(struct em28xx *VAR_10)
{
 int VAR_11;
 u8 VAR_12;

 VAR_11 = FUNC_2(VAR_10, VAR_2,
    VAR_10->format->reg | 0x20, 0xff);
 if (VAR_11 < 0)
   return VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_0, VAR_10->vinmode);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_12 = VAR_10->vinctl;
 if (FUNC_0(VAR_10) == 1) {
  VAR_12 |= VAR_7;
  FUNC_1(VAR_10, VAR_3, 0x00);
  FUNC_1(VAR_10, VAR_5, VAR_10->vbi_width/4);
  FUNC_1(VAR_10, VAR_6, VAR_10->vbi_height);
  if (VAR_10->norm & VAR_8) {

   FUNC_1(VAR_10, VAR_4, 0x09);
  } else if (VAR_10->norm & VAR_9) {

   FUNC_1(VAR_10, VAR_4, 0x07);
  }
 }

 return FUNC_1(VAR_10, VAR_1, VAR_12);
}
