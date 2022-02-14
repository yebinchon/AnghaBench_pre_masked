
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uart_select_notif_t ;
struct TYPE_3__ {int select_sem; int errorfds; int errorfds_orig; int writefds; int writefds_orig; int readfds; int readfds_orig; } ;
typedef TYPE_1__ uart_select_args_t ;
typedef int uart_port_t ;
typedef int BaseType_t ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;



 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static void FUNC_5(uart_port_t VAR_3, uart_select_notif_t VAR_4, BaseType_t *VAR_5)
{
    FUNC_3(&VAR_0);
    for (int VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
        uart_select_args_t *VAR_7 = VAR_2[VAR_6];
        if (VAR_7) {
            switch (VAR_4) {
                case 129:
                    if (FUNC_0(VAR_3, &VAR_7->readfds_orig)) {
                        FUNC_1(VAR_3, VAR_7->readfds);
                        FUNC_2(VAR_7->select_sem, VAR_5);
                    }
                    break;
                case 128:
                    if (FUNC_0(VAR_3, &VAR_7->writefds_orig)) {
                        FUNC_1(VAR_3, VAR_7->writefds);
                        FUNC_2(VAR_7->select_sem, VAR_5);
                    }
                    break;
                case 130:
                    if (FUNC_0(VAR_3, &VAR_7->errorfds_orig)) {
                        FUNC_1(VAR_3, VAR_7->errorfds);
                        FUNC_2(VAR_7->select_sem, VAR_5);
                    }
                    break;
            }
        }
    }
    FUNC_4(&VAR_0);
}
