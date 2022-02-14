
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct port {int dummy; } ;
struct bonding {int dummy; } ;
struct TYPE_2__ {int agg_select_mode; } ;


 TYPE_1__ FUNC_0 (struct bonding*) ;
 int VAR_0 ;
 struct bonding* FUNC_1 (struct port*) ;

__attribute__((used)) static inline u32 FUNC_2(struct port *VAR_1)
{
 struct bonding *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2 == ((void*)0)) {
  return VAR_0;
 }

 return FUNC_0(VAR_2).agg_select_mode;
}
