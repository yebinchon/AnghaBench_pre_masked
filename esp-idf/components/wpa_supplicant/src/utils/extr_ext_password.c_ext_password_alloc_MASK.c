
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;
 struct wpabuf* FUNC_3 (size_t) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*) ;

struct wpabuf * FUNC_6(size_t VAR_2)
{
 struct wpabuf *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0))
  return ((void*)0);


 if (FUNC_0(FUNC_4(VAR_3), FUNC_5(VAR_3)) < 0) {
  FUNC_2(VAR_0, "EXT PW: mlock failed: %s",
      FUNC_1(VAR_1));
 }


 return VAR_3;
}
