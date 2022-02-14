
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf_trace {int magic; } ;
struct wpabuf {size_t size; } ;


 int VAR_0 ;
 struct wpabuf_trace* FUNC_0 (int) ;

struct wpabuf * FUNC_1(size_t VAR_1)
{
 struct wpabuf *VAR_2 = (struct wpabuf *)FUNC_0(sizeof(struct wpabuf) + VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);


 VAR_2->size = VAR_1;
 return VAR_2;
}
