
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int kcdata_iter_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline
int FUNC_3(kcdata_iter_t VAR_1, uint32_t VAR_2) {
 return
  FUNC_2(VAR_1) &&
  FUNC_1(VAR_1) >= VAR_0 + VAR_2 &&
  ((char*)FUNC_0(VAR_1))[VAR_0-1] == 0;
}
