
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {int alloc; scalar_t__ n; char* z; } ;
typedef TYPE_1__ SString ;
typedef char* LPVOID ;
typedef int LPTSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *,int ,int ,int ,int ,int *) ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (char*,int ,scalar_t__) ;
 char* FUNC_5 (char*,scalar_t__) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;

int32_t FUNC_9(SString* VAR_9, int32_t VAR_10) {
  if (VAR_9->alloc - VAR_9->n > VAR_10) {
    return VAR_7;
  }


  int32_t VAR_11 = (VAR_10 < VAR_4) ? VAR_10 : VAR_4;
  if (VAR_11 < (VAR_9->alloc >> 1)) {
    VAR_11 = (VAR_9->alloc >> 1);
  }


  int32_t VAR_12 = VAR_9->alloc + VAR_11;

  char* VAR_13 = FUNC_5(VAR_9->z, VAR_12);
  if (VAR_13 == ((void*)0)) {
    char VAR_14[256] = {0};
    FUNC_6(VAR_8, VAR_14, FUNC_7(VAR_14));
    FUNC_8("failed to allocate memory, reason:%s", VAR_14);


    return VAR_6;
  }

  FUNC_4(VAR_13 + VAR_9->n, 0, VAR_11);
  VAR_9->z = VAR_13;

  return VAR_7;
}
