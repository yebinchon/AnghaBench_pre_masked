
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_1 ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_2, size_t VAR_3, const char *VAR_4)
{
  const char *VAR_5 = VAR_2 + VAR_3;
  size_t VAR_6 = FUNC_1(VAR_4);


  VAR_2 += 2;


  if(VAR_2 < VAR_5 && FUNC_0(*VAR_2)) {

    do
      VAR_2++;
    while(VAR_2 < VAR_5 && FUNC_0(*VAR_2));


    if(VAR_2 == VAR_5 || *VAR_2 != ' ')
      return VAR_0;

    VAR_2++;
  }



  if(VAR_2 + VAR_6 <= VAR_5 && FUNC_2(VAR_2, VAR_4, VAR_6) &&
     (VAR_2[VAR_6] == ' ' || VAR_2 + VAR_6 + 2 == VAR_5))
    return VAR_1;

  return VAR_0;
}
