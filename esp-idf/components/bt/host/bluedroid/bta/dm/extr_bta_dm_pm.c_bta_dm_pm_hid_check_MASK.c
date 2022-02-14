
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int count; TYPE_1__* conn_srvc; } ;
struct TYPE_3__ {scalar_t__ id; int peer_bdaddr; int state; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(BOOLEAN VAR_4)
{
    int VAR_5;


    for (VAR_5 = 0; VAR_5 < VAR_3.count ; VAR_5++) {

        if (VAR_3.conn_srvc[VAR_5].id == VAR_2 ) {
            FUNC_0 ("SCO status change(Active: %d), modify HID link policy. state: %d",
                              VAR_4, VAR_3.conn_srvc[VAR_5].state);
            FUNC_3( FUNC_1(VAR_3.conn_srvc[VAR_5].peer_bdaddr), VAR_4);


            if (!VAR_4) {
                FUNC_2(VAR_3.conn_srvc[VAR_5].peer_bdaddr, VAR_0,
                                   VAR_1);
            }
        }
    }

}
