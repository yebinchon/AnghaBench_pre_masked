
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_sparse_map {int start; int end; } ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_0(int VAR_3, const struct error_sparse_map *VAR_4, int VAR_5)
{
 boolean_t VAR_6 = VAR_0;
 int VAR_7 = 0, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
  struct error_sparse_map VAR_9 = VAR_4[VAR_8];

  if (VAR_9.start <= VAR_3 && VAR_3 <= VAR_9.end) {
   VAR_7 += VAR_3 - VAR_9.start;
   VAR_6 = VAR_2;
   break;
  }
  VAR_7 += VAR_9.end - VAR_9.start + 1;
 }

 return (VAR_6)? VAR_7 : VAR_1;
}
