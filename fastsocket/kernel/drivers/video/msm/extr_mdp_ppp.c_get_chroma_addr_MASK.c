
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp_rect {int x; int y; } ;
struct mdp_img {int width; int height; int format; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct mdp_img *VAR_0, struct mdp_rect *VAR_1,
       uint32_t VAR_2, uint32_t VAR_3, uint32_t VAR_4,
       uint32_t *VAR_5, uint32_t *VAR_6)
{
 uint32_t VAR_7 = FUNC_1(VAR_0->format);
 uint32_t VAR_8 = 2;
 uint32_t VAR_9;

 if (FUNC_0(VAR_0->format)) {
  VAR_9 = (VAR_1->x / VAR_8) * VAR_8;
  VAR_9 += VAR_1->y == 0 ? 0 :
     ((VAR_1->y + 1) / VAR_7) * VAR_0->width;
  *VAR_5 = VAR_2 + (VAR_0->width * VAR_0->height * VAR_3);
  *VAR_5 += VAR_9 * VAR_3;
  *VAR_6 |= *VAR_6 << 16;
 } else {
  *VAR_5 = 0;
 }
}
