
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct table {int mask; int name; } ;


 int FUNC_0 (int ,char*,size_t) ;
 size_t FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static char *
FUNC_3(struct table *VAR_0, uint64_t VAR_1, char *VAR_2, unsigned VAR_3)
{
 size_t VAR_4 = 0;
 char *VAR_5 = VAR_2;
 int VAR_6;

 for (VAR_6 = 0; VAR_0[VAR_6].mask != 0; VAR_6++) {
  if ((VAR_1 & VAR_0[VAR_6].mask) == 0)
   continue;
  if (VAR_4 && ((size_t) (VAR_5 - VAR_2) < (VAR_3 - 1)))
   *VAR_5++ = ' ';
  VAR_4 = FUNC_1(FUNC_2(VAR_0[VAR_6].name), (size_t)((VAR_3-1)-(VAR_5-VAR_2)));
  if (VAR_4 == 0)
   break;
  FUNC_0(VAR_0[VAR_6].name, VAR_5, VAR_4);
  VAR_5 += VAR_4;
 }
 *VAR_5 = '\0';
 return VAR_2;
}
