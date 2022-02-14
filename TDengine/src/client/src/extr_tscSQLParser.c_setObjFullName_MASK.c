
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t int32_t ;
struct TYPE_4__ {size_t n; int z; } ;
typedef TYPE_1__ SSQLToken ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char*) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static int32_t FUNC_4(char* VAR_6, char* VAR_7, SSQLToken* VAR_8, SSQLToken* VAR_9, int32_t* VAR_10) {
  int32_t VAR_11 = 0;

  if (VAR_7 != ((void*)0)) {
    int32_t VAR_12 = FUNC_2(VAR_7);
    FUNC_1(VAR_6, VAR_7);
    VAR_6[VAR_12] = VAR_5[0];
    VAR_11 += (VAR_12 + 1);
  }


  if (VAR_8 != ((void*)0)) {
    if (VAR_8->n > VAR_2) {
      return VAR_0;
    }

    FUNC_0(&VAR_6[VAR_11], VAR_8->z, VAR_8->n);
    VAR_11 += VAR_8->n;
  }

  if (VAR_9 != ((void*)0)) {
    if (VAR_8 != ((void*)0)) {
      VAR_6[VAR_11] = VAR_5[0];
      VAR_11 += 1;


      if (VAR_9->n > VAR_4) {
        return VAR_0;
      }
    } else {

      if (VAR_9->n > VAR_4 + VAR_2 + FUNC_3(VAR_5)) {
        return VAR_0;
      }
    }

    FUNC_0(&VAR_6[VAR_11], VAR_9->z, VAR_9->n);
    VAR_11 += VAR_9->n;
  }

  if (VAR_10 != ((void*)0)) {
    *VAR_10 = VAR_11;
  }

  if (VAR_11 < VAR_3) {
    VAR_6[VAR_11] = 0;
  }

  return (VAR_11 <= VAR_3) ? VAR_1 : VAR_0;
}
