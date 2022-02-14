
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rx_buffer ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int,char*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int const,char*,int,int ) ;
 int FUNC_4 (int const,char*,int,int ) ;

__attribute__((used)) static void FUNC_5(const int VAR_2)
{
    int VAR_3;
    char VAR_4[128];

    do {
        VAR_3 = FUNC_3(VAR_2, VAR_4, sizeof(VAR_4) - 1, 0);
        if (VAR_3 < 0) {
            FUNC_0(VAR_0, "Error occurred during receiving: errno %d", VAR_1);
        } else if (VAR_3 == 0) {
            FUNC_2(VAR_0, "Connection closed");
        } else {
            VAR_4[VAR_3] = 0;
            FUNC_1(VAR_0, "Received %d bytes: %s", VAR_3, VAR_4);



            int VAR_5 = VAR_3;
            while (VAR_5 > 0) {
                int VAR_6 = FUNC_4(VAR_2, VAR_4 + (VAR_3 - VAR_5), VAR_5, 0);
                if (VAR_6 < 0) {
                    FUNC_0(VAR_0, "Error occurred during sending: errno %d", VAR_1);
                }
                VAR_5 -= VAR_6;
            }
        }
    } while (VAR_3 > 0);
}
