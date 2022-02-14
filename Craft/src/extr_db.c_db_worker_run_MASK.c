
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int key; int q; int p; int w; int z; int y; int x; } ;
typedef TYPE_1__ RingEntry ;







 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (int *,TYPE_1__*) ;

int FUNC_8(void *VAR_3) {
    int VAR_4 = 1;
    while (VAR_4) {
        RingEntry VAR_5;
        FUNC_5(&VAR_1);
        while (!FUNC_7(&VAR_2, &VAR_5)) {
            FUNC_4(&VAR_0, &VAR_1);
        }
        FUNC_6(&VAR_1);
        switch (VAR_5.type) {
            case 132:
                FUNC_1(VAR_5.p, VAR_5.q, VAR_5.x, VAR_5.y, VAR_5.z, VAR_5.w);
                break;
            case 128:
                FUNC_2(VAR_5.p, VAR_5.q, VAR_5.x, VAR_5.y, VAR_5.z, VAR_5.w);
                break;
            case 129:
                FUNC_3(VAR_5.p, VAR_5.q, VAR_5.key);
                break;
            case 131:
                FUNC_0();
                break;
            case 130:
                VAR_4 = 0;
                break;
        }
    }
    return 0;
}
