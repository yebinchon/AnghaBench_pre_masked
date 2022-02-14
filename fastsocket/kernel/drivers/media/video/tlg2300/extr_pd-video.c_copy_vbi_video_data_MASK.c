
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_data {scalar_t__ field_count; struct vbi_data* vbi; } ;
struct vbi_data {int vbi_size; int copied; scalar_t__ front; } ;


 int FUNC_0 (struct vbi_data*,char*,unsigned int) ;
 int FUNC_1 (struct video_data*,char*,unsigned int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct video_data *VAR_0,
    char *VAR_1, unsigned int VAR_2)
{
 struct vbi_data *VAR_3 = VAR_0->vbi;
 unsigned int VAR_4 = (VAR_3->vbi_size / 2) - VAR_3->copied;

 if (VAR_4 >= VAR_2) {
  FUNC_0(VAR_3, VAR_1, VAR_2);
 } else {
  if (VAR_4) {
   FUNC_0(VAR_3, VAR_1, VAR_4);


   if (VAR_3->front && VAR_0->field_count)
    FUNC_2(VAR_3->front);
  }
  FUNC_1(VAR_0, VAR_1 + VAR_4, VAR_2 - VAR_4);
 }
}
