
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 (int *,int const,TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int,int *,int *,int,int const,int) ;
 int FUNC_9 (TYPE_2__ const*,TYPE_3__*) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int) ;
 int * FUNC_14 (int ,size_t*,int ) ;

__attribute__((used)) static void FUNC_15(const void* VAR_7, void* VAR_8)
{
    const spitest_param_set_t *VAR_9 = VAR_7;
    spitest_context_t *VAR_10 = VAR_8;
    spi_device_handle_t VAR_11;
    FUNC_9(VAR_9, VAR_10);
    const int *VAR_12 = VAR_9->freq_list;

    FUNC_0(VAR_3, "****************** %s ***************", VAR_9->pset_name);
    for (int VAR_13 = 0; ; VAR_13++) {
        const int VAR_14 = VAR_12[VAR_13];
        if (VAR_14==0) break;
        if (VAR_9->freq_limit && VAR_14 > VAR_9->freq_limit) break;

        FUNC_0(VAR_3, "======> %dk", VAR_14 / 1000);
        FUNC_4(&VAR_11, VAR_14, VAR_9, VAR_10);

        for (int VAR_15 = 0; VAR_15 < VAR_9->test_size; VAR_15++) {

            FUNC_0(VAR_3, "=> test%d", VAR_15);

            FUNC_13(9);

            spi_transaction_t *VAR_16 = &VAR_10->master_trans[VAR_15];
            FUNC_2(FUNC_6(VAR_11, VAR_16));
            int VAR_17 = FUNC_3(VAR_9->dup, VAR_16);
            FUNC_10(VAR_16, VAR_17);

            size_t VAR_18;
            slave_rxdata_t *VAR_19 = FUNC_14(VAR_10->slave_context.data_received, &VAR_18, VAR_6);
            FUNC_11(VAR_19, 1);


            bool VAR_20 = (VAR_9->dup!=VAR_2 &&
                    (VAR_9->master_limit==0 || VAR_14 <= VAR_9->master_limit));
            bool VAR_21 = (VAR_9->dup!=VAR_1);
            const bool VAR_22 = 1;
            if (!VAR_20) FUNC_0(VAR_3, "skip master data check");
            if (!VAR_21) FUNC_0(VAR_4, "skip slave data check");

            FUNC_2(FUNC_8(VAR_17, VAR_16, VAR_19, VAR_20, VAR_22, VAR_21));

            FUNC_12(VAR_10->slave_context.data_received, VAR_19);
        }
        FUNC_5(VAR_11);
        FUNC_1(FUNC_7(VAR_5) == VAR_0);
    }
}
