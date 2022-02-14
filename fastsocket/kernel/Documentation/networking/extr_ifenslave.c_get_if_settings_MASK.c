
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dev_ifr {int req_name; TYPE_1__* req_ifr; int req_type; } ;
struct TYPE_2__ {int ifr_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_4, struct dev_ifr VAR_5[])
{
 int VAR_6;
 int VAR_7 = 0;

 for (VAR_6 = 0; VAR_5[VAR_6].req_ifr; VAR_6++) {
  FUNC_2(VAR_5[VAR_6].req_ifr->ifr_name, VAR_4, VAR_0);
  VAR_7 = FUNC_0(VAR_3, VAR_5[VAR_6].req_type, VAR_5[VAR_6].req_ifr);
  if (VAR_7 < 0) {
   VAR_2 = VAR_1;
   FUNC_3("Interface '%s': Error: %s failed: %s\n",
    VAR_4, VAR_5[VAR_6].req_name,
    FUNC_1(VAR_2));

   return VAR_2;
  }
 }

 return 0;
}
