
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int pset_name; int* freq_list; int const freq_limit; int test_size; scalar_t__ dup; } ;
typedef TYPE_2__ spitest_param_set_t ;
struct TYPE_8__ {int data_received; int data_to_send; } ;
struct TYPE_10__ {TYPE_1__ slave_context; int * master_trans; int * slave_trans; } ;
typedef TYPE_3__ spitest_context_t ;
typedef int spi_transaction_t ;
typedef int slave_rxdata_t ;


 int FUNC_0 (int ,char*,int const) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int,int *,int *,int const,int const,int) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int const,TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ,int *,int ) ;
 int * FUNC_14 (int ,size_t*,int ) ;

__attribute__((used)) static void FUNC_15(const void *VAR_8, void* VAR_9)
{
    const spitest_param_set_t *VAR_10 = (spitest_param_set_t*)VAR_8;
    spitest_context_t* VAR_11 = (spitest_context_t*)VAR_9;
    FUNC_0(VAR_4, "****************** %s ***************", VAR_10->pset_name);
    FUNC_6(VAR_10, VAR_11);

    const int *VAR_12 = VAR_10->freq_list;
    for (int VAR_13=0; ; VAR_13++ ) {
        const int VAR_14 = VAR_12[VAR_13];
        if (VAR_14==0) break;
        if (VAR_10->freq_limit != 0 && VAR_14 > VAR_10->freq_limit) break;

        FUNC_0(VAR_3, "==============> %dk", VAR_12[VAR_13]/1000);

        FUNC_9(VAR_14, VAR_10, VAR_11);


        for (int VAR_15 = 0; VAR_15 < VAR_10->test_size; VAR_15 ++) {
            FUNC_13( VAR_11->slave_context.data_to_send, &VAR_11->slave_trans[VAR_15], VAR_6 );

        }

        FUNC_12(50/VAR_7);
        FUNC_10("slave ready");

        for( int VAR_16= 0; VAR_16 < VAR_10->test_size; VAR_16 ++ ) {

            FUNC_0( VAR_3, "===== test%d =====", VAR_16 );

            FUNC_12(20);

            spi_transaction_t *VAR_17 = &VAR_11->master_trans[VAR_16];
            int VAR_18 = FUNC_3(VAR_10->dup, VAR_17);
            FUNC_7(VAR_17, VAR_1);

            size_t VAR_19;
            slave_rxdata_t *VAR_20 = FUNC_14( VAR_11->slave_context.data_received, &VAR_19, VAR_6 );
            FUNC_8(VAR_20, 1);


            const bool VAR_21 = 0;
            bool VAR_22 = (VAR_10->dup!=VAR_2);
            const bool VAR_23 = 1;
            FUNC_2(FUNC_5(VAR_18, VAR_17, VAR_20, VAR_21, VAR_23, VAR_22));

            FUNC_11( VAR_11->slave_context.data_received, VAR_20 );
        }
        FUNC_1(FUNC_4(VAR_5) == VAR_0);
    }
}
