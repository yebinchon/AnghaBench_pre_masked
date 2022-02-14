
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int trans_start; } ;
struct lance_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lance_private*,int ) ;
 int FUNC_1 (struct lance_private*,int ) ;
 int FUNC_2 (struct lance_private*) ;
 int VAR_2 ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct lance_private*) ;
 struct lance_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static int FUNC_7 (struct net_device *VAR_3)
{
        struct lance_private *VAR_4 = FUNC_5(VAR_3);
        int VAR_5;


        FUNC_0(VAR_4, VAR_1);
        FUNC_1(VAR_4, VAR_0);

        FUNC_4 (VAR_4);
        FUNC_3 (VAR_3);
        VAR_3->trans_start = VAR_2;
        VAR_5 = FUNC_2 (VAR_4);



        return VAR_5;
}
