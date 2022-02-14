
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int UBaseType_t ;
typedef int TaskHandle_t ;
typedef int TaskFunction_t ;
typedef int BaseType_t ;


 int FUNC_0 (int ,char const* const,int const,void* const,int ,int * const) ;
 int FUNC_1 (int ,char const* const,int const,void* const,int ,int * const,int const) ;

BaseType_t FUNC_2( TaskFunction_t VAR_0,
                        const char * const VAR_1,
                        const uint32_t VAR_2,
                        void * const VAR_3,
                        UBaseType_t VAR_4,
                        TaskHandle_t * const VAR_5,
                        const BaseType_t VAR_6 ){

    if(VAR_6 >= 0 && VAR_6 < 2) {
        return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    } else {

    return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

    }

}
