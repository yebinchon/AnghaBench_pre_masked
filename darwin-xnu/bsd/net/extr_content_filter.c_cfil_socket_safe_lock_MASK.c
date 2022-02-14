
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct inpcb*,int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static bool
FUNC_3(struct inpcb *VAR_3)
{
    if (FUNC_0(VAR_3, VAR_0, 0) != VAR_2) {
        FUNC_1(VAR_3->inp_socket, 1);
        if (FUNC_0(VAR_3, VAR_1, 1) != VAR_2) {
            return 1;
        }
        FUNC_2(VAR_3->inp_socket, 1);
    }
    return 0;
}
