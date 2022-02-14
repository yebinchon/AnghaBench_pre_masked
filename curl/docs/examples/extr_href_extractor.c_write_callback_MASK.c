
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*,char) ;
 scalar_t__ FUNC_1 (void*,char*,int) ;
 scalar_t__ FUNC_2 (void*,char*,int) ;
 scalar_t__ FUNC_3 (void*,int ) ;
 char* FUNC_4 (void*) ;
 size_t FUNC_5 (void*) ;
 int FUNC_6 (char*,char*) ;

__attribute__((used)) static size_t FUNC_7(void *VAR_1, size_t VAR_2, size_t VAR_3,
                             void *VAR_4)
{
  size_t VAR_5 = VAR_2 * VAR_3, VAR_6;
  for(VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
    FUNC_0(VAR_4, ((char *)VAR_1)[VAR_6]);
    if(FUNC_2(VAR_4, "a", 1))
      if(FUNC_1(VAR_4, "href", 4))
        if(FUNC_3(VAR_4, VAR_0)) {
          FUNC_4(VAR_4)[FUNC_5(VAR_4)] = '\0';
          FUNC_6("%s\n", FUNC_4(VAR_4));
        }
  }
  return VAR_5;
}
