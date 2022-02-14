
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,int ) ;
 char* FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (char*,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct ifnet *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_0(VAR_1, VAR_0);
    if (VAR_2) {
 FUNC_3("bond over %s%d: ifnet_detach_protocol failed, %d\n",
        FUNC_1(VAR_1), FUNC_2(VAR_1), VAR_2);
    }
    return (VAR_2);
}
