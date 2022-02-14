
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {scalar_t__ sopt_dir; int sopt_name; int sopt_p; } ;
struct dn_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dn_pipe*) ;
 int FUNC_1 (struct sockopt*,struct dn_pipe*) ;
 int FUNC_2 (struct sockopt*,struct dn_pipe*) ;
 int FUNC_3 (struct dn_pipe*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct sockopt*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_8(struct sockopt *VAR_4)
{
    int VAR_5 = 0 ;
    struct dn_pipe *VAR_6, VAR_7;


    if (VAR_4->sopt_dir == VAR_2 && VAR_3 >= 3)
 return (VAR_1);

    switch (VAR_4->sopt_name) {
    default :
 FUNC_6("dummynet: -- unknown option %d", VAR_4->sopt_name);
 return VAR_0 ;

    case 128 :
 VAR_5 = FUNC_5(VAR_4);
 break ;

    case 129 :
 FUNC_4() ;
 break ;

    case 131 :
 VAR_6 = &VAR_7 ;
 if (FUNC_7(VAR_4->sopt_p))
  VAR_5 = FUNC_2( VAR_4, VAR_6 );
 else
  VAR_5 = FUNC_1( VAR_4, VAR_6 );

 if (VAR_5)
     break ;
 VAR_5 = FUNC_0(VAR_6);
 break ;

    case 130 :
 VAR_6 = &VAR_7 ;
 if (FUNC_7(VAR_4->sopt_p))
  VAR_5 = FUNC_2( VAR_4, VAR_6 );
 else
  VAR_5 = FUNC_1( VAR_4, VAR_6 );
 if (VAR_5)
     break ;

 VAR_5 = FUNC_3(VAR_6);
 break ;
    }
    return VAR_5 ;
}
