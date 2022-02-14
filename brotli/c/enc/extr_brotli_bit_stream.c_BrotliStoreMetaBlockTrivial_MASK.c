
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {int alphabet_size_max; } ;
struct TYPE_17__ {TYPE_1__ dist; } ;
struct TYPE_16__ {int data_; } ;
struct TYPE_15__ {int data_; } ;
struct TYPE_14__ {int data_; } ;
typedef int MemoryManager ;
typedef TYPE_2__ HistogramLiteral ;
typedef TYPE_3__ HistogramDistance ;
typedef TYPE_4__ HistogramCommand ;
typedef int Command ;
typedef TYPE_5__ BrotliEncoderParams ;
typedef scalar_t__ BROTLI_BOOL ;


 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int,int ,size_t*,int *) ;
 int FUNC_5 (int ,int,int,int,int *,int *,size_t*,int *) ;
 int FUNC_6 (int const*,size_t,size_t,int const*,size_t,TYPE_2__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_10 (size_t*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (scalar_t__,size_t,size_t*,int *) ;
 int FUNC_12 (int const*,size_t,size_t,int const*,size_t,int *,int *,int *,int *,int *,int *,size_t*,int *) ;
 int VAR_5 ;

void FUNC_13(MemoryManager* VAR_6,
    const uint8_t* VAR_7, size_t VAR_8, size_t VAR_9, size_t VAR_10,
    BROTLI_BOOL VAR_11, const BrotliEncoderParams* VAR_12,
    const Command* VAR_13, size_t VAR_14,
    size_t* VAR_15, uint8_t* VAR_16) {
  HistogramLiteral VAR_17;
  HistogramCommand VAR_18;
  HistogramDistance VAR_19;
  uint8_t VAR_20[VAR_1];
  uint16_t VAR_21[VAR_1];
  uint8_t VAR_22[VAR_0];
  uint16_t VAR_23[VAR_0];
  uint8_t VAR_24[VAR_4];
  uint16_t VAR_25[VAR_4];
  VAR_2* VAR_5;
  uint32_t VAR_26 = VAR_12->dist.alphabet_size_max;

  FUNC_11(VAR_11, VAR_9, VAR_15, VAR_16);

  FUNC_9(&VAR_17);
  FUNC_7(&VAR_18);
  FUNC_8(&VAR_19);

  FUNC_6(VAR_7, VAR_8, VAR_10, VAR_13, VAR_14,
                  &VAR_17, &VAR_18, &VAR_19);

  FUNC_4(13, 0, VAR_15, VAR_16);

  VAR_5 = FUNC_0(VAR_6, VAR_2, VAR_3);
  if (FUNC_3(VAR_6) || FUNC_2(VAR_5)) return;
  FUNC_5(VAR_17.data_, VAR_1,
                           VAR_1, VAR_5,
                           VAR_20, VAR_21,
                           VAR_15, VAR_16);
  FUNC_5(VAR_18.data_, VAR_0,
                           VAR_0, VAR_5,
                           VAR_22, VAR_23,
                           VAR_15, VAR_16);
  FUNC_5(VAR_19.data_, VAR_4,
                           VAR_26, VAR_5,
                           VAR_24, VAR_25,
                           VAR_15, VAR_16);
  FUNC_1(VAR_6, VAR_5);
  FUNC_12(VAR_7, VAR_8, VAR_10, VAR_13,
                            VAR_14, VAR_20, VAR_21,
                            VAR_22, VAR_23,
                            VAR_24, VAR_25,
                            VAR_15, VAR_16);
  if (VAR_11) {
    FUNC_10(VAR_15, VAR_16);
  }
}
