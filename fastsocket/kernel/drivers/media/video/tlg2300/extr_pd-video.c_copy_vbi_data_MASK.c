
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vbi_data {int vbi_size; int copied; TYPE_1__* video; struct front_face* front; } ;
struct front_face {int curr_frame; } ;
struct TYPE_2__ {scalar_t__ field_count; } ;


 scalar_t__ FUNC_0 (struct front_face*,int *) ;
 int FUNC_1 (char*,char*,unsigned int) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct vbi_data *VAR_0,
    char *VAR_1, unsigned int VAR_2)
{
 struct front_face *VAR_3 = VAR_0->front;

 if (VAR_3 && FUNC_0(VAR_3, ((void*)0))) {
  char *VAR_4 = FUNC_2(VAR_3->curr_frame);

  if (VAR_0->video->field_count)
   VAR_4 += (VAR_0->vbi_size / 2);
  FUNC_1(VAR_4 + VAR_0->copied, VAR_1, VAR_2);
 }
 VAR_0->copied += VAR_2;
}
