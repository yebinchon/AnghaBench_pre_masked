
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__ alloc; char* z; int n; } ;
typedef TYPE_1__ SString ;
typedef char* LPVOID ;
typedef int LPTSTR ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int ,int ,int ,int ,int *) ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_5 (int,scalar_t__) ;
 int VAR_7 ;
 int FUNC_6 (char*,int ,scalar_t__) ;
 char* FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char*) ;

int32_t FUNC_11(SString* VAR_8, int32_t VAR_9) {
  if (VAR_8->alloc >= VAR_9) {
    return VAR_6;
  }

  VAR_9 = FUNC_0(VAR_9);

  char* VAR_10 = ((void*)0);
  if (VAR_8->z != ((void*)0)) {
    VAR_10 = FUNC_7(VAR_8->z, VAR_9);
    FUNC_6(VAR_8->z + VAR_8->n, 0, VAR_9 - VAR_8->n);
  } else {
    VAR_10 = FUNC_5(1, VAR_9);
  }

  if (VAR_10 == ((void*)0)) {
    char VAR_11[256] = {0};
    FUNC_8(VAR_7, VAR_11, FUNC_9(VAR_11));
    FUNC_10("failed to allocate memory, reason:%s", VAR_11);

    return VAR_5;
  }

  VAR_8->z = VAR_10;
  VAR_8->alloc = VAR_9;

  return VAR_6;
}
