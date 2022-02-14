
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ brdtype; int short_name; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int ) ;

__attribute__((used)) static inline void FUNC_1(u32 VAR_2, char *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (VAR_1[VAR_4].brdtype == VAR_2) {
   FUNC_0(VAR_3, VAR_1[VAR_4].short_name);
   VAR_5 = 1;
   break;
  }

 }
 if (!VAR_5)
  VAR_3 = "Unknown";
}
