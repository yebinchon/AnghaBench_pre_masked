
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct font_desc {int pref; scalar_t__ idx; int height; int width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct font_desc** VAR_4 ;
 int VAR_5 ;

const struct font_desc *FUNC_0(int VAR_6, int VAR_7, u32 VAR_8,
      u32 VAR_9)
{
    int VAR_10, VAR_11, VAR_12;
    const struct font_desc *VAR_13, *VAR_14;

    VAR_14 = ((void*)0);
    VAR_12 = -10000;
    for(VAR_10=0; VAR_10<VAR_5; VAR_10++) {
 VAR_13 = VAR_4[VAR_10];
 VAR_11 = VAR_13->pref;
 if ((VAR_7 < 400) == (VAR_13->height <= 8))
     VAR_11 += 1000;

 if ((VAR_8 & (1 << (VAR_13->width - 1))) &&
     (VAR_9 & (1 << (VAR_13->height - 1))))
     VAR_11 += 1000;

 if (VAR_11 > VAR_12) {
     VAR_12 = VAR_11;
     VAR_14 = VAR_13;
 }
    }
    return VAR_14;
}
