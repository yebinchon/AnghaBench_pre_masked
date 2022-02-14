
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ivsize; } ;
struct TYPE_3__ {scalar_t__ ivsize; } ;
struct crypto_alg {int cra_flags; scalar_t__ cra_blocksize; TYPE_2__ cra_ablkcipher; TYPE_1__ cra_blkcipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;

const char *FUNC_0(const struct crypto_alg *VAR_4)
{
 if (((VAR_4->cra_flags & VAR_2) ==
      VAR_1 ? VAR_4->cra_blkcipher.ivsize :
      VAR_4->cra_ablkcipher.ivsize) !=
     VAR_4->cra_blocksize)
  return "chainiv";

 return VAR_4->cra_flags & VAR_0 ?
        "eseqiv" : VAR_3;
}
