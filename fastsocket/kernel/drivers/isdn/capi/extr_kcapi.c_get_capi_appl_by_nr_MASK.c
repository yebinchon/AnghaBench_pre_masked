
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct capi20_appl {int dummy; } ;


 int VAR_0 ;
 struct capi20_appl** VAR_1 ;

__attribute__((used)) static inline struct capi20_appl *FUNC_0(u16 VAR_2)
{
 if (VAR_2 - 1 >= VAR_0)
  return ((void*)0);

 return VAR_1[VAR_2 - 1];
}
