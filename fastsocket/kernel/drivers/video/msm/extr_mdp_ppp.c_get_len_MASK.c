
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdp_rect {int w; int h; } ;
struct mdp_img {int format; int width; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mdp_img *VAR_0, struct mdp_rect *VAR_1, uint32_t VAR_2,
      uint32_t *VAR_3, uint32_t *VAR_4)
{
 *VAR_3 = FUNC_0(VAR_1->h, VAR_0->width, VAR_1->w, VAR_2);
 if (FUNC_1(VAR_0->format))
  *VAR_4 = *VAR_3/FUNC_2(VAR_0->format);
 else
  *VAR_4 = 0;
}
