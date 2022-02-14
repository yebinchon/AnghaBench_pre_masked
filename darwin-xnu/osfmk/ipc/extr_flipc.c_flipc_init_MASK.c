
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flipc_port {int dummy; } ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int,char*) ;
 int FUNC_1 (int ,int ,int ) ;

kern_return_t
FUNC_2(void)
{



    VAR_5 = FUNC_0(sizeof(struct flipc_port),
                            (VAR_6>>4) * sizeof(struct flipc_port),
                            sizeof(struct flipc_port),
                            "flipc ports");

    FUNC_1(VAR_5, VAR_3, VAR_0);
    FUNC_1(VAR_5, VAR_4, VAR_2);
    return VAR_1;
}
