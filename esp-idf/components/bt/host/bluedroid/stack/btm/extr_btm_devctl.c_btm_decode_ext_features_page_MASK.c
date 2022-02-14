
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {void* esco_supported; } ;
struct TYPE_4__ {int btm_acl_pkt_types_supported; int btm_sco_pkt_types_supported; int btm_def_link_policy; TYPE_1__ sco_cb; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 void* VAR_26 ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (int const*) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (int const*) ;
 int FUNC_13 (int const*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_14 (int const*) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;



 int FUNC_17 (int const*) ;
 int FUNC_18 (int const*) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (int const*) ;
 int FUNC_21 (int const*) ;
 int FUNC_22 (int const*) ;
 int FUNC_23 (int const*) ;
 int FUNC_24 (int const*) ;
 int FUNC_25 (int const*) ;
 int FUNC_26 (int const*) ;
 void* VAR_31 ;
 TYPE_2__ VAR_32 ;
 int FUNC_27 () ;
 int FUNC_28 (void*) ;

__attribute__((used)) static void FUNC_29 (UINT8 VAR_33, const UINT8 *VAR_34)
{
    FUNC_3 ("btm_decode_ext_features_page page: %d", VAR_33);
    switch (VAR_33) {

    case 130:


        VAR_32.btm_acl_pkt_types_supported = (VAR_0 +
                                              VAR_3);

        if (FUNC_7(VAR_34)) {
            VAR_32.btm_acl_pkt_types_supported |= (VAR_1 +
                                                   VAR_4);
        }

        if (FUNC_9(VAR_34)) {
            VAR_32.btm_acl_pkt_types_supported |= (VAR_2 +
                                                   VAR_5);
        }


        if (!FUNC_10(VAR_34)) {
            VAR_32.btm_acl_pkt_types_supported |= (VAR_6 +
                                                   VAR_7 +
                                                   VAR_8);
        }

        if (!FUNC_11(VAR_34)) {
            VAR_32.btm_acl_pkt_types_supported |= (VAR_9 +
                                                   VAR_10 +
                                                   VAR_11);
        }


        if (FUNC_10(VAR_34) ||
                FUNC_11(VAR_34)) {
            if (!FUNC_5(VAR_34)) {
                VAR_32.btm_acl_pkt_types_supported |= (VAR_7 +
                                                       VAR_10);
            }

            if (!FUNC_8(VAR_34)) {
                VAR_32.btm_acl_pkt_types_supported |= (VAR_8 +
                                                       VAR_11);
            }
        }

        FUNC_3("Local supported ACL packet types: 0x%04x",
                        VAR_32.btm_acl_pkt_types_supported);


        VAR_32.btm_sco_pkt_types_supported = 0;

        VAR_32.sco_cb.esco_supported = VAR_26;

        if (FUNC_24(VAR_34)) {
            VAR_32.btm_sco_pkt_types_supported = VAR_19;

            if (FUNC_19(VAR_34)) {
                VAR_32.btm_sco_pkt_types_supported |= VAR_20;
            }

            if (FUNC_20(VAR_34)) {
                VAR_32.btm_sco_pkt_types_supported |= VAR_21;
            }
        }

        if (FUNC_14(VAR_34)) {
            VAR_32.btm_sco_pkt_types_supported |= VAR_16;
        }

        if (FUNC_15(VAR_34)) {
            VAR_32.btm_sco_pkt_types_supported |= VAR_17;
        }

        if (FUNC_16(VAR_34)) {
            VAR_32.btm_sco_pkt_types_supported |= VAR_18;
        }

        if (VAR_32.btm_sco_pkt_types_supported & VAR_13) {
            VAR_32.sco_cb.esco_supported = VAR_31;


            if (FUNC_12(VAR_34)) {
                if (!FUNC_6(VAR_34)) {
                    VAR_32.btm_sco_pkt_types_supported |= VAR_23;
                }
            } else {
                VAR_32.btm_sco_pkt_types_supported |= (VAR_22 +
                                                       VAR_23);
            }

            if (FUNC_13(VAR_34)) {
                if (!FUNC_6(VAR_34)) {
                    VAR_32.btm_sco_pkt_types_supported |= VAR_25;
                }
            } else {
                VAR_32.btm_sco_pkt_types_supported |= (VAR_24 +
                                                       VAR_25);
            }
        }


        FUNC_3("Local supported SCO packet types: 0x%04x",
                        VAR_32.btm_sco_pkt_types_supported);


        if (FUNC_26(VAR_34)) {
            VAR_32.btm_def_link_policy |= VAR_28;
        } else {
            VAR_32.btm_def_link_policy &= ~VAR_28;
        }

        if (FUNC_18(VAR_34)) {
            VAR_32.btm_def_link_policy |= VAR_27;
        } else {
            VAR_32.btm_def_link_policy &= ~VAR_27;
        }

        if (FUNC_25(VAR_34)) {
            VAR_32.btm_def_link_policy |= VAR_30;
        } else {
            VAR_32.btm_def_link_policy &= ~VAR_30;
        }

        if (FUNC_23(VAR_34)) {
            VAR_32.btm_def_link_policy |= VAR_29;
        } else {
            VAR_32.btm_def_link_policy &= ~VAR_29;
        }

        FUNC_27 ();

        if (FUNC_21(VAR_34)) {
            if (FUNC_17(VAR_34)) {
                FUNC_0 (VAR_14);
            } else {
                FUNC_0 (VAR_15);
            }
        }


        if ( FUNC_22(VAR_34)) {
            FUNC_28(VAR_31);
        } else {
            FUNC_28(VAR_26);
        }

        FUNC_2 (VAR_12);
        FUNC_1 (VAR_12);

        break;


    case 129:

        break;


    case 128:

        break;

    default:
        FUNC_4("btm_decode_ext_features_page page=%d unknown", VAR_33);
        break;
    }
}
