
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 struct wpabuf* FUNC_0 (size_t) ;
 int FUNC_1 (struct wpabuf*) ;
 scalar_t__ FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (struct wpabuf*,struct wpabuf*) ;

struct wpabuf * FUNC_4(struct wpabuf *VAR_0, struct wpabuf *VAR_1)
{
 struct wpabuf *VAR_2 = ((void*)0);
 size_t VAR_3 = 0;

 if (VAR_1 == ((void*)0))
  return VAR_0;

 if (VAR_0)
  VAR_3 += FUNC_2(VAR_0);
 if (VAR_1)
  VAR_3 += FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_3);
 if (VAR_2) {
  if (VAR_0)
   FUNC_3(VAR_2, VAR_0);
  if (VAR_1)
   FUNC_3(VAR_2, VAR_1);
 }

 FUNC_1(VAR_0);
 FUNC_1(VAR_1);

 return VAR_2;
}
