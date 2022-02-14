
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int,int*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int) ;

void FUNC_4(zdev_t* VAR_0, zbuf_t *VAR_1) {
    u16_t VAR_2, VAR_3;
    u8_t VAR_4, VAR_5[8];
    VAR_3 = FUNC_2(VAR_0, VAR_1);
    VAR_2 = FUNC_3(VAR_0, VAR_1, VAR_3-2);
    FUNC_0("Received a BAR Control frame, start_seq=%d", VAR_2>>4);

    for (VAR_4=0; VAR_4<8; VAR_4++) VAR_5[VAR_4]=0;
    FUNC_1(VAR_0, VAR_2, VAR_5);
}
