
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
typedef int sdmmc_card_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,size_t const,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,int,scalar_t__,int *,size_t const) ;

__attribute__((used)) static void FUNC_6(sdmmc_card_t* VAR_3)
{
    FUNC_4("Test block write using CMD53\n");
    const size_t VAR_4 = 512;
    uint8_t* VAR_5 = FUNC_3(1, VAR_4, VAR_1);
    struct sip_cmd_bootup {
            uint32_t boot_addr;
            uint32_t discard_link;
    };
    struct sip_cmd_write_reg {
            uint32_t addr;
            uint32_t val;
    };
    struct sip_hdr {
            uint8_t fc[2];
            uint16_t len;
            uint32_t cmdid;
            uint32_t seq;
    };

    struct sip_hdr* VAR_6 = (struct sip_hdr*) VAR_5;
    size_t VAR_7;




    struct sip_cmd_write_reg *VAR_8 = (struct sip_cmd_write_reg*) (VAR_5 + sizeof(*VAR_6));
    VAR_7 = sizeof(*VAR_6) + sizeof(*VAR_8);
    VAR_6->cmdid = 3;
    VAR_8->addr = VAR_0;
    VAR_8->val = FUNC_0(0) | FUNC_0(2) | FUNC_0(4);







    VAR_6->len = VAR_7;

    FUNC_1( FUNC_5(VAR_3, 1, VAR_2 - VAR_7, VAR_5, VAR_4) );
    FUNC_2(VAR_5);
}
