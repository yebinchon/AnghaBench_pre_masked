
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int packetsize; int hb_stream_type; int file_handle; } ;
typedef TYPE_1__ hb_stream_t ;
typedef int buf ;


 int FUNC_0 (int *,int,int,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(hb_stream_t *VAR_2)
{
    uint8_t VAR_3[2048*4];

    if ( FUNC_0(VAR_3, 1, sizeof(VAR_3), VAR_2->file_handle) == sizeof(VAR_3) )
    {
        int VAR_4;
        if ( ( VAR_4 = FUNC_4(VAR_3) ) != 0 )
        {
            int VAR_5 = VAR_4 >> 8;
            VAR_4 &= 0xff;
            FUNC_1("file is MPEG Transport Stream with %d byte packets"
                   " offset %d bytes", VAR_4, VAR_5);
            VAR_2->packetsize = VAR_4;
            VAR_2->hb_stream_type = VAR_1;
            if (FUNC_5(VAR_2) == 0)
                return 1;
        }
        else if ( FUNC_3(VAR_2) != 0 )
        {
            FUNC_1("file is MPEG Program Stream");
            VAR_2->hb_stream_type = VAR_0;
            FUNC_2(VAR_2);


            return 1;
        }
    }
    return 0;
}
