
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int sopt_name; int sopt_valsize; int sopt_val; } ;
struct socket {int dummy; } ;
struct ndrv_cb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct ndrv_cb*) ;
 int FUNC_2 (struct ndrv_cb*,struct sockopt*) ;
 int FUNC_3 (struct ndrv_cb*,struct sockopt*) ;
 int FUNC_4 (struct ndrv_cb*,struct sockopt*) ;
 struct ndrv_cb* FUNC_5 (struct socket*) ;

__attribute__((used)) static int
FUNC_6(struct socket *VAR_3, struct sockopt *VAR_4)
{
    struct ndrv_cb *VAR_5 = FUNC_5(VAR_3);
 int VAR_6 = 0;

    switch(VAR_4->sopt_name)
    {
        case 130:

            if (VAR_4->sopt_val != 0 || VAR_4->sopt_valsize != 0) {




                return VAR_0;
            }
            VAR_6 = FUNC_1(VAR_5);
            break;
        case 128:
            VAR_6 = FUNC_4(VAR_5, VAR_4);
            break;
        case 131:
            VAR_6 = FUNC_2(VAR_5, VAR_4);
            break;
        case 129:
            VAR_6 = FUNC_3(VAR_5, VAR_4);
            break;
        default:
            VAR_6 = VAR_1;
    }




 return(VAR_6);
}
