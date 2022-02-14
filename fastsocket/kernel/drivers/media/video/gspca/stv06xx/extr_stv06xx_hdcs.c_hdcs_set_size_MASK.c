
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct sd {struct hdcs* sensor_priv; } ;
struct TYPE_2__ {unsigned int width; int border; unsigned int height; unsigned int top; unsigned int left; } ;
struct hdcs {unsigned int w; unsigned int h; TYPE_1__ array; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sd*) ;
 int FUNC_1 (struct sd*,int ,unsigned int*,int) ;

__attribute__((used)) static int FUNC_2(struct sd *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4)
{
 struct hdcs *VAR_5 = VAR_2->sensor_priv;
 u8 VAR_6[4];
 unsigned int VAR_7, VAR_8;
 int VAR_9;


 VAR_3 = (VAR_3 + 3) & ~0x3;
 VAR_4 = (VAR_4 + 3) & ~0x3;

 if (VAR_3 > VAR_5->array.width)
  VAR_3 = VAR_5->array.width;

 if (FUNC_0(VAR_2)) {

  if (VAR_4 + 2 * VAR_5->array.border + VAR_0
      > VAR_5->array.height)
   VAR_4 = VAR_5->array.height - 2 * VAR_5->array.border -
    VAR_0;

  VAR_8 = (VAR_5->array.height - VAR_0 - VAR_4) / 2
    + VAR_5->array.top;
 } else {
  if (VAR_4 > VAR_5->array.height)
   VAR_4 = VAR_5->array.height;

  VAR_8 = VAR_5->array.top + (VAR_5->array.height - VAR_4) / 2;
 }

 VAR_7 = VAR_5->array.left + (VAR_5->array.width - VAR_3) / 2;

 VAR_6[0] = VAR_8 / 4;
 VAR_6[1] = VAR_7 / 4;
 VAR_6[2] = (VAR_8 + VAR_4) / 4 - 1;
 VAR_6[3] = (VAR_7 + VAR_3) / 4 - 1;

 VAR_9 = FUNC_1(VAR_2, VAR_1, VAR_6, 4);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_5->w = VAR_3;
 VAR_5->h = VAR_4;
 return VAR_9;
}
