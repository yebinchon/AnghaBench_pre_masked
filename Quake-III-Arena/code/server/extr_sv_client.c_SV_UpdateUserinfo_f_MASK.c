
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int userinfo; } ;
typedef TYPE_1__ client_t ;
struct TYPE_7__ {int clients; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_4( client_t *VAR_3 ) {
 FUNC_1( VAR_3->userinfo, FUNC_0(1), sizeof(VAR_3->userinfo) );

 FUNC_2( VAR_3 );

 FUNC_3( VAR_1, VAR_0, VAR_3 - VAR_2.clients );
}
