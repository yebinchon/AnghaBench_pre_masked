
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int *) ;
 int * VAR_1 ;
 char* VAR_2 ;
 scalar_t__ FUNC_1 (char*,char*,char*) ;

int FUNC_2(char *VAR_3, char **VAR_4, off_t VAR_5, int VAR_6,
   int *VAR_7, void *VAR_8)
{
 int VAR_9, VAR_10 = 0;
 off_t VAR_11 = 0;

 VAR_10 += FUNC_1(VAR_3, "serinfo:1.0 driver:%s\n", VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_0 && VAR_10 < 4000; VAR_9++) {
  VAR_10 += FUNC_0(VAR_3 + VAR_10, &VAR_1[VAR_9]);
  if (VAR_10+VAR_11 > VAR_5+VAR_6)
   goto done;
  if (VAR_10+VAR_11 < VAR_5) {
   VAR_11 += VAR_10;
   VAR_10 = 0;
  }
 }
 *VAR_7 = 1;
done:
 if (VAR_5 >= VAR_10+VAR_11)
  return 0;
 *VAR_4 = VAR_3 + (VAR_11-VAR_5);
 return ((VAR_6 < VAR_11+VAR_10-VAR_5) ? VAR_6 : VAR_11+VAR_10-VAR_5);
}
