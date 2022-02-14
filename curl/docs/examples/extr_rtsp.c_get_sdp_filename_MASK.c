
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char const*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static void FUNC_3(const char *VAR_0, char *VAR_1,
                             size_t VAR_2)
{
  const char *VAR_3 = FUNC_2(VAR_0, '/');
  FUNC_1(VAR_1, "video.sdp");
  if(VAR_3 != ((void*)0)) {
    VAR_3++;
    if(VAR_3[0] != '\0') {
      FUNC_0(VAR_1, VAR_2, "%s.sdp", VAR_3);
    }
  }
}
