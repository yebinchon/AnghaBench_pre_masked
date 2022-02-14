
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {char const* filename; int entryData; } ;
typedef int PARTITION ;
typedef TYPE_1__ DIR_ENTRY ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 size_t FUNC_5 (char const*,size_t) ;

__attribute__((used)) static bool FUNC_6 (PARTITION* VAR_2, const char* VAR_3, uint32_t VAR_4) {
 DIR_ENTRY VAR_5;
 bool VAR_6;
 char VAR_7[VAR_0];
 size_t VAR_8;

 VAR_8 = FUNC_5(VAR_3, VAR_1);

 if (VAR_8 >= VAR_1) {
  return 0;
 }


 VAR_6 = FUNC_1 (VAR_2, &VAR_5, VAR_4);

 while (VAR_6) {

  if ((VAR_8 == FUNC_5(VAR_5.filename, VAR_1))
   && (FUNC_3(VAR_3, VAR_5.filename, VAR_8) == 0)) {
    return 1;
  }


  FUNC_0 (VAR_5.entryData, VAR_7);
  if ((FUNC_4(VAR_3, VAR_7, VAR_0) == 0)) {
    return 1;
  }
  VAR_6 = FUNC_2 (VAR_2, &VAR_5);
 }
 return 0;
}
