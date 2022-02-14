
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct pbuf {scalar_t__ payload; } ;
typedef int ledPacket_type ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int *,scalar_t__,int,int ,int ) ;
 struct pbuf* FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct pbuf*) ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (int ,struct pbuf*,int *,int) ;

__attribute__((used)) static void FUNC_6() {
    int VAR_16, VAR_17;
    ledPacket_type VAR_18;
    struct pbuf *VAR_19;
    bool VAR_20 = 0;

    if(VAR_14 == VAR_8)
        return;

    VAR_19 = FUNC_3(VAR_7, 196*3*3/2+4, VAR_6);

    VAR_17 = 0;
    VAR_16 = 0;
    do {
        VAR_20 = 0;
        VAR_20 |= FUNC_2(&VAR_18, VAR_19->payload+4, VAR_16, VAR_10, VAR_3);
        VAR_20 |= FUNC_2(&VAR_18, VAR_19->payload+4, VAR_16, VAR_9, VAR_2);
        VAR_20 |= FUNC_2(&VAR_18, VAR_19->payload+4, VAR_16, VAR_12, VAR_5);
        VAR_20 |= FUNC_2(&VAR_18, VAR_19->payload+4, VAR_16, VAR_11, VAR_4);
        if(VAR_20 != 0) {
            ((uint8_t*)VAR_19->payload)[0] = 0x23;
            ((uint8_t*)VAR_19->payload)[1] = VAR_16;
            if( FUNC_5(VAR_13, VAR_19, &VAR_15, 27482) != VAR_0 ) {
                FUNC_0(100);
                FUNC_1(VAR_1);
                continue;
            }
            FUNC_0(20);
            FUNC_1(VAR_1);
            VAR_16++;
            VAR_17 = 0;
        } else {
            if(VAR_17++ > 4)
                break;
        }
    } while(VAR_16 < 65);


    FUNC_4(VAR_19);
}
