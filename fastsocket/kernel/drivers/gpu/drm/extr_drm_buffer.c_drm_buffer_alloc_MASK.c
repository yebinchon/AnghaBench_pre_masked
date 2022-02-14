
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_buffer {int size; struct drm_buffer** data; } ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_buffer*) ;
 struct drm_buffer* FUNC_2 (int ,int ) ;
 struct drm_buffer* FUNC_3 (int,int ) ;
 int FUNC_4 (int,int) ;

int FUNC_5(struct drm_buffer **VAR_3, int VAR_4)
{
 int VAR_5 = VAR_4 / VAR_2 + 1;
 int VAR_6;



 *VAR_3 = FUNC_3(sizeof(struct drm_buffer) + VAR_5*sizeof(char *),
   VAR_1);

 if (*VAR_3 == ((void*)0)) {
  FUNC_0("Failed to allocate drm buffer object to hold"
    " %d bytes in %d pages.\n",
    VAR_4, VAR_5);
  return -VAR_0;
 }

 (*VAR_3)->size = VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {

  (*VAR_3)->data[VAR_6] =
   FUNC_2(FUNC_4(VAR_2, VAR_4 - VAR_6 * VAR_2),
    VAR_1);


  if ((*VAR_3)->data[VAR_6] == ((void*)0)) {
   FUNC_0("Failed to allocate %dth page for drm"
     " buffer with %d bytes and %d pages.\n",
     VAR_6 + 1, VAR_4, VAR_5);
   goto error_out;
  }

 }

 return 0;

error_out:


 if ((*VAR_3)->data[VAR_6])
  FUNC_1((*VAR_3)->data[VAR_6]);

 for (--VAR_6; VAR_6 >= 0; --VAR_6)
  FUNC_1((*VAR_3)->data[VAR_6]);

 FUNC_1(*VAR_3);
 return -VAR_0;
}
