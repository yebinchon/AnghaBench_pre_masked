
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sa_family; } ;
union sockaddr_union {TYPE_1__ sa; } ;
typedef int socklen_t ;
typedef int sockaddr ;
typedef int sa_family_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,TYPE_1__*,int*) ;
 int FUNC_1 (union sockaddr_union*,int ,int) ;
 int FUNC_2 (int,int,int) ;

int FUNC_3(int VAR_2, int VAR_3, int VAR_4, int VAR_5) {
        int VAR_6;

        if (VAR_3 < 0)
                return -VAR_0;

        if ((VAR_6 = FUNC_2(VAR_2, VAR_4, VAR_5)) <= 0)
                return VAR_6;

        if (VAR_3 > 0) {
                union sockaddr_union VAR_7;
                socklen_t VAR_8;

                FUNC_1(&VAR_7, 0, sizeof(VAR_7));
                VAR_8 = sizeof(VAR_7);

                if (FUNC_0(VAR_2, &VAR_7.sa, &VAR_8) < 0)
                        return -VAR_1;

                if (VAR_8 < sizeof(sa_family_t))
                        return -VAR_0;

                return VAR_7.sa.sa_family == VAR_3;
        }

        return 1;
}
