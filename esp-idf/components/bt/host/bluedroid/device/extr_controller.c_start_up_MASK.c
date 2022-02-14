
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_9__ {int as_array; } ;
struct TYPE_11__ {scalar_t__ acl_data_size_classic; scalar_t__ last_features_classic_page_index; int simple_pairing_supported; int ble_supported; scalar_t__ acl_data_size_ble; int readable; TYPE_1__* packet_parser; TYPE_2__* packet_factory; int ble_suggested_default_data_txtime; int ble_suggested_default_data_length; TYPE_3__ features_ble; int ble_resolving_list_max_size; int ble_supported_states; int acl_buffer_count_ble; int ble_white_list_size; TYPE_4__* features_classic; scalar_t__ secure_connections_supported; int supported_commands; int address; int bt_version; int sco_buffer_count; int sco_data_size; int acl_buffer_count_classic; } ;
struct TYPE_10__ {int as_array; } ;
struct TYPE_8__ {int (* make_write_default_erroneous_data_report ) (int) ;int (* make_write_sync_flow_control_enable ) (int) ;int (* make_set_event_mask ) (int *) ;int (* make_ble_set_event_mask ) (int *) ;int (* make_ble_read_suggested_default_data_length ) () ;int (* make_ble_write_suggested_default_data_length ) (int ,int ) ;int (* make_ble_read_resolving_list_size ) () ;int (* make_ble_read_local_supported_features ) () ;int (* make_ble_read_supported_states ) () ;int (* make_ble_read_buffer_size ) () ;int (* make_ble_read_white_list_size ) () ;int (* make_write_secure_connections_host_support ) (int ) ;int (* make_read_local_extended_features ) (scalar_t__) ;int (* make_ble_write_host_support ) (int ,scalar_t__) ;int (* make_write_simple_pairing_mode ) (int ) ;int (* make_read_local_supported_commands ) () ;int (* make_read_bd_addr ) () ;int (* make_read_local_version_info ) () ;int (* make_host_buffer_size ) (int ,int ,int ,int) ;int (* make_set_adv_report_flow_control ) (int ,int ,int ) ;int (* make_set_c2h_flow_control ) (int ) ;int (* make_read_buffer_size ) () ;int (* make_reset ) () ;} ;
struct TYPE_7__ {int (* parse_generic_command_complete ) (int *) ;int (* parse_ble_read_suggested_default_data_length_response ) (int *,int *,int *) ;int (* parse_ble_read_resolving_list_size_response ) (int *,int *) ;int (* parse_ble_read_local_supported_features_response ) (int *,TYPE_3__*) ;int (* parse_ble_read_supported_states_response ) (int *,int ,int) ;int (* parse_ble_read_buffer_size_response ) (int *,scalar_t__*,int *) ;int (* parse_ble_read_white_list_size_response ) (int *,int *) ;int (* parse_read_local_extended_features_response ) (int *,scalar_t__*,scalar_t__*,TYPE_4__*,scalar_t__) ;int (* parse_read_local_supported_commands_response ) (int *,int ,int ) ;int (* parse_read_bd_addr_response ) (int *,int *) ;int (* parse_read_local_version_info_response ) (int *,int *) ;int (* parse_read_buffer_size_response ) (int *,scalar_t__*,int *,int *,int *) ;} ;
typedef int BT_HDR ;


 int * FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int) ;
 TYPE_6__ VAR_17 ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 () ;
 int FUNC_16 (int *,int ,int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int *,scalar_t__*,scalar_t__*,TYPE_4__*,scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ,scalar_t__) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (int *,scalar_t__*,scalar_t__*,TYPE_4__*,scalar_t__) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 () ;
 int FUNC_29 (int *,int *) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 (int *,scalar_t__*,int *) ;
 int FUNC_33 () ;
 int FUNC_34 (int *,int ,int) ;
 int FUNC_35 () ;
 int FUNC_36 (int *,TYPE_3__*) ;
 int FUNC_37 () ;
 int FUNC_38 (int *,int *) ;
 int FUNC_39 (int ,int ) ;
 int FUNC_40 (int *) ;
 int FUNC_41 () ;
 int FUNC_42 (int *,scalar_t__*,int *,int *,int *) ;
 int FUNC_43 (int *,int *,int *) ;
 int FUNC_44 (int *) ;
 int FUNC_45 (int *) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (int *) ;
 int FUNC_48 (int) ;
 int FUNC_49 (int *) ;
 int FUNC_50 (int) ;
 int FUNC_51 (int *) ;
 int FUNC_52 (int ) ;
 int FUNC_53 (int *) ;
 int FUNC_54 (int ,int ,int ) ;
 int FUNC_55 (int *) ;
 int FUNC_56 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_57(void)
{
    BT_HDR *VAR_18;


    VAR_18 = FUNC_0(VAR_17.packet_factory->make_reset());
    VAR_17.packet_parser->parse_generic_command_complete(VAR_18);


    VAR_18 = FUNC_0(VAR_17.packet_factory->make_read_buffer_size());
    VAR_17.packet_parser->parse_read_buffer_size_response(
        VAR_18, &VAR_17.acl_data_size_classic, &VAR_17.acl_buffer_count_classic,
        &VAR_17.sco_data_size, &VAR_17.sco_buffer_count);



    VAR_18 = FUNC_0(VAR_17.packet_factory->make_set_c2h_flow_control(VAR_8));
    VAR_17.packet_parser->parse_generic_command_complete(VAR_18);



    VAR_18 = FUNC_0(VAR_17.packet_factory->make_set_adv_report_flow_control(VAR_9, (uint16_t)VAR_1, (uint16_t)VAR_0));
    VAR_17.packet_parser->parse_generic_command_complete(VAR_18);



    VAR_18 = FUNC_0(
                   VAR_17.packet_factory->make_host_buffer_size(
                       VAR_14,
                       VAR_16,
                       VAR_13,
                       10
                   )
               );

    VAR_17.packet_parser->parse_generic_command_complete(VAR_18);



    VAR_18 = FUNC_0(VAR_17.packet_factory->make_read_local_version_info());
    VAR_17.packet_parser->parse_read_local_version_info_response(VAR_18, &VAR_17.bt_version);


    VAR_18 = FUNC_0(VAR_17.packet_factory->make_read_bd_addr());
    VAR_17.packet_parser->parse_read_bd_addr_response(VAR_18, &VAR_17.address);


    VAR_18 = FUNC_0(VAR_17.packet_factory->make_read_local_supported_commands());
    VAR_17.packet_parser->parse_read_local_supported_commands_response(
        VAR_18,
        VAR_17.supported_commands,
        VAR_12
    );


    uint8_t VAR_19 = 0;
    VAR_18 = FUNC_0(VAR_17.packet_factory->make_read_local_extended_features(VAR_19));
    VAR_17.packet_parser->parse_read_local_extended_features_response(
        VAR_18,
        &VAR_19,
        &VAR_17.last_features_classic_page_index,
        VAR_17.features_classic,
        VAR_15
    );

    FUNC_8(VAR_19 == 0);
    VAR_19++;






    VAR_17.simple_pairing_supported = FUNC_6(VAR_17.features_classic[0].as_array);




    if (VAR_17.simple_pairing_supported) {
        VAR_18 = FUNC_0(VAR_17.packet_factory->make_write_simple_pairing_mode(VAR_11));
        VAR_17.packet_parser->parse_generic_command_complete(VAR_18);
    }


    if (FUNC_4(VAR_17.features_classic[0].as_array)) {
        uint8_t VAR_20 = FUNC_7(VAR_17.features_classic[0].as_array) ? VAR_6 : 0;
        VAR_18 = FUNC_0(
                       VAR_17.packet_factory->make_ble_write_host_support(VAR_5, VAR_20)
                   );

        VAR_17.packet_parser->parse_generic_command_complete(VAR_18);
    }




    while (VAR_19 <= VAR_17.last_features_classic_page_index &&
            VAR_19 < VAR_15) {
        VAR_18 = FUNC_0(VAR_17.packet_factory->make_read_local_extended_features(VAR_19));
        VAR_17.packet_parser->parse_read_local_extended_features_response(
            VAR_18,
            &VAR_19,
            &VAR_17.last_features_classic_page_index,
            VAR_17.features_classic,
            VAR_15
        );

        VAR_19++;
    }


    VAR_17.secure_connections_supported = FUNC_5(VAR_17.features_classic[2].as_array);
    if (VAR_17.secure_connections_supported) {
        VAR_18 = FUNC_0(VAR_17.packet_factory->make_write_secure_connections_host_support(VAR_10));
        VAR_17.packet_parser->parse_generic_command_complete(VAR_18);
    }



    VAR_17.ble_supported = VAR_17.last_features_classic_page_index >= 1 && FUNC_3(VAR_17.features_classic[1].as_array);
    if (VAR_17.ble_supported) {

        VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_read_white_list_size());
        VAR_17.packet_parser->parse_ble_read_white_list_size_response(VAR_18, &VAR_17.ble_white_list_size);


        VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_read_buffer_size());
        VAR_17.packet_parser->parse_ble_read_buffer_size_response(
            VAR_18,
            &VAR_17.acl_data_size_ble,
            &VAR_17.acl_buffer_count_ble
        );


        if (VAR_17.acl_data_size_ble == 0) {
            VAR_17.acl_data_size_ble = VAR_17.acl_data_size_classic;
        }


        VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_read_supported_states());
        VAR_17.packet_parser->parse_ble_read_supported_states_response(
            VAR_18,
            VAR_17.ble_supported_states,
            sizeof(VAR_17.ble_supported_states)
        );


        VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_read_local_supported_features());
        VAR_17.packet_parser->parse_ble_read_local_supported_features_response(
            VAR_18,
            &VAR_17.features_ble
        );

        if (FUNC_2(VAR_17.features_ble.as_array)) {
            VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_read_resolving_list_size());
            VAR_17.packet_parser->parse_ble_read_resolving_list_size_response(
                VAR_18,
                &VAR_17.ble_resolving_list_max_size);
        }

        if (FUNC_1(VAR_17.features_ble.as_array)) {

            VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_write_suggested_default_data_length(VAR_3, VAR_4));
            VAR_17.packet_parser->parse_generic_command_complete(VAR_18);

            VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_read_suggested_default_data_length());
            VAR_17.packet_parser->parse_ble_read_suggested_default_data_length_response(
                VAR_18,
                &VAR_17.ble_suggested_default_data_length,
                &VAR_17.ble_suggested_default_data_txtime);
        }


        VAR_18 = FUNC_0(VAR_17.packet_factory->make_ble_set_event_mask(&VAR_2));
        VAR_17.packet_parser->parse_generic_command_complete(VAR_18);
    }


    VAR_18 = FUNC_0(VAR_17.packet_factory->make_set_event_mask(&VAR_7));
    VAR_17.packet_parser->parse_generic_command_complete(VAR_18);


    VAR_18 = FUNC_0(VAR_17.packet_factory->make_write_sync_flow_control_enable(1));
    VAR_17.packet_parser->parse_generic_command_complete(VAR_18);

    VAR_18 = FUNC_0(VAR_17.packet_factory->make_write_default_erroneous_data_report(1));
    VAR_17.packet_parser->parse_generic_command_complete(VAR_18);

    VAR_17.readable = 1;

    return;
}
