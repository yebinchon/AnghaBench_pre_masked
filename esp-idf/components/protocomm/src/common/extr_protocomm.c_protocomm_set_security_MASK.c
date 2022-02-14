
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * pop; TYPE_2__ const* sec; int * sec_inst; } ;
typedef TYPE_1__ protocomm_t ;
struct TYPE_8__ {scalar_t__ (* init ) (int **) ;int (* cleanup ) (int *) ;} ;
typedef TYPE_2__ protocomm_security_t ;
typedef int protocomm_security_pop_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (void*,int const*,int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,int ,void*,int ) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_1__*,char const*) ;
 scalar_t__ FUNC_5 (int **) ;
 int FUNC_6 (int *) ;

esp_err_t FUNC_7(protocomm_t *VAR_7, const char *VAR_8,
                                 const protocomm_security_t *VAR_9,
                                 const protocomm_security_pop_t *VAR_10)
{
    if ((VAR_7 == ((void*)0)) || (VAR_8 == ((void*)0)) || (VAR_9 == ((void*)0))) {
        return VAR_0;
    }

    if (VAR_7->sec) {
        return VAR_1;
    }

    esp_err_t VAR_11 = FUNC_3(VAR_7, VAR_8,
                                                    VAR_6,
                                                    (void *) VAR_7, VAR_4);
    if (VAR_11 != VAR_3) {
        FUNC_0(VAR_5, "Error adding security endpoint");
        return VAR_11;
    }

    if (VAR_9->init) {
        VAR_11 = VAR_9->init(&VAR_7->sec_inst);
        if (VAR_11 != VAR_3) {
            FUNC_0(VAR_5, "Error initializing security");
            FUNC_4(VAR_7, VAR_8);
            return VAR_11;
        }
    }
    VAR_7->sec = VAR_9;

    if (VAR_10) {
        VAR_7->pop = FUNC_1(sizeof(protocomm_security_pop_t));
        if (VAR_7->pop == ((void*)0)) {
            FUNC_0(VAR_5, "Error allocating Proof of Possession");
            if (VAR_7->sec && VAR_7->sec->cleanup) {
                VAR_7->sec->cleanup(VAR_7->sec_inst);
                VAR_7->sec_inst = ((void*)0);
                VAR_7->sec = ((void*)0);
            }

            FUNC_4(VAR_7, VAR_8);
            return VAR_2;
        }
        FUNC_2((void *)VAR_7->pop, VAR_10, sizeof(protocomm_security_pop_t));
    }
    return VAR_3;
}
