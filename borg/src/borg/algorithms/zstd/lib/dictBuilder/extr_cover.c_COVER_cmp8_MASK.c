
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U64 ;
typedef scalar_t__ U32 ;
struct TYPE_3__ {int d; scalar_t__ const samples; } ;
typedef TYPE_1__ COVER_ctx_t ;


 int const FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(COVER_ctx_t *VAR_0, const void *VAR_1, const void *VAR_2) {
  U64 const VAR_3 = (VAR_0->d == 8) ? (U64)-1 : (((U64)1 << (8 * VAR_0->d)) - 1);
  U64 const VAR_4 = FUNC_0(VAR_0->samples + *(U32 const *)VAR_1) & VAR_3;
  U64 const VAR_5 = FUNC_0(VAR_0->samples + *(U32 const *)VAR_2) & VAR_3;
  if (VAR_4 < VAR_5) {
    return -1;
  }
  return (VAR_4 > VAR_5);
}
