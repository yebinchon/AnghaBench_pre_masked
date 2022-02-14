
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_7__ ;
typedef struct TYPE_47__ TYPE_6__ ;
typedef struct TYPE_46__ TYPE_5__ ;
typedef struct TYPE_45__ TYPE_4__ ;
typedef struct TYPE_44__ TYPE_3__ ;
typedef struct TYPE_43__ TYPE_2__ ;
typedef struct TYPE_42__ TYPE_1__ ;
typedef struct TYPE_41__ TYPE_19__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_12__ ;


struct TYPE_48__ {scalar_t__ (* Realize ) (TYPE_7__**,int const) ;scalar_t__ (* GetInterface ) (TYPE_7__**,int const,TYPE_6__***) ;} ;
struct TYPE_47__ {scalar_t__ (* RegisterCallback ) (TYPE_6__**,int ,int *) ;scalar_t__ (* SetPlayState ) (TYPE_6__**,int ) ;} ;
struct TYPE_46__ {int member_1; int member_5; int member_6; int member_4; int member_3; int member_2; int member_0; } ;
struct TYPE_45__ {int member_1; int member_0; } ;
struct TYPE_44__ {TYPE_16__** member_1; int member_0; } ;
struct TYPE_43__ {int * member_1; TYPE_3__* member_0; } ;
struct TYPE_42__ {TYPE_5__* member_1; TYPE_4__* member_0; } ;
struct TYPE_41__ {scalar_t__ (* Realize ) (TYPE_19__**,int const) ;scalar_t__ (* GetInterface ) (TYPE_19__**,int ,TYPE_12__***) ;} ;
struct TYPE_40__ {scalar_t__ (* Realize ) (TYPE_16__**,int const) ;} ;
struct TYPE_39__ {scalar_t__ (* CreateOutputMix ) (TYPE_12__**,TYPE_16__***,int,int const*,int const*) ;scalar_t__ (* CreateAudioPlayer ) (TYPE_12__**,TYPE_7__***,TYPE_1__*,TYPE_2__*,int,int const*,int const*) ;} ;
typedef scalar_t__ SLresult ;
typedef int SLboolean ;
typedef int SLInterfaceID ;
typedef TYPE_1__ SLDataSource ;
typedef TYPE_2__ SLDataSink ;
typedef TYPE_3__ SLDataLocator_OutputMix ;
typedef TYPE_4__ SLDataLocator_AndroidSimpleBufferQueue ;
typedef TYPE_5__ SLDataFormat_PCM ;


 int FUNC_0 () ;
 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int VAR_8 ;
 int const VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int) ;
 TYPE_6__** VAR_19 ;
 int VAR_20 ;
 TYPE_6__** VAR_21 ;
 TYPE_6__** VAR_22 ;
 TYPE_7__** VAR_23 ;
 TYPE_6__** VAR_24 ;
 TYPE_6__** VAR_25 ;
 TYPE_12__** VAR_26 ;
 TYPE_19__** VAR_27 ;
 scalar_t__ VAR_28 ;
 TYPE_16__** VAR_29 ;
 scalar_t__ FUNC_2 (TYPE_19__***,int ,int *,int ,int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_19__**,int const) ;
 scalar_t__ FUNC_4 (TYPE_7__**,int const,TYPE_6__***) ;
 scalar_t__ FUNC_5 (TYPE_7__**,int const,TYPE_6__***) ;
 scalar_t__ FUNC_6 (TYPE_7__**,int const,TYPE_6__***) ;
 scalar_t__ FUNC_7 (TYPE_6__**,int ) ;
 scalar_t__ FUNC_8 (TYPE_19__**,int ,TYPE_12__***) ;
 scalar_t__ FUNC_9 (TYPE_12__**,TYPE_16__***,int,int const*,int const*) ;
 scalar_t__ FUNC_10 (TYPE_16__**,int const) ;
 scalar_t__ FUNC_11 (TYPE_12__**,TYPE_7__***,TYPE_1__*,TYPE_2__*,int,int const*,int const*) ;
 scalar_t__ FUNC_12 (TYPE_7__**,int const) ;
 scalar_t__ FUNC_13 (TYPE_7__**,int const,TYPE_6__***) ;
 scalar_t__ FUNC_14 (TYPE_7__**,int const,TYPE_6__***) ;
 scalar_t__ FUNC_15 (TYPE_6__**,int ,int *) ;

__attribute__((used)) static int FUNC_16(void)
{
   int VAR_30;


    SLDataLocator_AndroidSimpleBufferQueue VAR_31 = {VAR_4, 2};
    SLDataFormat_PCM VAR_32 = {VAR_3, 2, VAR_16,
        VAR_13, VAR_13,
        (VAR_17 | VAR_18), VAR_2};
    SLDataSource VAR_33 = {&VAR_31, &VAR_32};

   SLresult VAR_34;



   VAR_34 = FUNC_2(&VAR_27, 0, ((void*)0), 0, ((void*)0), ((void*)0));
   FUNC_1(VAR_15 == VAR_34);


   VAR_34 = (*VAR_27)->Realize(VAR_27, VAR_0);
   FUNC_1(VAR_15 == VAR_34);


   VAR_34 = (*VAR_27)->GetInterface(VAR_27, VAR_8, &VAR_26);
   FUNC_1(VAR_15 == VAR_34);


   const SLInterfaceID VAR_35[1] = {VAR_9};
   const SLboolean VAR_36[1] = {VAR_0};

   VAR_34 = (*VAR_26)->CreateOutputMix(VAR_26, &VAR_29, 1, VAR_35, VAR_36);
   FUNC_1(VAR_15 == VAR_34);


   VAR_34 = (*VAR_29)->Realize(VAR_29, VAR_0);
   FUNC_1(VAR_15 == VAR_34);


    SLDataLocator_OutputMix VAR_37 = {VAR_5, VAR_29};
    SLDataSink VAR_38 = {&VAR_37, ((void*)0)};


    const SLInterfaceID VAR_39[3] = {VAR_6, VAR_7, VAR_12};
    const SLboolean VAR_40[3] = {VAR_1, VAR_1, VAR_1};
    VAR_34 = (*VAR_26)->CreateAudioPlayer(VAR_26, &VAR_23, &VAR_33, &VAR_38,
            3, VAR_39, VAR_40);
    FUNC_1(VAR_15 == VAR_34);


    VAR_34 = (*VAR_23)->Realize(VAR_23, VAR_0);
    FUNC_1(VAR_15 == VAR_34);


    VAR_34 = (*VAR_23)->GetInterface(VAR_23, VAR_11, &VAR_24);
    FUNC_1(VAR_15 == VAR_34);


    VAR_34 = (*VAR_23)->GetInterface(VAR_23, VAR_6,
            &VAR_19);
    FUNC_1(VAR_15 == VAR_34);


    VAR_34 = (*VAR_19)->RegisterCallback(VAR_19, VAR_20, ((void*)0));
    FUNC_1(VAR_15 == VAR_34);


    VAR_34 = (*VAR_23)->GetInterface(VAR_23, VAR_7,
            &VAR_21);
    FUNC_1(VAR_15 == VAR_34);
    VAR_34 = (*VAR_23)->GetInterface(VAR_23, VAR_12, &VAR_25);
    FUNC_1(VAR_15 == VAR_34);

    FUNC_0();



   VAR_34 = (*VAR_24)->SetPlayState(VAR_24, VAR_14);
   FUNC_1(VAR_15 == VAR_34);

   VAR_28 = 0;

   return 0;
}
