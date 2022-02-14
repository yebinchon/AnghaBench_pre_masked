
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct secasvar {int flags; scalar_t__ alg_enc; TYPE_3__* sah; int spi; TYPE_1__* key_enc; } ;
struct esp_algorithm {int dummy; } ;
struct TYPE_5__ {int mode; } ;
struct TYPE_6__ {TYPE_2__ saidx; int state; int dir; int * ipsec_if; } ;
struct TYPE_4__ {scalar_t__ sadb_key_bits; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct secasvar*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct esp_algorithm* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,char*,char*,int ,int ,int ) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct secasvar *VAR_5)
{
 const struct esp_algorithm *VAR_6;

 FUNC_0(VAR_5);

 if ((VAR_5->flags & VAR_4) != 0) {
  FUNC_3("ChaChaPoly is incompatible with SADB_X_EXT_OLD, SPI 0x%08x",
     FUNC_5(VAR_5->spi));
  return 1;
 }
 if ((VAR_5->flags & VAR_2) != 0) {
  FUNC_3("ChaChaPoly is incompatible with SADB_X_EXT_DERIV, SPI 0x%08x",
     FUNC_5(VAR_5->spi));
  return 1;
 }

 if (VAR_5->alg_enc != VAR_1) {
  FUNC_3("ChaChaPoly unsupported algorithm %d, SPI 0x%08x",
     VAR_5->alg_enc, FUNC_5(VAR_5->spi));
  return 1;
 }

 if (VAR_5->key_enc == ((void*)0)) {
  FUNC_3("ChaChaPoly key is missing, SPI 0x%08x",
     FUNC_5(VAR_5->spi));
  return 1;
 }

 VAR_6 = FUNC_1(VAR_5->alg_enc);
 if (VAR_6 == ((void*)0)) {
  FUNC_3("ChaChaPoly lookup failed for algorithm %d, SPI 0x%08x",
     VAR_5->alg_enc, FUNC_5(VAR_5->spi));
  return 1;
 }

 if (VAR_5->key_enc->sadb_key_bits != VAR_0) {
  FUNC_3("ChaChaPoly invalid key length %d bits, SPI 0x%08x",
     VAR_5->key_enc->sadb_key_bits, FUNC_5(VAR_5->spi));
  return 1;
 }

 FUNC_2("ChaChaPoly Mature SPI 0x%08x%s %s dir %u state %u mode %u",
     FUNC_5(VAR_5->spi),
     (((VAR_5->flags & VAR_3) != 0) ? " IIV" : ""),
     ((VAR_5->sah->ipsec_if != ((void*)0)) ? FUNC_4(VAR_5->sah->ipsec_if) : "NONE"),
     VAR_5->sah->dir, VAR_5->sah->state, VAR_5->sah->saidx.mode);

 return 0;
}
