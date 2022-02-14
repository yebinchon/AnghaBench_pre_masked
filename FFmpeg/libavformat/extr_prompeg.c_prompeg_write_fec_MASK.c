
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {TYPE_3__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_9__ {int l; scalar_t__ d; int rtp_buf_size; TYPE_1__* fec_row_hd; TYPE_1__* fec_col_hd; int length_recovery; int rtp_row_sn; int rtp_col_sn; scalar_t__* rtp_buf; } ;
struct TYPE_8__ {int sn; int ts; scalar_t__* bitstring; } ;
typedef TYPE_2__ PrompegFec ;
typedef TYPE_3__ PrompegContext ;


 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_4(URLContext *VAR_2, PrompegFec *VAR_3, uint8_t VAR_4) {
    PrompegContext *VAR_5 = VAR_2->priv_data;
    URLContext *VAR_6;
    uint8_t *VAR_7 = VAR_5->rtp_buf;
    uint8_t *VAR_8 = VAR_3->bitstring;
    uint16_t VAR_9;
    int VAR_10;

    VAR_9 = VAR_4 == VAR_0 ? ++VAR_5->rtp_col_sn : ++VAR_5->rtp_row_sn;


    VAR_7[0] = 0x80 | (VAR_8[0] & 0x3f);

    VAR_7[1] = (VAR_8[1] & 0x80) | VAR_1;

    FUNC_0(VAR_7 + 2, VAR_9);

    FUNC_1(VAR_7 + 4, VAR_3->ts);



    FUNC_0(VAR_7 + 12, VAR_3->sn);

    VAR_7[14] = VAR_8[6];
    VAR_7[15] = VAR_8[7];

    VAR_7[16] = 0x80 | VAR_8[1];





    VAR_7[20] = VAR_8[2];
    VAR_7[21] = VAR_8[3];
    VAR_7[22] = VAR_8[4];
    VAR_7[23] = VAR_8[5];

    VAR_7[24] = VAR_4 == VAR_0 ? 0x0 : 0x40;

    VAR_7[25] = VAR_4 == VAR_0 ? VAR_5->l : 0x1;

    VAR_7[26] = VAR_4 == VAR_0 ? VAR_5->d : VAR_5->l;



    FUNC_3(VAR_7 + 28, VAR_8 + 8, VAR_5->length_recovery);

    VAR_6 = VAR_4 == VAR_0 ? VAR_5->fec_col_hd : VAR_5->fec_row_hd;
    VAR_10 = FUNC_2(VAR_6, VAR_7, VAR_5->rtp_buf_size);
    return VAR_10;
}
