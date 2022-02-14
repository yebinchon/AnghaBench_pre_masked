
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t min_minor_ver; int dhm_min_bitlen; int curve_list; int sig_hashes; int * cert_profile; int * ciphersuite_list; void* max_minor_ver; void* max_major_ver; void* min_major_ver; scalar_t__ renego_period; int renego_max_records; int hs_timeout_max; int hs_timeout_min; int cert_req_ca_list; int anti_replay; int f_cookie_check; int f_cookie_write; int cbc_record_splitting; int extended_ms; int encrypt_then_mac; int arc4_disabled; int session_tickets; int authmode; } ;
typedef TYPE_1__ mbedtls_ssl_config ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;

 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 () ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_5 (scalar_t__,int,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;

int FUNC_6( mbedtls_ssl_config *VAR_31,
                                 int VAR_32, int VAR_33, int VAR_34 )
{






    FUNC_2( VAR_31, VAR_32 );
    FUNC_3( VAR_31, VAR_33 );
    switch( VAR_34 )
    {



        case 128:
            VAR_31->min_major_ver = VAR_12;
            VAR_31->min_minor_ver = VAR_18;
            VAR_31->max_major_ver = VAR_13;
            VAR_31->max_minor_ver = VAR_14;

            VAR_31->ciphersuite_list[VAR_15] =
            VAR_31->ciphersuite_list[VAR_16] =
            VAR_31->ciphersuite_list[VAR_17] =
            VAR_31->ciphersuite_list[VAR_18] =
                                   VAR_28;
            break;




        default:
            VAR_31->min_major_ver = VAR_12;
            VAR_31->min_minor_ver = VAR_16;
            VAR_31->max_major_ver = VAR_13;
            VAR_31->max_minor_ver = VAR_14;






            VAR_31->ciphersuite_list[VAR_15] =
            VAR_31->ciphersuite_list[VAR_16] =
            VAR_31->ciphersuite_list[VAR_17] =
            VAR_31->ciphersuite_list[VAR_18] =
                                   FUNC_4();
    }

    return( 0 );
}
