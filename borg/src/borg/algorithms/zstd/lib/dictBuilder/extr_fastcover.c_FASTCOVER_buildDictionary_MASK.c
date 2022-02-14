
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t k; size_t d; } ;
typedef TYPE_1__ ZDICT_cover_params_t ;
typedef void* U32 ;
typedef int U16 ;
struct TYPE_11__ {scalar_t__ score; scalar_t__ begin; scalar_t__ end; } ;
struct TYPE_10__ {unsigned int const nbDmers; scalar_t__ samples; } ;
typedef TYPE_2__ FASTCOVER_ctx_t ;
typedef TYPE_3__ COVER_segment_t ;
typedef int BYTE ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int,char*,unsigned int) ;
 TYPE_3__ FUNC_2 (TYPE_2__ const*,void**,void* const,void* const,TYPE_1__,int *) ;
 unsigned int FUNC_3 (int,void*) ;
 size_t FUNC_4 (scalar_t__,size_t) ;
 int FUNC_5 (int * const,scalar_t__,size_t) ;

__attribute__((used)) static size_t
FUNC_6(const FASTCOVER_ctx_t* VAR_0,
                          U32* VAR_1,
                          void* VAR_2, size_t VAR_3,
                          ZDICT_cover_params_t VAR_4,
                          U16* VAR_5)
{
  BYTE *const VAR_6 = (BYTE *)VAR_2;
  size_t VAR_7 = VAR_3;



  const unsigned VAR_8 = FUNC_3(1, (U32)(VAR_3 / VAR_4.k));
  const unsigned VAR_9 = (U32)(VAR_0->nbDmers / VAR_8);
  size_t VAR_10;
  FUNC_0(2, "Breaking content into %u epochs of size %u\n",
                VAR_8, VAR_9);



  for (VAR_10 = 0; VAR_7 > 0; VAR_10 = (VAR_10 + 1) % VAR_8) {
    const U32 VAR_11 = (U32)(VAR_10 * VAR_9);
    const U32 VAR_12 = VAR_11 + VAR_9;
    size_t VAR_13;

    COVER_segment_t VAR_14 = FUNC_2(
        VAR_0, VAR_1, VAR_11, VAR_12, VAR_4, VAR_5);


    if (VAR_14.score == 0) {
      break;
    }


    VAR_13 = FUNC_4(VAR_14.end - VAR_14.begin + VAR_4.d - 1, VAR_7);
    if (VAR_13 < VAR_4.d) {
      break;
    }




    VAR_7 -= VAR_13;
    FUNC_5(VAR_6 + VAR_7, VAR_0->samples + VAR_14.begin, VAR_13);
    FUNC_1(
        2, "\r%u%%       ",
        (unsigned)(((VAR_3 - VAR_7) * 100) / VAR_3));
  }
  FUNC_0(2, "\r%79s\r", "");
  return VAR_7;
}
