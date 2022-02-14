
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf_trace {scalar_t__ magic; struct wpabuf_trace* ext_data; } ;
struct wpabuf {scalar_t__ magic; struct wpabuf* ext_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct wpabuf_trace*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 struct wpabuf_trace* FUNC_3 (struct wpabuf_trace*) ;

void FUNC_4(struct wpabuf *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_1(VAR_2->ext_data);
 FUNC_1(VAR_2);

}
