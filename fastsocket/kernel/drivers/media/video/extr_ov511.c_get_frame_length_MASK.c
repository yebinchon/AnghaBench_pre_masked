
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov511_frame {int width; int height; int format; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline long int
FUNC_1(struct ov511_frame *VAR_0)
{
 if (!VAR_0)
  return 0;
 else
  return ((VAR_0->width * VAR_0->height
    * FUNC_0(VAR_0->format)) >> 3);
}
