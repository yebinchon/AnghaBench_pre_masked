
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf_trace {int magic; } ;
struct wpabuf {size_t size; size_t used; int * ext_data; } ;


 int VAR_0 ;
 struct wpabuf_trace* FUNC_0 (int) ;

struct wpabuf * FUNC_1(u8 *VAR_1, size_t VAR_2)
{
 struct wpabuf *VAR_3 = (struct wpabuf *)FUNC_0(sizeof(struct wpabuf));
 if (VAR_3 == ((void*)0))
  return ((void*)0);


 VAR_3->size = VAR_2;
 VAR_3->used = VAR_2;
 VAR_3->ext_data = VAR_1;

 return VAR_3;
}
