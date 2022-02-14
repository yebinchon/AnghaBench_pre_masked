
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ quality; } ;
typedef int ContextType ;
typedef TYPE_1__ BrotliEncoderParams ;


 int FUNC_0 (int const*,size_t const,size_t const,size_t const,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ContextType FUNC_1(const BrotliEncoderParams* VAR_4,
    const uint8_t* VAR_5, const size_t VAR_6, const size_t VAR_7,
    const size_t VAR_8) {


  if (VAR_4->quality >= VAR_2 &&
      !FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_3)) {
    return VAR_0;
  }
  return VAR_1;
}
