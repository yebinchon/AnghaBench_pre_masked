
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_buffer {int size; struct drm_buffer** data; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_buffer*) ;

void FUNC_1(struct drm_buffer *VAR_1)
{

 if (VAR_1 != ((void*)0)) {

  int VAR_2 = VAR_1->size / VAR_0 + 1;
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
   FUNC_0(VAR_1->data[VAR_3]);

  FUNC_0(VAR_1);
 }
}
