
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* freq_list; int const freq_limit; int test_size; scalar_t__ dup; int const master_limit; int pset_name; } ;
typedef TYPE_2__ spitest_param_set_t ;
struct TYPE_8__ {int data_received; } ;
struct TYPE_10__ {TYPE_1__ slave_context; int * master_trans; } ;
typedef TYPE_3__ spitest_context_t ;
typedef int spi_transaction_t ;
typedef int spi_device_handle_t ;
typedef int slave_rxdata_t ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int,int *,int *,int,int const,int const) ;
 int FUNC_6 (TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int const,TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (int) ;
 int * FUNC_13 (int ,size_t*,int ) ;

__attribute__((used)) static void FUNC_14(const void *VAR_3, void* VAR_4)
{
    const spitest_param_set_t *VAR_5 = (spitest_param_set_t*)VAR_3;
    spitest_context_t* VAR_6 = (spitest_context_t*)VAR_4;
    spi_device_handle_t VAR_7;
    FUNC_6(VAR_5, VAR_6);
    const int *VAR_8 = VAR_5->freq_list;

    FUNC_0(VAR_1, "****************** %s ***************", VAR_5->pset_name);
    for (int VAR_9=0; ; VAR_9++ ) {
        const int VAR_10 = VAR_8[VAR_9];
        if (VAR_10==0) break;
        if (VAR_5->freq_limit && VAR_10 > VAR_5->freq_limit) break;

        FUNC_0(VAR_1, "==============> %dk", VAR_10/1000);
        FUNC_9(&VAR_7, VAR_10, VAR_5, VAR_6);

        FUNC_10("slave ready");

        for( int VAR_11= 0; VAR_11 < VAR_5->test_size; VAR_11 ++ ) {

            FUNC_0( VAR_1, "=> test%d", VAR_11 );

            FUNC_12(20);

            spi_transaction_t *VAR_12 = &VAR_6->master_trans[VAR_11];
            FUNC_1 (FUNC_4(VAR_7, VAR_12) );
            int VAR_13 = FUNC_2(VAR_5->dup, VAR_12);
            FUNC_7(VAR_12, VAR_13);

            size_t VAR_14;
            slave_rxdata_t *VAR_15 = FUNC_13( VAR_6->slave_context.data_received, &VAR_14, VAR_2 );
            FUNC_8(VAR_15, 0);


            bool VAR_16 = (VAR_5->dup != VAR_0 &&
                        (VAR_5->master_limit == 0 || VAR_10 <= VAR_5->master_limit));
            const bool VAR_17 = 0;
            const bool VAR_18 = 0;
            if (!VAR_16) {
                FUNC_0(VAR_1, "skip data check due to duplex mode or freq.");
            } else {
                FUNC_1(FUNC_5(VAR_13, VAR_12, VAR_15, VAR_16,
                    VAR_18, VAR_17));
            }

            FUNC_11( VAR_6->slave_context.data_received, VAR_15 );
        }
        FUNC_3(VAR_7);
    }
}
