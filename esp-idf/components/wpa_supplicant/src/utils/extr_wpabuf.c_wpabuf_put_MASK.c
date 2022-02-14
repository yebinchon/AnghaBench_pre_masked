
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {scalar_t__ used; scalar_t__ size; } ;


 int FUNC_0 (struct wpabuf*) ;
 void* FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpabuf*,size_t) ;

void * FUNC_3(struct wpabuf *VAR_0, size_t VAR_1)
{
 void *VAR_2 = FUNC_1(VAR_0) + FUNC_0(VAR_0);
 VAR_0->used += VAR_1;
 if (VAR_0->used > VAR_0->size) {
  FUNC_2(VAR_0, VAR_1);
 }
 return VAR_2;
}
