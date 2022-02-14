
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_6__ {scalar_t__ ringbuffer; scalar_t__ error_code; } ;
typedef TYPE_1__ BrotliDecoderState ;
typedef scalar_t__ BrotliDecoderErrorCode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t*,int const**,int ,int ) ;

const uint8_t* FUNC_3(BrotliDecoderState* VAR_3, size_t* VAR_4) {
  uint8_t* VAR_5 = 0;
  size_t VAR_6 = *VAR_4 ? *VAR_4 : 1u << 24;
  size_t VAR_7 = VAR_6;
  BrotliDecoderErrorCode VAR_8;
  if ((VAR_3->ringbuffer == 0) || ((int)VAR_3->error_code < 0)) {
    *VAR_4 = 0;
    return 0;
  }
  FUNC_1(VAR_3);
  VAR_8 = FUNC_2(VAR_3, &VAR_6, &VAR_5, 0, VAR_2);

  if (VAR_8 == VAR_1 ||
      VAR_8 == VAR_0) {
    *VAR_4 = VAR_7 - VAR_6;
  } else {


    if ((int)VAR_8 < 0) FUNC_0(VAR_3, VAR_8);
    *VAR_4 = 0;
    VAR_5 = 0;
  }
  return VAR_5;
}
