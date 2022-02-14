
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ResampleContext {int dummy; } ;
typedef int soxr_t ;
struct TYPE_4__ {double precision; int bw_pc; int passband_end; } ;
typedef TYPE_1__ soxr_quality_spec_t ;
typedef int soxr_io_spec_t ;
typedef int soxr_error_t ;
typedef int soxr_datatype_t ;
typedef enum SwrFilterType { ____Placeholder_SwrFilterType } SwrFilterType ;
typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,double) ;
 int FUNC_1 (double,double) ;
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
 int FUNC_2 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_3 (int,int,int ,int *,int *,TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 TYPE_1__ FUNC_6 (int,int) ;

__attribute__((used)) static struct ResampleContext *FUNC_7(struct ResampleContext *VAR_19, int VAR_20, int VAR_21, int VAR_22, int VAR_23, int VAR_24,
        double VAR_25, enum AVSampleFormat VAR_26, enum SwrFilterType VAR_27, double VAR_28, double VAR_29, int VAR_30, int VAR_31){
    soxr_error_t VAR_32;

    soxr_datatype_t VAR_33 =
        VAR_26 == VAR_6? VAR_15 :
        VAR_26 == VAR_5 ? VAR_14 :
        VAR_26 == VAR_8? VAR_17 :
        VAR_26 == VAR_7 ? VAR_16 :
        VAR_26 == VAR_4? VAR_10 :
        VAR_26 == VAR_3 ? VAR_9 :
        VAR_26 == VAR_2? VAR_12 :
        VAR_26 == VAR_1 ? VAR_11 : (soxr_datatype_t)-1;

    soxr_io_spec_t VAR_34 = FUNC_5(VAR_33, VAR_33);

    soxr_quality_spec_t VAR_35 = FUNC_6((int)((VAR_29-2)/4), (VAR_13|VAR_18)*!!VAR_30);
    VAR_35.precision = VAR_29;

    VAR_35.bw_pc = VAR_25? FUNC_0(FUNC_1(VAR_25,.995),.8)*100 : VAR_35.bw_pc;




    FUNC_4((soxr_t)VAR_19);
    VAR_19 = (struct ResampleContext *)
        FUNC_3(VAR_21, VAR_20, 0, &VAR_32, &VAR_34, &VAR_35, 0);
    if (!VAR_19)
        FUNC_2(((void*)0), VAR_0, "soxr_create: %s\n", VAR_32);
    return VAR_19;
}
