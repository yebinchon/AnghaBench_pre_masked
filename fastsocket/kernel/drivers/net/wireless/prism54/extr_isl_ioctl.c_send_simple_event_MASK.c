
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* pointer; int length; } ;
union iwreq_data {TYPE_1__ data; } ;
struct TYPE_5__ {int ndev; } ;
typedef TYPE_2__ islpci_private ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ,int ,union iwreq_data*,char*) ;

__attribute__((used)) static void
FUNC_6(islpci_private *VAR_3, const char *VAR_4)
{
 union iwreq_data VAR_5;
 char *VAR_6;
 int VAR_7 = FUNC_4(VAR_4);

 VAR_6 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_6)
  return;
 FUNC_0(VAR_7 > VAR_2);
 VAR_5.data.pointer = VAR_6;
 VAR_5.data.length = VAR_7;
 FUNC_3(VAR_6, VAR_4);
 FUNC_5(VAR_3->ndev, VAR_1, &VAR_5, VAR_6);
 FUNC_1(VAR_6);
}
