
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct peer {int conn_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct peer*,int ) ;
 int FUNC_1 (struct peer*,int ,int) ;
 int VAR_2 ;
 struct peer* FUNC_2 (int *) ;
 struct peer* FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_4(uint16_t VAR_5)
{
    struct peer *VAR_6;


    VAR_6 = FUNC_3(VAR_5);
    if (VAR_6 != ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = FUNC_2(&VAR_3);
    if (VAR_6 == ((void*)0)) {

        return VAR_1;
    }

    FUNC_1(VAR_6, 0, sizeof * VAR_6);
    VAR_6->conn_handle = VAR_5;

    FUNC_0(&VAR_4, VAR_6, VAR_2);

    return 0;
}
