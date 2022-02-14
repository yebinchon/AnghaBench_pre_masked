
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bindaddr_count; char** bindaddr; int neterr; int tcp_backlog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int,char*,int ) ;
 int FUNC_2 (int ,int,char*,int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 (int ,char*,char*,int,int ) ;
 scalar_t__ FUNC_4 (char*,char) ;

int FUNC_5(int VAR_5, int *VAR_6, int *VAR_7) {
    int VAR_8;



    if (VAR_4.bindaddr_count == 0) VAR_4.bindaddr[0] = ((void*)0);
    for (VAR_8 = 0; VAR_8 < VAR_4.bindaddr_count || VAR_8 == 0; VAR_8++) {
        if (VAR_4.bindaddr[VAR_8] == ((void*)0)) {


            VAR_6[*VAR_7] = FUNC_1(VAR_4.neterr,VAR_5,((void*)0),
                VAR_4.tcp_backlog);
            if (VAR_6[*VAR_7] != VAR_0) {
                FUNC_0(((void*)0),VAR_6[*VAR_7]);
                (*VAR_7)++;
            }
            VAR_6[*VAR_7] = FUNC_2(VAR_4.neterr,VAR_5,((void*)0),
                VAR_4.tcp_backlog);
            if (VAR_6[*VAR_7] != VAR_0) {
                FUNC_0(((void*)0),VAR_6[*VAR_7]);
                (*VAR_7)++;
            }



            if (*VAR_7) break;
        } else if (FUNC_4(VAR_4.bindaddr[VAR_8],':')) {

            VAR_6[*VAR_7] = FUNC_1(VAR_4.neterr,VAR_5,VAR_4.bindaddr[VAR_8],
                VAR_4.tcp_backlog);
        } else {

            VAR_6[*VAR_7] = FUNC_2(VAR_4.neterr,VAR_5,VAR_4.bindaddr[VAR_8],
                VAR_4.tcp_backlog);
        }
        if (VAR_6[*VAR_7] == VAR_0) {
            FUNC_3(VAR_3,
                "Creating Server TCP listening socket %s:%d: %s",
                VAR_4.bindaddr[VAR_8] ? VAR_4.bindaddr[VAR_8] : "*",
                VAR_5, VAR_4.neterr);
            return VAR_1;
        }
        FUNC_0(((void*)0),VAR_6[*VAR_7]);
        (*VAR_7)++;
    }
    return VAR_2;
}
