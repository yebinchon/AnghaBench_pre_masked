
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ USHORT ;


 int FUNC_0 (int ,char*,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *,size_t,int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

__attribute__((used)) static void FUNC_5(size_t VAR_7)
{
    USHORT VAR_8;

    if (VAR_2) {
        if (VAR_7 > 0) {
            VAR_7 = (VAR_7 > VAR_0) ? VAR_0 : VAR_7;
            VAR_6 = ((VAR_6 + VAR_7) >= VAR_0) ? 0 : VAR_6;

            VAR_8 = FUNC_4(VAR_5, &VAR_4[VAR_6], VAR_7, VAR_3);
            for(USHORT VAR_9 = 0; VAR_9 < VAR_8; VAR_9++ ) {

                ( void )FUNC_1();
            }

            FUNC_3(VAR_5);



            (void)FUNC_2();

            FUNC_0(VAR_1, "Receive: %d(bytes in buffer)\n", (uint32_t)VAR_8);
        }
    }
}
