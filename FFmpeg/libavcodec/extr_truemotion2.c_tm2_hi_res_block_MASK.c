
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ CD; } ;
typedef TYPE_1__ TM2Context ;
typedef int AVFrame ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,int*) ;

__attribute__((used)) static inline void FUNC_4(TM2Context *VAR_10, AVFrame *VAR_11, int VAR_12, int VAR_13)
{
    int VAR_14;
    int VAR_15[16];
    FUNC_1();


    for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
        VAR_15[VAR_14] = FUNC_0(VAR_10, VAR_0);
        VAR_15[VAR_14 + 4] = FUNC_0(VAR_10, VAR_0);
    }
    FUNC_3(VAR_2, VAR_3, VAR_8, VAR_10->CD, VAR_15);
    FUNC_3(VAR_4, VAR_5, VAR_8 + 2, VAR_10->CD + 2, VAR_15 + 4);


    for (VAR_14 = 0; VAR_14 < 16; VAR_14++)
        VAR_15[VAR_14] = FUNC_0(VAR_10, VAR_1);

    FUNC_2(VAR_10, VAR_6, VAR_7, VAR_15, VAR_9);
}
