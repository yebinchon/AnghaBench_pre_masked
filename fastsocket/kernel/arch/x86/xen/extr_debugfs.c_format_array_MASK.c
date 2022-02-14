
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 size_t FUNC_0 (char*,size_t,char const*,int ) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, size_t VAR_1, const char *VAR_2,
      u32 *VAR_3, unsigned VAR_4)
{
 size_t VAR_5 = 0;
 unsigned VAR_6;

 for(VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  size_t VAR_7;

  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3[VAR_6]);
  VAR_7++;
  VAR_5 += VAR_7;

  if (VAR_0) {
   VAR_0 += VAR_7;
   VAR_1 -= VAR_7;
   VAR_0[-1] = (VAR_6 == VAR_4-1) ? '\n' : ' ';
  }
 }

 VAR_5++;
 if (VAR_0)
  *VAR_0 = '\0';

 return VAR_5;
}
