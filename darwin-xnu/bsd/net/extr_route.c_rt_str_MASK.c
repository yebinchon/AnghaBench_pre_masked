
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rtentry {int dummy; } ;
struct TYPE_2__ {int sa_family; } ;




 int FUNC_0 (char*,int ) ;
 TYPE_1__* FUNC_1 (struct rtentry*) ;
 int FUNC_2 (struct rtentry*,char*,int ,char*,int ) ;
 int FUNC_3 (struct rtentry*,char*,int ,char*,int ) ;

void
FUNC_4(struct rtentry *VAR_0, char *VAR_1, uint32_t VAR_2, char *VAR_3, uint32_t VAR_4)
{
 switch (FUNC_1(VAR_0)->sa_family) {
 case 129:
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  break;





 default:
  if (VAR_1 != ((void*)0))
   FUNC_0(VAR_1, VAR_2);
  if (VAR_3 != ((void*)0))
   FUNC_0(VAR_3, VAR_4);
  break;
 }
}
