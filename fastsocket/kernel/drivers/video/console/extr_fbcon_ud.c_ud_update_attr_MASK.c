
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int height; int width; } ;
struct vc_data {TYPE_1__ vc_font; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(u8 *VAR_3, u8 *VAR_4, int VAR_5,
      struct vc_data *VAR_6)
{
 int VAR_7, VAR_8 = (VAR_6->vc_font.height < 10) ? 1 : 2;
 int VAR_9 = (VAR_6->vc_font.width + 7) >> 3;
 unsigned int VAR_10 = VAR_6->vc_font.height * VAR_9;
 u8 VAR_11;

 VAR_8 = VAR_8 * VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_10; VAR_7++) {
  VAR_11 = VAR_4[VAR_7];
  if (VAR_5 & VAR_2 && VAR_7 < VAR_8)
   VAR_11 = 0xff;
  if (VAR_5 & VAR_0)
   VAR_11 |= VAR_11 << 1;
  if (VAR_5 & VAR_1)
   VAR_11 = ~VAR_11;
  VAR_3[VAR_7] = VAR_11;
 }
}
