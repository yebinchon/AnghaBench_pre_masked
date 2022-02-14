
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char,int,char*,size_t,size_t) ;
 int FUNC_2 (void*,char*) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ FUNC_4 (size_t,int ) ;
 scalar_t__ FUNC_5 (char*,size_t,int ) ;
 size_t FUNC_6 (char*,int ) ;
 size_t FUNC_7 (char*,size_t,int ,int ) ;

__attribute__((used)) static void
FUNC_8(size_t VAR_0, size_t VAR_1)
{
 char *VAR_2;
 size_t VAR_3, VAR_4, VAR_5;

 VAR_3 = 0;
 VAR_2 = (char *)FUNC_4(VAR_0, 0);
 FUNC_2((void *)VAR_2, "Unexpected mallocx() failure");

 for (VAR_4 = FUNC_6(VAR_2, 0); VAR_4 <= VAR_1;
     VAR_3 = VAR_4, VAR_4 = FUNC_6(VAR_2, 0)) {
  if (VAR_3 > 0) {
   FUNC_1(VAR_2[0], 'a',
       "Previously allocated byte %zu/%zu is corrupted",
       FUNC_0(0), VAR_3);
   FUNC_1(VAR_2[VAR_3-1], 'a',
       "Previously allocated byte %zu/%zu is corrupted",
       VAR_3-1, VAR_3);
  }

  for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5++) {
   FUNC_1(VAR_2[VAR_5], 0x0,
       "Newly allocated byte %zu/%zu isn't zero-filled",
       VAR_5, VAR_4);
   VAR_2[VAR_5] = 'a';
  }

  if (FUNC_7(VAR_2, VAR_4+1, 0, 0) == VAR_4) {
   VAR_2 = (char *)FUNC_5(VAR_2, VAR_4+1, 0);
   FUNC_2((void *)VAR_2,
       "Unexpected rallocx() failure");
  }
 }

 FUNC_3(VAR_2, 0);
}
