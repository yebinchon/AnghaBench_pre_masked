
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_buffer {int ** data; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_buffer*,int) ;
 int FUNC_1 (struct drm_buffer*) ;
 int FUNC_2 (struct drm_buffer*) ;
 int FUNC_3 (void*,int *,int) ;

void *FUNC_4(struct drm_buffer *VAR_1,
  int VAR_2, void *VAR_3)
{
 int VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_2(VAR_1);
 void *VAR_6 = ((void*)0);

 if (VAR_4 + VAR_2 <= VAR_0) {
  VAR_6 = &VAR_1->data[VAR_5][VAR_4];
 } else {

  int VAR_7 = VAR_0 - VAR_4;
  FUNC_3(VAR_3, &VAR_1->data[VAR_5][VAR_4], VAR_7);

  FUNC_3(VAR_3 + VAR_7, &VAR_1->data[VAR_5 + 1][0],
    VAR_2 - VAR_7);

  VAR_6 = VAR_3;
 }

 FUNC_0(VAR_1, VAR_2);
 return VAR_6;
}
