
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int const* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const u16 VAR_1) {
 return VAR_1 > 0xff || (( VAR_0[VAR_1>>5] >> (VAR_1 & 0x1F) ) & 1);
}
