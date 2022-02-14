
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int type; } ;
struct zoran {int norm; TYPE_1__ card; } ;
typedef enum zoran_codec_mode { ____Placeholder_zoran_codec_mode } zoran_codec_mode ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void
FUNC_4 (struct zoran *VAR_6,
      enum zoran_codec_mode VAR_7)
{
 u32 VAR_8;

 switch (VAR_7) {
 case 128:
  FUNC_0(~VAR_5, VAR_4);
  VAR_8 = FUNC_2(VAR_3);
  if ((VAR_8 & (1 << 10)) && VAR_6->card.type != VAR_0) {
   VAR_8 += ((1 << 10) | 1);
  }
  FUNC_3(VAR_8, VAR_3);
  break;
 case 129:
 case 130:
 default:
  if ((VAR_6->norm & VAR_1) ||
      (VAR_6->card.type == VAR_0 &&
       (VAR_6->norm & VAR_2)))
   FUNC_0(~VAR_5, VAR_4);
  else
   FUNC_1(VAR_5, VAR_4);
  VAR_8 = FUNC_2(VAR_3);
  if (!(VAR_8 & (1 << 10)) && VAR_6->card.type != VAR_0) {
   VAR_8 -= ((1 << 10) | 1);
  }
  FUNC_3(VAR_8, VAR_3);
  break;
 }
}
